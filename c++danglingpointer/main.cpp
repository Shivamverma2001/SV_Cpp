//dangling pointer is problem in pointers
#include <iostream>

using namespace std;

int main()
{
    int *p;
    {
        int x=23;//x is local pointer
        p=&x;
        cout<<p<<endl;
        cout<<*p<<endl;
    }
     // solution for dangling is
        p=NULL;
        //or
        //p=0;
    cout<<p<<endl;//output is same
        cout<<*p<<endl;


}
