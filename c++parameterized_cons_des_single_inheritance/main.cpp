//parameterized constructor and destructor in single inheritance
//base class contain paramaterized cons
//it is mandatory for derived class to have a cons to pass the data to base cons
//des is reverse of cons
#include <iostream>

using namespace std;
class base
{
    int a,b;
public:
    base(int x,int y)
    {
      a=x;
      b=y;
    }
    void dis1()
    {
      cout<<a<<endl<<b;
    }
};
class derived: public base
{
float c;
public:
    derived(int aa, int bb, float cc):base(aa,bb)
    {
        c=cc;//derived class data
    }
    void dis2()
    {
        cout<<endl<<c;
    }
};
int main()
{
    derived d1(4,5,9.8);
    d1.dis1();
    d1.dis2();
}
