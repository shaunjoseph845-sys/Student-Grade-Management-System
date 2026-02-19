#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float mark1, mark2, mark3;
    float total, average;
    char grade;

    cout << "Student Grade Management System\n";
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter marks for Subject 1: ";
    cin >> mark1;

    cout << "Enter marks for Subject 2: ";
    cin >> mark2;

    cout << "Enter marks for Subject 3: ";
    cin >> mark3;

    total = mark1 + mark2 + mark3;
    average = total / 3;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n----- Result -----\n";
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

