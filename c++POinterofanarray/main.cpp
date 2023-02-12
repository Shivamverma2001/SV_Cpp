
//pointer vs array
//pointer can work like array
//array name can work like pointer
#include <iostream>

using namespace std;

int main()
{
    int a[5]={1,2,3,4,5};// 4 byte difference
    int *p;
    int b[3]={7,8,9};
    p=a;//pointer to array
    //a is address of 1st element or 0th index
    //array=&firstelement =&a[0]=a
for(int i=0;i<5;i++)
{
    cout<<(p+i)<<endl;//address of first element and then 2nd
    cout<<(a+i)<<endl;//printed address of 0th, add of 2nd
       cout<<*(p+i)<<endl;//value printed
    cout<<*(a+i)<<endl;//value printed
}
p=b;//its reverse is not allowed
for(int i=0;i<3;i++)
{
    cout<<(p+i)<<endl;//address of first element and then 2nd
    cout<<(b+i)<<endl;//printed address of 0th, add of 2nd
       cout<<*(p+i)<<endl;//value printed
    cout<<*(b+i)<<endl;//value printed
}
}
