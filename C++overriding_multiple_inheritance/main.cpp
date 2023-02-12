//over-riding inheritance
#include <iostream>

using namespace std;

class one//base 1
{
public:
    void take()
    {
        cout<<"base class 1 function";
    }
};
class two//base 2
{
    public:
    void take()
    {
        cout<<"base class 2 function";
    }
};
class three:public one,public two
{
   public:
    void take()
    {
        cout<<"derived class function";
    }
};
int main()
{
    three t;
    t.one::take();
    t.two::take();
    t.take();
}
