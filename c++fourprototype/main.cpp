#include <iostream>

using namespace std;

void fun(void)//cant take anything and cant return anything
{cout<<"function 1";

}
float fun1(void)//does not take anything but return anything
{
    float a,b;
    cin>>a>>b;
    return(a+b);
}
int fun2(int a, int b, int c)//take something and return something
{
    return(a*b*c);
}
void fun3(char r)//take anything but does not return anything
{
    cout<<r;
}

int main()
{
    fun();//call function 1st prototype
    float x=fun1();//2nd prototype
    cout<<x;
    int m=fun2(3,4,5);//3rd prototype
    cout<<endl<<m;
    char name;
    cin>>name;
    fun3(name);//4th prototype

}
