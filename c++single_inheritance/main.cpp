//how to access the private data of base class to the derived class
//or indirect access
//single inheritance
#include <iostream>

using namespace std;

class base
{
int  x,y;
public:
    void in()
    {
        cin>>x>>y;
    }
    void out()
    {
        cout<<x<<endl<<y<<endl;
    }
};
class derived:public base
{
int z;
public:
    void in1()
    {
        in();//call the base class function
        cin>>z;
    }
    void out1()
    {
        out();
        cout<<z;
    }
};
int main()
{
    derived d1;
    d1.in1();
    d1.out1();
}
