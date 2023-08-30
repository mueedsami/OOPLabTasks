#include<iostream>
using namespace std;

class Calculator {
    int currentval;

public:
    Calculator()
    {
      currentval=0;
    }

    Calculator(int val)
    {
        currentval=val;
    }
    int getValue()
    {
        return currentval;
    }
    void add (int value)
    {
        currentval+=value;

    }
    void subtract (int value)
    {
        currentval-=value;

    }
    void multiply(int value)
    {
        currentval*=value;

    }
    void divideBy(int value)
    {
        if (value==0)
            cout<<"Error: divide by 0 is undefined"<<endl;
        else currentval/=value;

    }
    void clr()
    {
        currentval=0;
    }

    void display ()
    {
        cout<<"Calculator display: "<<currentval<<endl;
    }
    ~Calculator()
    {
        cout<<"The class is destroyed"<<endl;
    }

};


int main()
{
    int val;

    Calculator cal(5);

    cal.add(10);
    cal.display();
    cal.add(7);
    cal.display();
    cal.multiply(31);
    cal.display();
    cal.subtract(42);
    cal.display();
    cal.divideBy(7);
    cal.display();
    cal.divideBy(0);
    cal.display();
    cal.add(3);
    cal.display();
    cal.subtract(1);
    cal.display();
    cal.clr();
    cal.display();




}
