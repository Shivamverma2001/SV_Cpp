//Write a program to find the smallest element of an array using to pointer of array
#include <iostream>

using namespace std;

int main()
{
    int a[10], *p, minimum=9999999;
    cout<<"Enter the elements of an array";
    p=a;
    for(int i=0;i<10;i++)
    {
        cin>>*(p+i);
    }
    for(int i=0;i<10;i++)
    {
        if(*(p+i)<minimum)
            minimum=*(p+i);
    }
    cout<<minimum;
}
