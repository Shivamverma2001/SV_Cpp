//unary operator (-) with friend function
#include <iostream>

using namespace std;

class name
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
    friend void operator-(name&);//call by reference is required
};
void operator-(name &n1)
{
  n1.x=  -n1.x;
   n1.y= -n1.y;

}
int main()
{
    name n1;
    n1.in();
    operator-(n1);//call by reference
    n1.dis();
}
