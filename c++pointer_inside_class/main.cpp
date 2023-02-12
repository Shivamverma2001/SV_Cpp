//pointer inside the class
#include <iostream>

using namespace std;

class name
{
    int *x,*y;//pointer inside class
public:
    void in(int *p,int *q)
    {
      x=p;
      y=q;
    }
    void process();
};
void name::process()
{
    cout<<*x+*y<<endl;
}
int main()
{
    name n1;
    int a1,b1;
    cin>>a1>>b1;
    n1.in(&a1,&b1);
    n1.process();
}
