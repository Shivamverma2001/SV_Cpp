//function template for swapping two numbers
#include <iostream>

using namespace std;
template<class t>
void larger(t &a1,t &b1)//call by reference
{
     cout<<"data inside the function before swapping"<<endl;
 cout<<a1<<endl<<b1;
 t temp;
 temp=a1;
 a1=b1;
 b1=temp;
 cout<<"data inside the function after swapping"<<endl;
 cout<<a1<<endl<<b1;
}
int main()
{
int a,b;
cin>>a>>b;
larger<int>(a,b);//call by reference t replace by int
 cout<<"data inside the main after swapping"<<endl;
 cout<<a<<endl<<b;
}
