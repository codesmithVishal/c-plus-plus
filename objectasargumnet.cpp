/*Program definition: */

#include <iostream>
using namespace std;
class time
{
    int hour;
    int minutes;

public:
    void gettime(int h, int m)
    {
        hour = h;
        minutes = m;
    }
    void puttime(void)
    {
        cout << hour << " Hours and";
        cout << minutes << "minutes"
             << "\n";
    }
    void sum(time, time);
};
void time::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hour = minutes/60;
    minutes = minutes % 60;
    hour = hour + t1.hour + t2.hour;
}
int main()
{
    time t1, t2, t3;
    t1.gettime(2, 45);
    t2.gettime(3, 45);
    t3.sum(t1, t2);
    cout<< "T1 = ";
    t1.puttime();
    cout << "T2 = ";
    t2.puttime();
    cout << "T3 = ";
    t3.puttime();

    return 0;
}