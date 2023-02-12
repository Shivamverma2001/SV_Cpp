#include <iostream>

using namespace std;

int main()
{
    int a,*b;
    char c,*d;
    float e,*f;
    cin>>a>>c>>e;
    b=&a;//initialization of differrent pointer
    d=&c;
    f=&e;
    cout<<b<<endl<<d<<endl<<f<<endl;//address are displaying here
    cout<<&b<<endl<<&d<<endl<<&f<<endl;//address are displaying here
    cout<<*b<<endl<<*d<<endl<<*f<<endl;//values are displaying here
    //Arithmetic operation
    cout<<f<<endl;
    f=f+2;
    cout<<f<<endl;//it display 8 bit difference because float have 4 bit so 2*4 it show 8 bit
    f=f-1;
    cout<<f<<endl;//it subtract the address by 4 bits
    //Comparison of two pointers
    float t=34,*j,y=45,*z;
    j=&t;
    cout<<j<<endl;
    z=&y;
    cout<<z<<endl;
    cout<<j-z<<endl;//4 byte =1 means difference 1 var of that type
    cout<<(j>z)<<endl;//if true give 1 otherwise 0
    float *q;
    q=z;
    cout<<*q<<endl;
    //pre and post increment and decrement
    ++q;
    cout<<q<<endl;//it increment the address by 4 bcz int take 4 byte memory
        q++;
    cout<<q<<endl;
        --q;
    cout<<q<<endl;//it decrement 4 byte address bcz int take 4 byte memory
        q--;
    cout<<q<<endl;
    //assignment operator
    int *k;
    k=b;
    cout<<b<<endl;//it show the address of a
    }
/*
if *b=*&a;// then *b=a *& are null to each other
    */
