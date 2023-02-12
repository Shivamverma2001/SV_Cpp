//Exception inside the function
#include <iostream>
using namespace std;
void fun()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<a<<"is largest";
    else if(b>a)
        cout<<b<<"is largest";
    else
        throw 34;
}
int main()
{
    try
   {
    fun();
   }
          catch(int)
    {
        cout<<"numbers are same";
    }
}
