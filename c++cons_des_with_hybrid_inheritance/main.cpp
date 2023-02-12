//constructor destructor with hybrid inhertitance
#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
     cout<<"hello base constructor"<<endl;
    }
    ~  base()
    {
     cout<<"hello base destructor"<<endl;
    }
};
class der1:virtual base
{
public:
    der1()
    {
      cout<<"hello derive class 1 constructor"<<endl;
    }
     ~der1()
    {
      cout<<"hello derive class 1 destructor"<<endl;
    }
};
class der2:virtual base
{
    public:
    der2()
    {
        cout<<"hello derive class 2 constructor"<<endl;
    }
    ~ der2()
    {
      cout<<"hello derive class 2 destructor"<<endl;
    }
};
class der3:public virtual base,public der1,public der2
{
 public:
    der3()
    {
         cout<<"hello derive class 3 constructor"<<endl;
    }
    ~ der3()
    {
      cout<<"hello derive class 3 destructor"<<endl;
    }
};
int main()
{
    der3 d3;
}
