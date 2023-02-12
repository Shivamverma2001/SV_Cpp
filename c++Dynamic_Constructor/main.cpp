//dynamic constructor
//constructor containing new keyword
#include <iostream>
using namespace std;
class name
{
float *x;
public:
    name()//dynamic constructor with default argument
    {
        x=new float;
        *x=34.56;
    }
    name(float p)//dynamic constructor with parameter
    {
        x=new float;
        *x=p;
    }
    void dis()
    {
        cout<<*x<<endl;
    }
    ~name()
    {
        cout<<"object destroyed"<<endl;
    }
};
int main()
{
    name n1,n2(12.345);
    n1.dis();
    n2.dis();
}
