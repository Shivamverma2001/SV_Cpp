//base of number
//width
//fill the width
//setprecision
#include <iostream>
#include<iomanip>
using namespace std;
//we can not write binary and by default base is 10
int main()
{
    int x=25;//by default decimal number system
    cout<<x<<endl;
    cout<<hex<<x<<endl;//19
    cout<<oct<<x<<endl;//31
    cout<<setbase(16)<<x<<endl;
    cout<<setbase(8)<<x<<endl;
   cout<<endl<<setw(10)<<setfill('@')<<x;
   float k=5;
   float y=3;
   cout<<k/y;
   cout<<endl<<setprecision(2)<<k/y<<endl;
   cout<<setprecision(4)<<k/y<<endl;
   cout<<setprecision(5)<<k/y<<endl;


}
