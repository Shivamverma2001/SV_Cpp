//New operator for dynamic memory allocation one method
#include <iostream>

using namespace std;

int main()
{
    //1st method
int *p;
p=new int;//memory one int
*p=34;
cout<<*p<<endl;
//2nd method
int *q=new int;//memory one int
*q=34;
cout<<*q<<endl;
//3rd
int *r=new int(34);//memory one int
cout<<*r<<endl;
}
