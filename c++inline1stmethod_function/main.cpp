#include <iostream>

using namespace std;


void inline large(float a,float b)
{
if(a>b)
cout<<"a is larger than b "<<a<<endl;
else
cout<<"b is larger than a "<<b<<endl;
}
int main()
{
large(4,5);
large(9,7);
large(-3.5,4.5);

}
