//base class and derived class can have same function name
//if we call the function by object of derived class then function overriding take place
//ambiguity(member function same as base and derived) in single level inheritance it is resolve by overriding
#include <iostream>

using namespace std;

class first
{
   int a,b;
   public:
       void take()//same prototype
       {
           cout<<"i am in base class";
       }
};
class second:public first
{
public:
    void take()//same prototype
    {
        cout<<"i am in derived class";
    }
};
int main()
{
    second s1;
    s1.first::take();//base class
    s1.take();//derived function override from base
}
