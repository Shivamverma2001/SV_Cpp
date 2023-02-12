//Double Exception
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    try
    {
    c=a*b;
    if(c<100)
        throw 'k';
    else if(c>100&&c<=200)
        throw 3.4f;
    else if(c>200&&c<=500)
        throw 12;
    else
        cout<<c<<"is >500 which was expected as normal";
    }
    catch(...)
    {
      cout<<"General Catch Handler";
    }
}
