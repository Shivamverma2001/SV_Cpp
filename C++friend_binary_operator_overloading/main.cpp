//friend binary operator overloading
#include <iostream>

using namespace std;
class comp
{
    int x,y;
public:
    void in()
    {
        cin>>x>>y;
    }
    void dis()
    {
        cout<<x<<endl<<y;
    }
    comp friend operator%(comp,comp);//declaration of friend function
};
comp operator%(comp c1,comp c2)//definition of friend function and must-be outside the class
{
comp cd;
cd.x=c1.x%c2.x;
cd.y=c1.y%c2.y;
return cd;
}
int main()
{
    comp cc,dd,rr;
    cc.in();
    dd.in();
    rr=operator%(cc,dd);//call by value
    rr.dis();
}
