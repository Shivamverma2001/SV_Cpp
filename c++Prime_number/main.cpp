//number not divisible by any number from 1 and itself

#include <iostream>

using namespace std;

int main()
{
    int num,i,c=0;
    cout<<"Enter the number";
    cin>>num;
    for(i=2;i<num;i++)//decreased number of iterations when condition is i<num/2
    {
        if(num%i==0)
           {
               c=1;
               break;
           }

    }
    if(c==1)
        cout<<"Not a Prime Number";
    else
        cout<<"Prime number";


}
