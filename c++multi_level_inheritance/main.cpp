//multi level inheritance
//multi inheritance 1 base many derived classes
#include <iostream>
using namespace std;
class one//base class
{
protected:
    int x;

};
class two:protected one//derived class
{
    protected:
  int y;//
};
class three:public two
{
   int z;
   public:
       void take()
       {
           cout<<"enter the data";
           cin>>x>>y>>z;
       }
       void out()
       {
           cout<<x<<endl<<y<<endl<<z;
       }
};
int main()
{
    three t1;//object of derived
    t1.take();
    t1.out();

}
