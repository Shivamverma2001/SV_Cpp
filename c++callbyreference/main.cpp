//call by reference
//actual memory is accessible
#include <iostream>

using namespace std;

using namespace std;

void fun(float &a, float &b)//&a=x and &b=y b and y are reference parameter
{
    a=a+10;
    b+10;
    cout<<"values inside function are represented as";
    cout<<endl<<a<<endl<<b<<endl;
}
int main()
{
    float x,y;
   cout<<"Enter two floats numbers";
   cin>>x>>y;
   fun(x,y);//call by reference look same as call by value
   cout<<"values inside main is changed"<<endl;
   cout<<x<<endl<<y;
}
