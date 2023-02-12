#include <iostream>

using namespace std;

int main()
{
    int x=20;
    int *const ptr=&x;//allowed must be initialize at the time of declaration
    cout<<*ptr;
 //   ptr=&y; not allowed
   // cout<<*ptr;
}
