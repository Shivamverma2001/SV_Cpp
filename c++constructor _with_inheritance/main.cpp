//constructor in single class inheritance
//base class not containing any parameterized constructor then derived may not having a constructors
#include <iostream>

using namespace std;

class base
{
public:
    base()//default constructor
    {
        cout<<"i am in base class"<<endl;
    }
    ~base()
    {
        cout<<"i am in destructor in base class"<<endl;
    }
};
class derived:public base
{
public:
    derived()
    {
        cout<<"i am in derived class"<<endl;
    }
     ~derived()
    {
        cout<<"i am destructor in derived class"<<endl;
    }
};
int main()
{
    derived d1;//derived class default constructor take the responsibility to call base constructor
    //order to call the constructor is 1st base then derived
    //but in destructor it show reverse order of constructor
    //constructor is from base to derived and destructor is from derived to base in single inhertitance
}
