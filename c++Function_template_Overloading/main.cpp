//function template overloading
//1st specific then generic
#include <iostream>

using namespace std;
template<class a,class b>
void fun(a a1,b b1)//overloading   1
{
   cout<<"function called with two arguments"<<endl;
   cout<<a1<<endl<<b1<<endl;
}
template<class c,class d>
void fun(c c1)//overloading    2
{
   cout<<"function with one argument"<<endl;
   cout<<c1<<endl;;
}
void fun(int p)//overloading     3
{
   cout<<"function with specific data-type int"<<p;
}
int main()
{
 fun<int,float>(3,4.5);//1
 fun(45);//3
 fun('r');//2
}
