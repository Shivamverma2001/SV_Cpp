#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char name;
    cout<<"Enter two numbers";
    cin>>a>>b;
    try
    {
        if(a!=b)
    cout<<a-b;//normal execution
    else
        throw name;//throw is of char type        abnormal execution
    }
    catch(char)//handler is of sane type
    {
     cout<<"difference for same number is zero"<<endl;//abnormal execution
    }
}
