#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : {
        // TODO: Initialize name and age attributes
    }

    std::string getName() const {
        // TODO: Return the name
    }

    void setName(const std::string& n) {
        // TODO: Set the name
    }

    int getAge() const {
        // TODO: Return the age
    }

    void setAge(int a) {
        // TODO: Set the age
    }

    virtual void displayDetails() const = 0;
};

class Student : /* TODO: Define Inheritance */ {
private:
    // Add private attributes for Student class
    // Add getters and setters for the attributes

public:
    Student(const std::string& n, int a/* Add student-specific attributes */) : Person(n, a) {
        // Initialize student-specific attributes
    }

    void setStudentID(const std::string& id) {
        // Set student ID
    }

    void displayDetails() const override {
        // Implement displayDetails() method for Student class
    }
};

class Faculty : /* TODO: Define Inheritance */{
private:
    // TODO: Add private attributes for Faculty class
    // TODO: Add getters and setters for the attributes

public:
    Faculty(const std::string& n, int a/* TODO: Add faculty-specific attributes */) : Person(n, a) {
        // TODO: Initialize faculty-specific attributes
    }

    std::string getDepartment() const {
        // TODO: return the department name
    }

    void setDepartment(const std::string& dept) {
        // TODO: Set the department name
    }

    void displayDetails() const override {
        // TODO: Implement displayDetails() method for Faculty class
    }
};

class Staff : /* TODO: Define Inheritance */ {
private:
    // TODO: Add private attributes for Staff class
    // TODO: Add getters and setters for the attributes

public:
    Staff(const std::string& n, int a/* TODO: Add staff-specific attributes */) : Person(n, a) {
        // TODO: Initialize staff-specific attributes
    }

    std::string getPosition() const {
        // TODO: return the position
    }

    void setPosition(const std::string& pos) {
        // TODO: Set the position
    }

    void displayDetails() const override {
        // TODO:  Implement displayDetails() method for Staff class
    }
};

