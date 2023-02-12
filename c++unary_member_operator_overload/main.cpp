//unary operator overloading
//<<(left shift operator)
//1st argument must be object 2nd may not be
#include <iostream>

using namespace std;

class money
{
    int rs,ps;
public:
    money()
    {

    }
    money(int a,int b)
    {
        rs=a;
        ps=b;
    }
    void dis()
    {
        cout<<rs<<endl<<ps;
    }
    friend money operator<<(money,int);//declare
};
money operator<<(money mm,int x)
{
    money nn;
    nn.rs=mm.rs<<x;
    nn.ps=mm.ps<<x;
    return nn;
}
int main()
{
    money m1(10,20);//10<<1=20<<2=20<<3=80
    //formula for shift num*2power_number_of_shift
    money m2;
    int p;
    cin>>p;
    m2=operator<<(m1,p);//fnc call for operator
    m2.dis();
}
