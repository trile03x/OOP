#include <iostream>
#include <vector>
#include <string>

using namespace std;

class IntVector
{
public:
    IntVector(int a, int b)
    {
        for(int i =0; i<a; i++)
        {
            pArr[i]=b;
        }
    }
    IntVector()
    {
    }
    void push_back(int val)
    {
        int i=0;
        pArr[i]=val;
        i++;
    }
    void display(int x)
    {
        len=x;
        for(int i=0; i<len; i++)
        {
            cout<<pArr[i]<<" ";
        }
        cout<<endl;
    }
       ~IntVector()
    {

    }
private:
    int len;
    int* pArr =new int[100];
};

int main()
{
    IntVector vt1(4, 8);
    IntVector vt2;

    //Number of new items
    int newItems;
    cin >> newItems;

    // Add items
    for(int i=0; i<newItems; i++)
    {
        int val;
        cin >> val;
        vt2.push_back(val);
    }
    vt1.display(4);
    vt2.display(newItems);
    return 0;
}
