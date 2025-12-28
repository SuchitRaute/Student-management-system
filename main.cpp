#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
    float marks;
};

int main() {
    Student s[100];
    int choice, count = 0;
    int searchRoll;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[count].roll;
            cout << "Enter Name: ";
            cin >> s[count].name;
            cout << "Enter Age: ";
            cin >> s[count].age;
            cout << "Enter Marks: ";
            cin >> s[count].marks;
            count++;
            cout << "Student added successfully!\n";
            break;

        case 2:
            cout << "\n--- Student List ---\n";
            for (int i = 0; i < count; i++) {
                cout << "\nRoll No: " << s[i].roll;
                cout << "\nName: " << s[i].name;
                cout << "\nAge: " << s[i].age;
                cout << "\nMarks: " << s[i].marks;
                cout << "\n----------------------\n";
            }
            break;

        case 3:
            cout << "\nEnter Roll Number to Search: ";
            cin >> searchRoll;
            for (int i = 0; i < count; i++) {
                if (s[i].roll == searchRoll) {
                    cout << "\nStudent Found!";
                    cout << "\nName: " << s[i].name;
                    cout << "\nAge: " << s[i].age;
                    cout << "\nMarks: " << s[i].marks << endl;
                    break;
                }
                if (i == count - 1)
                    cout << "\nStudent Not Found!\n";
            }
            break;

        case 4:
            cout << "\nEnter Roll Number to Delete: ";
            cin >> searchRoll;
            for (int i = 0; i < count; i++) {
                if (s[i].roll == searchRoll) {
                    for (int j = i; j < count - 1; j++) {
                        s[j] = s[j + 1];
                    }
                    count--;
                    cout << "Student Deleted Successfully!\n";
                    break;
                }
                if (i == count - 1)
                    cout << "Student Not Found!\n";
            }
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
