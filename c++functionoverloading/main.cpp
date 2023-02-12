//function overloading
//1st method number of argument
//no of different arguments
//return type does not play any role in overloading
#include <iostream>

using namespace std;

int fun(int a,int b,int c)//no of different argument
{
  return(a+b+c);
}
int fun(int a1,int b1)//no of argument different
{
return(a1+b1);
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int p=fun(x,y,z);//1 will be called
    cout<<p<<endl;
    p=fun(x,y);//2nd will be called
    cout<<p<<endl;

}
