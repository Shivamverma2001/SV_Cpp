//class template with multiple type of variable
#include <iostream>

using namespace std;
template<class name,class fame,class game>//class temp is valid for next class
class myname
{
   name n1;
   fame f1;
   game g1;
   public:
       myname(name nn,fame ff,game gg)//parameterized constructor
       {
           n1=nn;
           f1=ff;
           g1=gg;
       }
       void dis()
       {
           cout<<"entered data is ="<<endl;
           cout<<n1<<endl<<f1<<endl<<g1<<endl;
       }
};
int main()
{
  myname<int,float,string>obj(21,99.6,"Shivam verma");
 obj.dis();
}
