#include<iostream>
#include<string.h>

using namespace std;

class time
{
    int hour;
    int min;
    int sec;

public:
    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return min;
    }
    int seconds()
    {
        return sec;
    }
    void reset(int hr,int mn,int sc)
    {
        hour=hr;
        min=mn;
        sec=sc;

    }
    void advance(int hp,int mp,int sp)
    {
        hour+=hp;
        min+=mp;
        sec+=sp;
        if(sec>59)
        {
            min=(min+(sec/60));
            sec=sec%60;

        }
        if (min>59)
        {
            hour=(hour+(min/60));
            min=min%60;

        }
        if (hour>23)
        {
            hour=hour%23;
        }

    }
    void print()
    {
       cout<<"Hour:"<<hour<<endl<<" Min:"<<min<<endl<<" Sec:"<<sec<<endl;
    }

};


int main()
{
    time timer;
    int hour,min,sec,hp,mp,sp;
    cout<<"Enter the advancing time:"<<endl;
    cout<<"Hour:";
    cin>>hour;
    cout<<"Min:";
    cin>>min;
    cout<<"Second:";
    cin>>sec;
    timer.reset(hour,min,sec);

    cout<<"Enter the advancing time:"<<endl;
    cout<<"Hour:";
    cin>>hp;
    cout<<"Min:";
    cin>>mp;
    cout<<"Second:";
    cin>>sp;


    timer.advance(hp,mp,sp);
    timer.print();
}
