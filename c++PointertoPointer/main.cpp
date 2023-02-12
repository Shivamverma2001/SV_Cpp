#include <iostream>

using namespace std;

int main()
{
    int *p,**q,***r,****m;
    int s=20;
    p=&s;//pointer
    q=&p;//pointer to pointer
    r=&q;//pointer to pointer to pointer
     m=&r;//pointer to pointer to pointer to pointer
    // and many more
    cout<<*p<<endl<<**q<<endl<<***r<<endl<<****m<<endl;
     cout<<p<<endl<<*q<<endl<<**r<<endl<<**m<<endl;
}
