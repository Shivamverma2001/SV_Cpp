
//static function
#include <iostream>

using namespace std;

static int x=20;//global var by default is static
//or
//int x=20;
//default static x value is 0

void in()
{
    int y=20;
   static int z=20;
    cout<<--x<<"\t"<<--y<<"\t"<<--z<<endl;
}
int main()
{
    in();//x is 19  y is 19  z is 19
    in();//x is 18  y is 19 z is 18
    in();//x is 17  y is 19 z is 17

}
