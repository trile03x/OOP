#include <bits/stdc++.h>
using namespace std;
class Shop
{
private :
    string shop,name [100];
    int quantity;
    int day [100], month[100], year[100], sal[100];
public:
    void input()
    {
        getline(cin,shop);
        cin>>quantity;
        cin.ignore();
        if(quantity!=0)
        {
            for(int i=0; i<quantity; i++)
            {
                getline(cin,name[i]);
                cin>>day[i]>>month[i]>>year[i]>>sal[i];
                cin.ignore();

            }
        }

    }
    long long getTotalSalary()
    {
        int tsal=0;
        for (int i=0; i<quantity; i++)
        {
            tsal+=sal[i];
        }
        return tsal;
    }
    void display()
    {
       if(quantity==0)
       {
           cout<<'"'<<shop<<'"'<< "has no employees"<<endl;
           cout<<"Total salary: "<<getTotalSalary();
       }
       else
       {
           cout<<'"'<<shop<<'"'<<" has "<< quantity<<" employees"<<endl;
           for(int i=0;i<quantity;i++)
           {
               cout<<"EMPLOYEE " <<i+1<<":"<<endl;
               cout<<"- Full Name: "<<name[i]<<endl;
               cout<<"- Birth Date: "<<day[i]<<"/"<<month[i]<<"/"<<year[i]<<endl;
               cout<<"- Salary: "<<sal[i]<<endl;
           }
       }
    }
};

int main()
{
    Shop shop;
    shop.input();
    shop.getTotalSalary();
    shop.display();
    cout << "Total salary: " << shop.getTotalSalary();
    return 0;
}
