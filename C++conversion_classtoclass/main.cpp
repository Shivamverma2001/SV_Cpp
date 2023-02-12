//class to class conversion
//write the method in source area by casting operator
//or write the method in destination area by constructor
#include <iostream>

using namespace std;

class test//source
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
    int get()
    {
        return a;
    }
};
class test1//ddestination
{
   public:
       int a;
       test1(test x)//constructor method for conversion
       {
           a=x.get()+10;
       }
       void disp()
       {
           cout<<a<<endl;
       }
};
int main()
{
    test t1;//source
    test1 t2(t1);//class to class conversion
    t1.disp();
    t2.disp();
}
