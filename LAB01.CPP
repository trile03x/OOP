#include <bits/stdc++.h>
using namespace std;
class Employee
{
private:
    string name;
    int day, month, year, sal;
public:
    Employee()
    {
        name="Not Available";
        day=1;
        month=1;
        year=2000;
        sal=0;
    }
    Employee(string name, int day, int month, int year, int sal)
    {
        this->name=name;
        this->day=day;
        this->month=month;
        this->year=year;
        this->sal=sal;
    }
    void input()
    {
        getline(cin,name);
        cin>>day>>month>>year;
        while(setDay(day,month,year)!=1)
        {
            cin>>day>>month>>year;
        }
        cin>>sal;
    }
    string getName()
    {
         int len=name.length();
        for(int i=0;i<len;i++)
        {
            if(int(name[0])>='a'&&int(name[0])<='z')
            {
                name[0]=name[0]-32;
            }
            else if(name[i-1]==' '&&name[i]!=' ')
            {
                if(name[i]>='a'&&int(name[i])<='z')
                {
                    name[i]=name[i]-32;
                }
                else
                    continue;
            }
        }
        return name;
    }
    bool setDay(int day, int month, int year)
    {
        if(day>=1&&day<=31&&month>=1&&month<=12&&year>=1)
        {
            return true;
        }
        else
            return false ;
    }

    void display()
    {

            cout<<"- Full Name: "<<getName()<<endl;
            cout<<"- Birth Date: "<<day<<"/"<<month<<"/"<<year<<endl;
            cout<<"- Salary: "<<sal<<endl;
    }

};

int main()
{
    Employee ee1, ee2;
    ee2.input();

    ee1.display();
    cout << endl;
    ee2.display();
    return 0;
}
