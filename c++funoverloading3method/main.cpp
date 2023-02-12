//function overloading
//order of argument
#include <iostream>

using namespace std;


void fun(int a,float b,char c)//order of argument
{
    cout<<a<<endl<<b<<endl<<c<<endl<<endl;
}
void fun(char a1, float b1, int c1)//order of argument
{
    cout<<a1<<endl<<b1<<endl<<c1;
}

int main()
{
    fun(5,3.4,'f');
    fun('r',4.7,99);
}
