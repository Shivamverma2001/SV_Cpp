//throw class
//class exception
//user defined data type can also be used for exception
//Exception of class type(user defined data type)
//class contain data-type
//data member are also declare inside the class
#include <iostream>
#include <string.h>
using namespace std;
class k20
{
   int year;
   char *sectionname;
   public:
       k20()
       {

       }
       k20(int x,char *pp)//parameterized constructor
       {
           year=x;
           sectionname=new char[sizeof(pp)];//run time allocation
           strcpy(sectionname,pp);

       }
       void dis()
       {
           cout<<"you have entered this data"<<endl;
           cout<<"year of admission ="<<year<<endl;
           cout<<"section of you ="<<sectionname;
       }
};

int main()
{
  try
  {
    throw k20(2020,"k20yg");
  }
  catch(k20 kk)
  {
      cout<<"handler is here"<<endl;
      kk.dis();
  }
}
