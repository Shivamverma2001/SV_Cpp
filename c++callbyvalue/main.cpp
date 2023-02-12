//call by value
//formal are the copy of actual arguments
#include <iostream>

using namespace std;

void fun(float a, float b)//a and b are formal arguments
{
    a=a+10;
    b=b+10;
    cout<<"values inside function are represented as";
    cout<<endl<<a<<endl<<b<<endl;//15 16
}
int main()
{
    float x,y;
   cout<<"Enter two floats numbers";
   cin>>x>>y;//5 AND 6
   fun(x,y);//x and y are actual arguments
   cout<<"values inside main is not changed"<<endl;
   cout<<x<<endl<<y;// value of x and y remains same 5 and 6
}
