//friend function in single class
//friend function is also used in private and public output is same
#include <iostream>

using namespace std;

class one
{
    int x,y;
public:
    void in()//inline member function
    {
       cin>>x>>y;
    }
    friend void process(one);//friend function declaration must be outside the class
};
void process(one o1)//def of friend no scope res required
{
    cout<<o1.x*o1.y;//accessibility obj.var
}
int main()
{
    one t1;
    t1.in();//call of member function
    process(t1);//friend function call
}
