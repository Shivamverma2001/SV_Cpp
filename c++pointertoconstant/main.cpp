#include <iostream>

using namespace std;

int main()
{
   const int y=25;
    const int *ptr;
    ptr=&y;
//    y=30; not possibled
    cout<<*ptr;

}
