//delete operator(single var)
#include<iostream>
using namespace std;
int main()
{
char *p;
p=new char('r');
cout<<*p<<endl;
delete p;//memory deallocation
cout<<*p; }
