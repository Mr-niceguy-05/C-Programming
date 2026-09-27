#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age;
    int score;

    // Enter student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    // Nested if statements for admission
    if (age >= 18) {
        if (score >= 50) {
            cout << "\nAdmission Decision: Admitted" << endl;
        }
        else {
            cout << "\nAdmission Decision: Not Admitted: Low Score" << endl;
        }
    }
    else {
        cout << "\nAdmission Decision: Not Admitted: Underage" << endl;
    }

    // Display student details
    cout << "Student Name: " << studentName << endl;
    cout << "Age: " << age << endl;
    cout << "Exam Score: " << score << endl;

    return 0;
}