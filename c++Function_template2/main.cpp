//function template to find the largest of two numbers
#include <iostream>

using namespace std;
template<class abc>
void larger(abc a1,abc b1)//input two temp same type no return
{
   if(a1>b1)
        cout<<a1<<"is largest then"<<b1<<endl;
    else  if(a1==b1)
        cout<<a1<<"is same as"<<b1<<endl;
    else
        cout<<a1<<"is smaller then"<<b1<<endl;
}
int main()
{
    int x,y;
    cin>>x>>y;
larger<int>(34,35);
larger<float>(x,y);
larger<char>('t','z');
//or
/*larger(34,35);
larger(x,y);
larger('t','z');*/
}
