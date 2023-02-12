//delete operator(single var float)
#include<iostream>
using namespace std;
int main()
{
float *p;
p=new float;//single
*p=34.67;
cout<<*p<<endl;
delete p;//memory deallocation
 cout<<*p;//garbage
  }
