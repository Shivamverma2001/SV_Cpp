//friend function in multiple classes
//find the largest out of three
#include <iostream>

using namespace std;
class one;//forward declaration
class two;
class three;
class one
{
float a;
public:
    void in()//member function inline
    {
       cin>>a;
    }
    friend void process(one,two,three);//declaration of friend
};
class two
{
 float b;
 public:
     void in1()//member inline function
     {
         cin>>b;
     }
       friend void process(one,two,three);//declaration of friend
};
class three
{
    float c;
public:
    void in2()//member inline function
    {
        cin>>c;
    }
      friend void process(one,two,three);//declaration of friend
};
void process(one a1, two b1, three c1)//definition of friend
{
   if(a1.a>b1.b&&a1.a>c1.c)
        cout<<"a is largest then others"<<a1.a;
   else if(b1.b>a1.a&&b1.b>c1.c)
        cout<<"b is largest then others"<<b1.b;
    else
        cout<<"c is largest then others"<<c1.c;
}
int main()
{
    one t1;
    two t2;
    three t3;
    t1.in();//a
    t2.in1();//b
    t3.in2();//c
    process(t1,t2,t3);//call by value
}
