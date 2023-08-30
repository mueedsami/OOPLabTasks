#include<iostream>
#include<string.h>

using namespace std;


class counter
{
    int count;
    int inc_step;

    public:
        void setincrementStep(int stepval)
        {
            inc_step=stepval;
        }
        int getcount()
        {
           return count;
        }
        void increment()
        {
            count+=inc_step;
        }
        void reset()
        {
            count=0;
        }
};


int main ()
{
    int n;
    cin>>n;
    counter c1;
    c1.setincrementStep(n);
    c1.increment();
    int ret=c1.getcount();
    cout<<ret<<endl;
    //c1.reset();


}
