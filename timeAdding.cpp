#include <iostream>
using namespace std;
class time
{

    int hour,minute,second;

public:
    void Timing(time &t1, time &t2);

    void get()
{
    cout << "hours" << hour << " " << "minutes" << minute << "   "<< "second" << second << endl;
}
void set()
{
    cout << "enter hours:" ;
    cin >> hour;
    cout << "enter minutes:" ;
    cin >> minute;
    cout << "enter second :" ;
    cin >> second;
}

};
void time::Timing(time &t1, time &t2)
{

    second = t1.second + t2.second;
    minute = second / 60;
    second = second % 60;
    minute = minute + t1.minute + t2.minute;
    hour = minute / 60;
    minute = minute % 60;
    hour = hour + t1.hour + t2.hour;
}


int main()
{
    time t1, t2, t3;
    t1.set();
    t1.get();

    t2.set();
    t2.get();

    t3.Timing(t1, t2);
    t3.get();
    return 0;
}