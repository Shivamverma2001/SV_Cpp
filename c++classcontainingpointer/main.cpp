#include <iostream>
//POinter inside class
using namespace std;

class one
{
    int a,*b;
public:
    void in(int p, int *q)
    {
       a=p;
       b=q;

    }
    void process()
    {
        cout<<a/(*b);
    }
};

int main()
{
    one t1;
    int x,y;
    cin>>x>>y;
    t1.in(x,&y);//function call by value and call by address
    t1.process();
}
