//initializer list is similar to constructor
//it is used to initialize the constant and varible
//member function and constructor can not initialize the constant data of class
#include <iostream>

using namespace std;

class car

{
    string name;//variable
   const float milage;//constant varible
    //const int cost;  not possible  in simple constructor
   const int cost;
    public:
        //    solution
        // operation is also allowed like y=y/2
      car(string s1,float x,int y):milage(x),cost(y/2)//initializer list
      {
        name=s1;
      }
    /*  void in()
      {
          cin>>name>>milage>>cost; not allowed
      }*/
        car(float xx,int yy):milage(xx),cost(yy/2)//initializer list
      {
        cin>>name;
      }
    void dis()
    {
        cout<<name<<endl<<milage<<endl<<cost<<endl;
    }
};

int main()
{
   car c1("honda",18.5,500000);
   c1.dis();
}
