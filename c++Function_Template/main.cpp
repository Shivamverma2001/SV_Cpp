//function template square of a number(int,float,double)
//function template = generic program
#include <iostream>

using namespace std;
template<class name>//name=??
name function(name n1)//definition of template function input name and return name
{
  return(n1*n1);
}
int main()
{
  int x=function <int>(12);//name=int
  cout<<x<<endl;
  float y=function <float>(2.5);//name=float
  cout<<y<<endl;
    double z=function <double>(12.5);//name=double
  cout<<z<<endl;
}
