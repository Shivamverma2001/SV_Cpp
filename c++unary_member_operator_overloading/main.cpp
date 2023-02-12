//unary operator overload(++,--,+,-)member function required 0 argument
//pre-increment operator
#include <iostream>

using namespace std;

class name
{
    int x,y,z;
public:
    void in()
    {
        cin>>x>>y>>z;
    }
    void dis()
    {
        cout<<x<<endl<<y<<endl<<z<<endl;
    }
    name operator++()//inline member function
    {
        name nn;
        nn.x=++x;//come from this pointer implicitly pass from this pointer
        nn.y=++y;
        nn.z=++z;
       return nn;

    }
};
int main()
{
    name n1,n2;
    n1.in();
    //n2=n1.operator++();//n2=nn  n1 is coming with this pointer to function
    //or
    n2=++n1;//allowed feel of perator overloading
    //both 33 and 35 are same
    n2.dis();
}
