//multiple inheritance
//more than 1 base class and 1 derived class
#include <iostream>

using namespace std;
class base1
{
protected:
    float a;
};
class base2
{
protected:
    float b;
};
class base3
{
    protected:
    float c;
};
class derived:public base1,protected base2,base3//by default base 3 is private it is private
{
    float result;
public:
    void in()
    {
        cout<<"input the data";
        cin>>a>>b>>c;//allowed
    }
    void out()
    {
        result=a-b-c;
        cout<<result;
    }
};

int main()
{
    derived d1;
    d1.in();
    d1.out();
}
