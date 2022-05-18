#include <iostream>
#include <vector>

using namespace std;

class IntVector
{
public:
  	IntVector(int x, int y)
  	{
  	    for ( int i=0;i<x;i++)
        {
            pArr[i]=y;
        }
        len= x;
  	}
  	IntVector( IntVector &n)
  	{
  	      for(int i=0;i<2;i++)
          {
              pArr[i]=n.pArr[i];
              len=2;
          }
  	}
  	void pop_back()
  	{

  	}
  	void push_back(int x)
  	{
  	    pArr[len]=x;
  	    len++;
  	}
  	void display()
  	{
  	    for(int i=0;i<len;i++)
        {
           if(i==len-1)
            {
                cout<<pArr[i];
            }
            else
            {
                cout<<pArr[i]<<" ";
            }
        }
        cout<<endl;
        }

    ~IntVector()
    {

    }
private:
    int len=0;
    int* pArr= new int [1000];
    int Arr [1000];
};
int main()
{
    IntVector vt1(4, 8); // 8 8 8 8

    IntVector vt2 = vt1; // 8 8 8 8
    vt2.pop_back(); // 8 8 8
    // Number of new items
    int newItems;
    cin >> newItems;
    // Add items
    for(int i=0; i<newItems; i++){
        int val;
        cin >> val;
        vt2.push_back(val);
    }

    vt1.display(); // 8 8 8 8
    vt2.display(); // ???
    return 0;
}
