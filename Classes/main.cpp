#include <iostream>
# define pi 3.142
using namespace std;

class circle{
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }

    float area (void)
    {
        return pi*radius*radius;
    }
    float circumference(void)
    {
        return 2*pi*radius;
    }
};
int main()
{
    circle c; // Object created

    float radius;
    cout <<"Enter the radius of the circle: ";
    cin >> radius;

    c.setRadius(radius); // Object initialized

    cout << "Circumference: "<< c.circumference()<< endl;
    cout << "Area: "<< c.area()<< endl;

    return 0;
}