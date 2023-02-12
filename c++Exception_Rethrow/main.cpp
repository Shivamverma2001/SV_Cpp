//Re-throw in Exception/ Nested throw
//if we write throw inside catch then it is known as re-throw
//re-throw is not a keyword
//it is represented only by throw
#include <iostream>
using namespace std;
void input()
{
    int a,b,c;
    cout<<"Enter the data";
    cin>>a>>b;
    try
    {
    if(a>=10&&b>=10)
        throw 't';//char type   abnormal   throw
    else
    cout<<a*b;//normal
    }
    catch(char)
    {
        cout<<"you are here but unable to respond you"<<endl;
        throw;//rethrow
    }
}
int main()
{
   try
   {
       input();//function call
   }
   catch(...)
   {
       cout<<"you are here in re-throw";
   }
}
