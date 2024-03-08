#include <iostream>
using namespace std;

class person
{
    char name [30];
    int age;
    char regNo [20];
    char email [50];
    char dept [10];
    char course [30];


public:
    void setDetails (void); // Prototype
    void displayDetails(void);
};

// Definition of functions
void person::setDetails(void) // Function to input details
{
    cout <<"Enter your name: ";
    cin.getline(name, 30);

    cout <<"Enter your age: ";
    cin >> age;
    cin.ignore(); // Ignore the newline character left in the buffer

    cout <<"Enter your registration number: ";
    cin.getline(regNo, 20);

    cout <<"Enter your student email: ";
    cin.getline(email, 50);

    cout <<"Enter your department: ";
    cin.getline(dept, 10);

    cout <<"Enter your course: ";
    cin.getline(course, 30);
}

 void person::displayDetails(void) { // Function to display the details
    cout << endl;
    cout << "---Details---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Registration Number: " << regNo << endl;
    cout << "Student Email: " << email << endl;
    cout << "Department: " << dept << endl;
    cout << "Course: " << course << endl;

}

int main()
{
    person p1; // Object created
    p1.setDetails();
    p1.displayDetails();
    return 0;
}
