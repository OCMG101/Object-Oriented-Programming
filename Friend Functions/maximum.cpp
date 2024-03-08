#include <iostream>
using namespace std;

class ABC;   //forward declaration
class PQR;   //forward declaration

class XYZ
{
    int x;
public :
    void setvalue(int i)
    {
        x = i;  //variable x initialised by function setvalue
        cout << " Enter first value: ";
        cin >> x;
    }
    friend void max(XYZ, ABC, PQR);
};

class ABC
{
    int a;
public :
    void setvalue(int i)
    {
        a = i; //variable a initialised by function setvalue
        cout << " Enter second value: ";
        cin >> a;
    }
    friend void max(XYZ, ABC, PQR);
};

class PQR
{
    int b;
public :
    void setvalue(int i)
    {
        b = i; //variable b initialised by function setvalue
        cout << " Enter third value: ";
        cin >> b;
    }
    friend void max(XYZ, ABC, PQR);
};

void max(XYZ m, ABC n, PQR s) //definition of friend
{
    if (m.x > n.a && m.x > s.b){
        cout << m.x << endl;
    }
    else if (n.a > m.x && n.a > s.b){
        cout << n.a << endl;
    }
    else cout << s.b << endl;
}


int main( )
{
    ABC abc;
    abc.setvalue();
    XYZ xyz;
    xyz.setvalue();
    PQR pqr;
    pqr.setvalue();
    max(xyz, abc, pqr);
    return 0;
};
