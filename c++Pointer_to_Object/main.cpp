//Pointer to object
#include <iostream>

using namespace std;
class base
{
    int *ptr;
public:
    void input()
    {
      ptr=new int;
      cout<<"\n enter integer value";
      cin>>*ptr;
    }
    void display()
    {
       cout<<"\n integer value entered is"<<*ptr;
    }
};
class derived:public base
{
    float *ptr;
public:
    void input()
    {
       ptr=new float;
      cout<<"\n enter float value";
      cin>>*ptr;
    }
    void display()
    {
       cout<<"\n float value entered is"<<*ptr;
    }
};
int main()
{
    base *bsptr,base;
    derived drvd;
    bsptr=&base;
    bsptr->input();
    (*bsptr).display();
    bsptr=&drvd;
    (*bsptr).input();
    bsptr->display();
}
