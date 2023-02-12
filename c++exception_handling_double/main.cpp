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
    catch(int)
    {
      cout<<"result is >200 and <500";
    }
    catch(float)
    {
        cout<<"result is >100 and <200";
    }
    catch(char)
    {
      cout<<"result is <100";
    }
}
