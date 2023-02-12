#include <iostream>
#include<conio.h>
using namespace std;
class shape
{
    double x,y;
public:
    double retx()
    {
        return x;
    }
    double rety()
    {
        return y;
    }
    virtual void get_data()
    {
        cout<<"\n Enter x and y";
    }
    void virtual display_area()
    {
        cout<<"\n nothing to display";
    }
};
class rectangle:public shape
{
public:
    void get_data()
    {
        shape::get_data();
    }
    void display_area()
    {
       cout<<"\n area is "<<retx()*rety();
    }
};
class triangle:public shape
{
public:
    void get_data()
    {
        shape::get_data();
    }
    void display_area()
    {
       cout<<"\n area is "<<1.0/2*retx()*rety();
    }
};
int main()
{
    shape *ptr;
    triangle tr;
    rectangle re;
    ptr=&tr;
    cout<<"\n Triangle";
    ptr->get_data();
    ptr->display_area();
    ptr=&re;
    cout<<"\n rectangle";
    ptr->get_data();
    ptr->display_area();
    getch();
}
