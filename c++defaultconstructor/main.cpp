#include <iostream>

using namespace std;
//constructor with no argument

class naman
{
    int x,y;//class data member
public:
    naman()//default constructor
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
    //n1naman();  not possible
}
