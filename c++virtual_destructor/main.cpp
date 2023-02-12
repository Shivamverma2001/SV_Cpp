//virtual destructor
#include<iostream>
using namespace std;
class base
{
public:
    base()
{
cout<<"i am in const of base"<<endl;
}
virtual ~ base()
{
cout<<"i am in dest of base"<<endl;
} };
class derived:public base
{
public:
derived()
{
cout<<"i am in const of derived"<<endl;
}
~derived()
{
cout<<"i am in dest of derived"<<endl;
} };
int main()
{
    base *p;
    p=new derived;//base ,derived call of const
    delete p;//dest must be called here
}
