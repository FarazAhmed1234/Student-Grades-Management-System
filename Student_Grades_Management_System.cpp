#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int marks[5];

public:
    // Method to input student's details
    void inputDetails() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks for 5 subjects: ";
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    // Method to calculate the total marks
    int calculateTotal() {
        int total = 0;
        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    // Method to calculate the average marks
    double calculateAverage() {
        return calculateTotal() / 5.0;
    }

    // Method to display student's details
    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }
};

int main() {
    Student student;
    student.inputDetails();
    student.displayDetails();

    return 0;
}
