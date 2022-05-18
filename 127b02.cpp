#include <iostream>
using namespace std;
class Fraction
{
private :
    int num, den;
public:
    Fraction()
    {
        num=0, den=1;
    }
    Fraction (int num, int den)
    {
        this->num=num;
        this->den=den;

    }
    int ucln(int a, int b)
    {
        if (a == 0&&b!= 0)
        {
            return a+b;
        }
        if(a!=0&&b==0)
        {
            return 1;
        }
        while (a != b)
        {
            if (a > b)
            {
                a -= b; // a = a - b
            }
            else
            {
                b -= a;
            }
        }
        return a;
    }

    void display()
    {
        int x=abs(num);
        int y=abs(den);
        if (y==0){y=1;};
        int b=ucln(x,y);
        int x1=num/b;
        int y2=den/b;
        if(x1==0)
        {
            cout<<"0"<<endl;

        }
        else if( y2==1)
        {
            cout<<x1<<endl;
        }
        else if(x1<0&&y2<0)
        {
            cout<<x1*-1<<"/"<<y2*-1<<endl;
        }
        else if(x1>0&&y2<0)
        {
            cout<<x1*-1<<"/"<<y2*-1<<endl;
        }
        else
            cout<<x1<<"/"<<y2<<endl;

    }

};
int main()
{
    int num, den;
    cin >> num >> den;

    Fraction* pF = new Fraction(num, den);
    Fraction f;

    pF->display(); // Fraction from 'num' and 'den'
    f.display(); // 0

    return 0;
}
