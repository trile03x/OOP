#include <bits/stdc++.h>
using namespace std;
class Date
{
private :
    int day, month, year;
public :
    Date ()
    {
        day=1,month=1,year=1900;
    }
    Date (int day, int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void input()
    {
        cin>>day>>month>>year;
    }
    void display()
    {
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
    int differentDay(Date dt)
    {
        int kc1=0;// 1
        if (month < 3)
        {
            year--;
            month += 12;
        }
        kc1= 365*year + year/4 - year/100 + year/400 + (153*month - 457)/5 + day - 306;
        int kc2=0; //
        if (dt.month < 3)
        {
            dt.year--;
            dt.month += 12;
        }
        kc2= 365*dt.year + dt.year/4 - dt.year/100 + dt.year/400 + (153*dt.month - 457)/5 + dt.day - 306;
        int kc= abs(kc2-kc1);
        return kc;
    }
};
int main()
{
    Date dt1;
    Date dt2(20, 10, 2001);
    Date dt3;
    Date dt4;

    dt3.input();
    dt4.input();

    dt1.display(); // 1-1-1900
    dt2.display(); // 20-10-2001
    dt3.display(); //1.1.2003
    dt4.display(); //1/1/2993 ( day, month, year)
    cout<<dt3.differentDay(dt4);
}
