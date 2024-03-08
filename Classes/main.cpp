#include <iostream>
#include <cmath>
using namespace std;

class rectangle
{
    float length, width;

public:
    void setDimensions(float, float); //Prototypes
    float perimeter ();
    float area ();
    float diagonal ();
};

//Definition of functions
void rectangle::setDimensions(float l, float w) {
    length = l;
    width = w;
}

float rectangle::perimeter (){
    return 2 * (length + width);
}

float rectangle::area() {
    return length*width;
}

float rectangle::diagonal() {
    return sqrt(length * length + width * width);
}

int main ()
{
    rectangle rect;

    float length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);

    cout<<endl;

    cout << "Perimeter: "<< rect.perimeter() << endl;
    cout << "Area: "<< rect.area() << endl;
    cout << "Diagonal: "<< rect.diagonal() << endl;

    return 0;
}


