//operator overloading can be done with member function and friend function
//it is done by unary and binary not by ternary

// we discuss binary operators(+) with using member function
//money variable must be
#include <iostream>

using namespace std;
class money
{
int rs,ps;
public:
    void in()//input function
    {
      cout<<"enter the detail ";
      cin>>rs>>ps;
    }
    void out()//out
    {
        cout<<"result is";
        cout<<endl<<rs<<endl<<ps<<endl;
    }
    money operator +(money m1)//syntax for operator overloading inline function
    {
       money m3;
       m3.rs=this->rs+m1.rs;//1st argument is coming with this pointer and 2nd is m1.rs
       // or
       m3.ps=ps+m1.ps;//1st argument is coming with this pointer and 2nd is m1.rs
       if(m3.ps>99)
       {
         m3.rs=m3.rs+m3.ps/100;
         m3.ps=m3.ps%100;
       return m3;
    }}
};

int main()
{
  money m11,m22,m33;
  m11.in();//input first
  m22.in();//input second
  m33=m11+m22;//are you getting the feel as the int x+y=z, m22 is copies into m1 and m11 are passed by rs and ps
    m33.out();
}
