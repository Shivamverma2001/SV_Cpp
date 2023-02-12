//formal are getting address of actual
//call by pointer/ address
#include <iostream>

using namespace std;

using namespace std;
//* is known as dereferencing operator
void fun(float *a, float *b)//a=&x and b=&y and *a and *b are pointer
{
    *a=*a+10;//* before pointer will give value at memory/address
    *b=*b+10;
    cout<<"values inside function are represented as";
    cout<<endl<<*a<<endl<<*b<<endl;//15 16
}
int main()
{
    float x,y;
   cout<<"Enter two floats numbers";
   cin>>x>>y;
   fun(&x,&y);
   cout<<"values inside main is changed"<<endl;
   cout<<x<<endl<<y;
}
