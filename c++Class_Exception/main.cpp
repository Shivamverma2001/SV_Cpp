//throw class
//class exception
//user defined data type can also be used for exception
//Exception of class type(user defined data type)
#include <iostream>

using namespace std;
class a
{

};
class b
{

};
int main()
{
  int x;
  class a aa;//or a aa;
  b bb;
  cout<<"take the data";
  cin>>x;
  try
  {
   if(x>0)
        cout<<"display the number allowed"<<x;//normal
   else if(x==0)
    throw aa;//abnormal 11
   else //x<0
    throw bb;//abnormal   22
  }
  catch(class b)//22
  {
      cout<<"you are in handler of class b";
  }
    catch(class a)//11
  {
       cout<<"you are in handler of class a";
  }
}
