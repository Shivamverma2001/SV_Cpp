//fun overloading
//type of argument
#include <iostream>

using namespace std;

int fun(int a,int b)//type of argument
{
  return(a+b);
}
float fun(float a1,float b1)//type of argument
{
return(a1+b1);
}
int main()
{
    int x,y,z;
    cin>>x>>y;
    z =fun(x,y);//1 will be called
    cout<<z<<endl;
    float a11,b11;
    cin>>a11>>b11;
   float p=fun(a11,b11);//2nd will be called
    cout<<p<<endl;

}
