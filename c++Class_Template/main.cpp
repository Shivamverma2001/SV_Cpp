//class template/generic classes with single type of variable
#include <iostream>

using namespace std;
template<class name>//class template
class kamal
{
 name n1,n2,n3;
 public:
     void in()
     {
         cout<<"Enter the data";
         cin>>n1>>n2;
     }
     void process()
     {
         n3=n1-n2;
     }
     void dis()
     {
         cout<<"difference is "<<n3<<endl;
     }

};
int main()
{
   kamal<float>k1;//name =float
   k1.in();
   k1.process();
   k1.dis();
     kamal<int>k2;//name =int
   k2.in();
   k2.process();
   k2.dis();
}
