//constructor destructor with multiple inheritance
#include <iostream>

using namespace std;

class one
{
public:
    one()
    {
    cout<<"i am in constructor in base one"<<endl;
    }
   ~one()
    {
    cout<<"i am in destructor in base one"<<endl;
    }

};
class two:public one
{
public:
    two()
    {
    cout<<"i am in constructor in base two"<<endl;
    }
   ~two()
    {
    cout<<"i am in destructor in base two"<<endl;
    }

};
class three:public two//multiple inheritance
{
public:
    three()
    {
    cout<<"i am in constructor in derived three"<<endl;
    }
   ~three()
    {
    cout<<"i am in destructor in derived three"<<endl;
    }

};
int main()
{
   three t1;//derived class constructor will call base class constructor also
   //order is depend on 33 line if we write public two, public one then two constructor will call then 1st

}
