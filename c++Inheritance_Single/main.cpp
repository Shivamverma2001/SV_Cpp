//single inheritance
//inheritance single base and one derived class
//inheritance protected
#include <iostream>

using namespace std;
class first//base class
{protected:
    int x,y;
public:
    void in()
    {
        cin>>x>>y;
    }

};
class second:public first//definition of derived/subclass
{
    int z;//x,y protected and z is private
public:
    void in1()
    {
        cin>>z;
    }
    void cal()
    {
        cout<<x*y*z;//x,y belong to base and z is belong to derived class
    }
};
int main()
{
    second s1;//object of derived class
    s1.in();//allowed
    s1.in1();
    s1.cal();
}
