#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include "university_system.hpp"

// Helper class to capture output for testing
class OutputCapture {
public:
    OutputCapture() {
        old = std::cout.rdbuf();
        std::cout.rdbuf(buffer.rdbuf());
    }

    ~OutputCapture() {
        std::cout.rdbuf(old);
    }

    std::string str() const {
        return buffer.str();
    }

private:
    std::streambuf* old;
    std::ostringstream buffer;
};

TEST_CASE("Student class", "[student]") {
    OutputCapture capture;

    Student student("Alice", 20, "S12345", 3.65);
    student.displayDetails();
    
    std::string output = capture.str();
    REQUIRE(output == "Student Name: Alice\nAge: 20\nStudent ID: S12345\nGPA: 3.65\n");
}

TEST_CASE("Faculty class", "[faculty]") {
    OutputCapture capture;

    Faculty faculty("Dr. Smith", 45, "F12345", "Mathematics");
    faculty.displayDetails();
    
    std::string output = capture.str();
    REQUIRE(output == "Faculty Name: Dr. Smith\nAge: 45\nFaculty ID: F12345\nDepartment: Mathematics\n");
}

TEST_CASE("Staff class", "[staff]") {
    OutputCapture capture;

    Staff staff("John", 30, "S12345");
    staff.displayDetails();
    
    std::string output = capture.str();
    REQUIRE(output == "Staff Name: John\nAge: 30\nStaff ID: S12345\n");
}