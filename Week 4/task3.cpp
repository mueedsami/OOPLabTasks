#include<iostream>
#include<math.h>
using namespace std;

class rectangle
{
    float length;
    float width;

public:
    void setval(float a=1, float b=1)
    {
        if (a>=1.0 && a<=20.0)
        length=a;
        else cout<<"Error"<<endl;
        if (b>=1.0 && b<=20.0)
            width=b;

        else cout<<"Error"<<endl;


    }


    double perimeter()
    {
        double peri= 2*(length+width);
        return peri;
    }

    double area()
    {
        return (length*width);
    }

    double angle()
    {
        return (atan(width/length))*(180/3.1416);

    }

    double dialength ()
    {
        return (sqrt (pow (length,2) + pow(width,2)));
    }


};

int main()
{
    float length;
    float width;

    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter width: ";
    cin>>width;
    rectangle rec;

    rec.setval(length,width);

    double perimeter=rec.perimeter();
    cout<<"Perimeter: "<<perimeter<<endl;

    double angle=rec.angle();
    cout<<"angle: "<<angle<<endl;

    double diagonalLength=rec.dialength();
    cout<<"Diagonal Length: "<<diagonalLength<<endl;



}
