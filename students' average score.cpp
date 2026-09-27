#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables
    string studentName;
    double theoryMarks, practicalMarks, averageScore;

    // Prompt user for details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // Calculate average score
    averageScore = (theoryMarks + practicalMarks) / 2;

    // Display results
    cout << "\n====================================\n";
    cout << "       ROCKY DRIVING SCHOOL\n";
    cout << "        DRIVING TEST RESULT\n";
    cout << "====================================\n";

    cout << "Student Name    : " << studentName << endl;
    cout << "Theory Marks    : " << theoryMarks << endl;
    cout << "Practical Marks : " << practicalMarks << endl;

    cout << fixed << setprecision(2);
    cout << "Average Score   : " << averageScore << endl;

    // Determine pass or fail
    if (averageScore >= 50) {
        cout << "Result          : PASSED" << endl;
    } else {
        cout << "Result          : FAILED" << endl;
    }

    cout << "====================================\n";

    return 0;
}