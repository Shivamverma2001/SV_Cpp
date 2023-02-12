//binary operators(+,-,*,/,%) using member fun
#include<iostream>
using namespace std;
class money
{ int rs,ps;
public:
void in()//input fun
{cout<<"enter the detail";
cin>>rs>>ps;
}
void operator*(int);//non inline memb fun
};
void money::operator *(int m1)//syntax for operator overloading inline
{money m3;
m3.rs=rs*m1;//first arg is coming with this pointer,second m1.rs
m3.ps=ps*m1;//first arg is coming with this pointer,second m1.ps
cout<<m3.rs<<endl<<m3.ps;
}

int main()
{ money m11;
m11.in();//input first
m11.operator*(5);//is same as last one
//m11-m22;//same as above

}
