
//it is use to define new data items that are equivalent to existing datatype
#include <iostream>

using namespace std;

int main()
{
   typedef int integer;
   typedef float real;
   typedef char character;
   integer i,j;
   character ch;
   real a,b;
   i=10;
   j=30;
   ch='m';
   a=-23.4;
   b=34.56;
   cout<<i<<j<<a<<b<<ch;
}
