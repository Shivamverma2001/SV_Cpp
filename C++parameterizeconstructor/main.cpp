#include <iostream>

using namespace std;

class name
{
    int x;float y;
    char z;
    public:
        name(int a,float b,char c)//parameterized constructor
        {
            x=a;//x=3
            y=b;//b=4.5
            z=c;//c=t
        }
        void result()
        {
            cout<<x<<endl<<y<<endl<<z;
        }
};
int main()
{
    name obj(3,4.5,'t');//parameter constructor is called
    obj.result();

}
