#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;
    
public:
    // Definition of functions
    void getTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void puttume(void)
    {
        cout << hours <<" hours ";
        cout << minutes << " minutes and " ;
        cout << seconds <<" seconds "<< endl;
    }
    void sum(Time, Time); //Declaration with objects as arguments

    void inputTime();
};

void Time::sum(Time t1, Time t2) //t1 & t2 are objects
{
    // Calculation of time
    seconds = t1.seconds + t2.seconds;
    minutes = seconds/60;
    seconds = seconds%60;
    minutes = minutes + t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours + t1.hours + t2.hours;
}

void Time::inputTime() {
    int h, m, s;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;
    getTime(h,m,s);
    cout<<endl;
}

 int main()
 {
    Time T1, T2, T3;


    cout << "Details for T1: "<< endl;
    T1.inputTime();

    cout << "Details for T2: "<< endl;
    T2.inputTime();

    T3.sum(T1,T2);

    cout <<"---Result---"<<endl;
    cout<<"T1= ";
    T1.puttume();

    cout<<"T2= ";
    T2.puttume();

    cout<<"T3= ";
    T3.puttume();

    return 0;
 }
