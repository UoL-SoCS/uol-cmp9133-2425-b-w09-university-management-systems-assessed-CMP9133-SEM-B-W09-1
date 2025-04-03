class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    std::string getName() const {
        return name;
    }

    void setName(const std::string& n) {
        name = n;
    }

    int getAge() const {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    virtual void displayDetails() const = 0;
};

class Student : public Person {
private:
    std::string studentId;
    double gpa;

public:
    Student(const std::string& n, int a, const std::string& id, double g) : Person(n, a), studentId(id), gpa(g) {}

    std::string getStudentId() const {
        return studentId;
    }

    void setStudentId(const std::string& id) {
        studentId = id;
    }

    double getGpa() const {
        return gpa;
    }

    void setGpa(double g) {
        gpa = g;
    }

    void displayDetails() const override {
        std::cout << "Student Name: " << getName() << std::endl;
        std::cout << "Age: " << getAge() << std::endl;
        std::cout << "Student ID: " << studentId << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }
};

class Faculty : public Person {
private:
    std::string facultyId;
    std::string department;

public:
    Faculty(const std::string& n, int a, const std::string& id, const std::string& dept) : Person(n, a), facultyId(id), department(dept) {}

    std::string getFacultyId() const {
        return facultyId;
    }

    void setFacultyId(const std::string& id) {
        facultyId = id;
    }

    std::string getDepartment() const {
        return department;
    }

    void setDepartment(const std::string& dept) {
        department = dept;
    }

    void displayDetails() const override {
        std::cout << "Faculty Name: " << getName() << std::endl;
        std::cout << "Age: " << getAge() << std::endl;
        std::cout << "Faculty ID: " << facultyId << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};

class Staff : public Person {
private:
    std::string staffId;

public:
    Staff(const std::string& n, int a, const std::string& id) : Person(n, a), staffId(id) {}

    std::string getStaffId() const {
        return staffId;
    }

    void setStaffId(const std::string& id) {
        staffId = id;
    }

    void displayDetails() const override {
        std::cout << "Staff Name: " << getName() << std::endl;
        std::cout << "Age: " << getAge() << std::endl;
        std::cout << "Staff ID: " << staffId << std::endl;
    }
};
