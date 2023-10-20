#include <iostream>
#include <vector>
#include <algorithm>

// Define the student struct
struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

// Comparison function to compare students by CGPA in descending order
bool compareByCGPA(const Student& student1, const Student& student2) {
    return student1.cgpa > student2.cgpa;
}

// Function to sort students based on CGPA
void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareByCGPA);
}

int main() {
    // Create a list of student objects
    std::vector<Student> students = {
        {"Alice", "A101", 3.8},
        {"Bob", "B102", 3.5},
        {"Charlie", "C103", 3.9},
        {"David", "D104", 3.7},
    };

    // Sort the students based on CGPA
    sort_students(students);

    // Display the sorted list of students
    std::cout << "Sorted Students by CGPA (Descending Order):" << std::endl;
    for (const Student& student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}



