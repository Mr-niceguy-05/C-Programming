#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int marks;
    char grade;

    // Get student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks: ";
    cin >> marks;

    // Grade assignation using if-else ladder
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if (marks >= 60) {
        grade = 'B';
    }
    else if (marks >= 50) {
        grade = 'C';
    }
    else if (marks >= 40) {
        grade = 'D';
    }
    else {
        grade = 'E';
    }

    // Results
    cout << "\n--- Student Results ---" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}