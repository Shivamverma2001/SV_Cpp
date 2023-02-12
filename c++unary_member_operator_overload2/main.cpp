//unary operator overload(++,--,+,-)member function required 0 argument
//post-decrement operator
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
    name operator--(int)//it give the difference between pre and post
    {
        name nn;
        nn.x=x--;
        nn.y=y--;
        nn.z=z--;
       return nn;

    }
};
int main()
{
    name n1,n2;
    n1.in();
   n2=n1.operator--(1);//1 is not have any importance you write any int number
    //or
  //  n2=n1--;
    n2.dis();
}
