//binary operator +-*/ %
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
    void operator -(money);//syntax for operator overloading inline function
};
   void money::operator -(money m1)//syntax for operator overloading inline function
    {
       money m3;
       m3.rs=this->rs-m1.rs;//1st argument is coming with this pointer and 2nd is m1.rs
       // or
       m3.ps=ps-m1.ps;//1st argument is coming with this pointer and 2nd is m1.rs
     cout<<m3.rs<<endl<<m3.ps;
    }

int main()
{
  money m11,m22;
  m11.in();//input first
  m22.in();//input second
  m11.operator-(m22);//same like downward
  //m33=m11-m22;//are you getting the feel as the int x+y=z, m22 is copies into m1 and m11 are passed by rs and ps
}
