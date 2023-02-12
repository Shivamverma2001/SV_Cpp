//run time polymorphism class shape class(float a,float b)
//derived classes are reactangle and triangle area for both
//rect a*b triangle 0.5*a*b
#include<iostream>
using namespace std;
class shape
{
    protected:
float a,b;
public:
    void take()
{
    cin>>a>>b;
}
 void virtual process()
 {
cout<<"not doing anything"<<endl;
} };
class rect:public shape//rect
{public: void process()
{
cout<<"area of rectangle is"<<endl;
cout<<a*b<<endl;
} };
class tri:public shape
{
public: void process()
{
cout<<"area of triangle is"<<endl; cout<<.5*a*b<<endl;
} };
int main()
{
shape *s;
rect r;
tri t;
s=&r;
s->take();
s->process();
s=&t;
s->take();
s->process();
}
