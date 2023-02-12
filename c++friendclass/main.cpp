//friend class
//if A is a friend of B its reverse is not true for that we tell that B is a friend of A
#include <iostream>

using namespace std;

class two;//forward declaration
class one
{

int x,y;
public:
    void in()
    {
        cin>>x>>y;
    }
    friend class two;


};
class two
{
int z,w;
public:
    void in1()
    {
        cin>>z>>w;
    }
    void access(one t1)//arg of fun is obj of one class
    {
     cout<<t1.x+t1.y+z+w<<endl;//we access x y from one class by dot operator
    }


};

int main()
{
    one o1;
    two t2;
    o1.in();//x,y
    t2.in1();//z,w
    t2.access(o1);//fun call not a friend fun
}
