#include<iostream>
#include<string.h>

using namespace std;

class Bankaccount
{
private:
    int accnum;
    char accname[50];
    char acctype [10];
    double balance;
    int minval;

public:

    void setval(int n, char name[], char type[], int blnc, int mn)
    {
        accnum=n;
        strcpy(accname,name);
        strcpy(acctype,type);
        balance=blnc;
        minval=mn;
    }

    void details()
    {
        cout<<"Account Number: "<<accnum<<endl;
        cout<<"Account Name: "<<accname<<endl;
        cout<<"Account Type: "<<acctype<<endl;
        cout<<"Account Balance: "<<balance<<endl;


    }
    void showbalance()
    {
        cout<<"Current balance: "<<balance<<endl;

    }

    void deposit (int dep)
    {
        balance+=dep;
    }
    void withdrawal (int wit)
    {
        if ((balance-wit)>minval) cout<<"Current balance: "<<balance<<endl;
        else cout<<"Insufficient balance "<<endl;
    }
    double giveInterest(float inst=3)
    {
        double interest=(balance*(inst/100));
        interest=(interest-(interest*0.1));
        return interest;
    }
    ~Bankaccount()
    {
        cout<<"Account of Mr./Mrs. "<<accname<<" with account no "<<accnum<<" is destroyed with a balance of BDT. "<< balance<<endl;
    }


};

int main()
{
    int num;
    char name[50];
    char type [10];
    double balance;
    int minimumval;
    int dep,wit;
    float intst;
    double finalinterest;

    cout<<"Enter account Number: ";
    cin>>num;
    cout<<"Enter full name: ";
    cin>>name;
    cout<<"Enter Account type: ";
    cin>>type;
    cout<<"Enter Balance: ";
    cin>>balance;
    cout<<"Enter Minimum value: ";
    cin>>minimumval;

    Bankaccount bank;
    bank.setval(num,name,type,balance,minimumval);
    bank.details();


    cout<<"Enter deposit amount: ";
    cin>>dep;
    bank.deposit(dep);
    bank.showbalance();


    cout<<"Enter withdraw amount: ";
    cin>>wit;
    bank.withdrawal(wit);
    bank.showbalance();


    cout<<"Enter interest percentage: ";
    cin>>intst;
    finalinterest=bank.giveInterest(intst);
    cout<<"Final interest: "<<finalinterest<<endl;





}

