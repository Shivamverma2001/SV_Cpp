
#include <iostream>

using namespace std;


void large(float a,float b)//non inline a=4, b=5
{
if(a>b)
cout<<"a is larger than b "<<a<<endl;
else
cout<<"b is larger than a "<<b<<endl;
}
int main()//call return overhead
{
large(4,5);//repeat
large(9,7);//repeat
large(-3.5,4.5);//repeat

}
