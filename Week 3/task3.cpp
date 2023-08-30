#include<iostream>
#include<string.h>

using namespace std;

class medicine
{
    char name[20];
    char genericname[50];
    double discountpercentage;
    double unitprice=0.8;
    double total;

public:
    void assignname(char cname[],char cgenericname[])
    {
        strcpy(name,cname);
        strcpy(genericname,cgenericname);
    }

    void assignprice(double price=0)
    {
        unitprice=price;
    }

    void setdiscountpercent(double percent)
    {
        discountpercentage=percent;
    }
    double getsellingprice (int nos)
    {
        total=nos* (unitprice-(unitprice*(discountpercentage/100)));
        return total;
    }



};

int main()
{
    char name[20],genname[50];
    double price;
    double percent;
    int nos;
    medicine med;

    cout<<"Enter medicine name:"<<endl;
    cin>> name;
    cout<<"Enter medicine Generic name:"<<endl;
    cin>>genname;

    cout<<"Enter medicine price:"<<endl;
    cin>>price;

    cout<<"Enter percentage:"<<endl;
    cin>>percent;
    cout<<"Enter quantity:"<<endl;
    cin>>nos;

    med.assignname(name,genname);
    med.assignprice();
    med.setdiscountpercent(percent);
    double total=med.getsellingprice(nos);
    cout<<total;


}
