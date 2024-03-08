#include <iostream>

using namespace std;

class Student
{
    char name [40];
    char course [30];
    char regNo [20];
    float feesPayable;
    float feesPaid;
    float feesBalance;

public:
    void inputDetails();
    void displayDetails();
    void getBalance();
};

void Student::inputDetails() {
    cout << "Name: ";
    cin.getline(name, 40);

    cout << "Course: ";
    cin.getline(course, 30);

    cout << "Registration Number: ";
    cin.getline(regNo, 20);

    cout << "Fee Payable: Ksh. ";
    cin >> feesPayable;

    cout << "Fee Paid: Ksh. ";
    cin >> feesPaid;
}

void Student::getBalance(){
   feesBalance = feesPayable - feesPaid;
}

void Student::displayDetails() {
    cout <<endl;
    cout << "----------------------------------------------" << endl;
    cout << "                  Details" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Name: "  << name << endl;
    cout << "Course: "<< course << endl;
    cout << "Registration Number: " << regNo << endl;
    cout << "Fee Payable: Ksh. " << feesPayable << endl;
    cout << "Fee Paid: Ksh. " << feesPaid << endl;
    cout << "Fee Balance: Ksh. " << feesBalance << endl;
}

int main (){
    Student s;
    s.inputDetails();

    s.getBalance();

    s.displayDetails();

    return 0;
}

