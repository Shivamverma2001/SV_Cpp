#include <iostream>

using namespace std;

int main()
{
  float a,b,c;
  cout<<"enter three float number";
  cin>>a>>b>>c;
  if(a>b&&a>c)
    cout<<"a is largest and value of a"<<a;

   else  if(b>a&&b>c)
    cout<<"b is largest and value of b"<<b;
     else  if(c>b&&c>a)
    cout<<"c is largest and value of c"<<c;
    else if(a==b&&a==c)
        cout<<"All values are same of a"<<a;
}
