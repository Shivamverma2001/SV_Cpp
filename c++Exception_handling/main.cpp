//Exception 1 program divide by zero exception
#include <iostream>

using namespace std;

int main()
{
  int a,b;
  try{
  cout<<"Input two numbers";
  cin>>a>>b;
  if(b==0)
    throw 8;//work when abnormal thing happens
  cout<<a/b;
  }
  catch(int)
  {
     cout<<"divide by zero not allowed";
  }
}
