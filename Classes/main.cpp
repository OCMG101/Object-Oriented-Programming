#include <iostream>

using namespace std;

class Employee{

    double rate;
    int regularHours;
    float overtimeHours;

public:
    Employee(double r,int rh){
        rate = r;
        regularHours = rh;
        overtimeHours = 0;
    }

    void setOvertimeHours(int oh){
        overtimeHours = oh; }

    double getWeeklySalary(){
        double regularSalary = rate * regularHours;
        double overtimeSalary = 1.5 * overtimeHours;

        double totalSalary = regularSalary + overtimeSalary;
        return totalSalary;
    }

};

int main(){
    Employee e(9.00, 40);

    cout << "Please enter your overtime hours: ";
    float oh;
    cin >> oh;

    e.setOvertimeHours(oh);

    double salary = e.getWeeklySalary();

    cout << "The weekly salary of the Employee is $" << salary << endl;

    return 0;

}