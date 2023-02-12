//Constructor is used to initialize the data
//no return type is allowed also no void
//name of function is same to the class
#include <iostream>

using namespace std;

class naman
{
    int x,y;//class data member
public:
    naman()//constructor used to initialize the class data
    {
        x=20;
        y=30;
    }
    void dis()//member function normal
    {
        cout<<x<<endl<<y<<endl;
    }
};

int main()
{
    naman n1;//obj of a class constructor is automatically called
    n1.dis();
}
