//class to class 2nd approach
//write the method by constructor in destination area and casting operator in source
#include <iostream>

using namespace std;
class test1//destination left side
{
    public:
        int a;//it is mandatory if it is not then o1.a is not work
        test1()//default constructor
        {

        }
        void disp()
        {
            cout<<a<<endl;
        }
};
class test//souce right side
{
    int a;
public:
    test()
         {
             a=10;
         }
         void disp()
         {
             cout<<a<<endl;
         }
         operator test1()//casting operator in source class
         {test1 o1;
         o1.a=a*10;
         return o1;}
};
int main()
{
    test t1;//source class object
    test1 t2;//destination class object
   // t2=t1.operator test1();
   //or
   t2=t1;
    t1.disp();//10
    t2.disp();//100
}
