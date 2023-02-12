//Abstract class means class contain at-least 1 pure virtual function
//Pure virtual function
#include <iostream>
using namespace std;
class teacher
{
protected:
    float a,b,c;
public:
    virtual void in()=0;//pure virtual function
    virtual void process()=0;//pure virtual function
    virtual void out()=0;//pure virtual function
};//teacher is  abstract class
class st1:public teacher
{
public:
    void in()
    {
        cout<<"enter the num";
        cin>>a>>b;
    }
    void process()
    {
        c=a*b;
    }
    void out()
    {
        cout<<c;
    }
};
class st2:public teacher
{
public:
    void in()
    {
        cout<<"enter the num";
        cin>>a>>b;
    }
    void process()
    {
        c=a+b;
    }
    void out()
    {
        cout<<c;
    }
};
int main()
{
   teacher *t1;//base class pointer+
   st1 d1;//derived class
   st2 d2;
   t1=&d1;
    t1->in();
    t1->process();
    t1->out();
    t1=&d2;
    t1->in();
    t1->process();
    t1->out();
}
