#include <iostream>
using namespace std;

class sample
{
    int a;
    int b;

public :
    void setvalue() {
        cout << "Enter the first value: ";
        cin >> a;
        cout << "Enter the second value: ";
        cin >> b;
    }

    friend float mean(sample s);
} ;

float mean(sample s) {
    return float(s.a + s.b) / 2.0;
}

int main( ) {
    sample x; // object X
    x.setvalue();
    cout << "Mean value = " << mean(x) << endl;
    return 0;
    }
