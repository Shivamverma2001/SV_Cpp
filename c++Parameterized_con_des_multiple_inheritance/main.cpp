//Parameterized constructor and destructor with multiple inheritance
#include <iostream>
using namespace std;
class a
{
protected:
    int x,y;
public:
    a(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    ~a()
    {
        cout<<"this is des of base 1";
    }
};
class b
{
protected:
    float aa;
    public:
    b(float mm)
    {
        aa=mm;
    }
       ~b()
    {
        cout<<"this is des of base 2";
    }
};
class c
{
protected:
    string s1;
    public:
    c(string ss)
    {
        s1=ss;
    }
       ~c()
    {
        cout<<"this is des of base 3";
    }
};
class derived:public c,public a,public b
{
    char name;
public:
    derived(int ab,int ab1,float ac, string sr,char fame):a(ab,ab1),b(ac),c(sr)
    {
        name=fame;
    }
       ~derived()
    {
        cout<<"this is des of derived 1 class";
    }
    void dis()
    {
        cout<<x<<endl<<y<<endl<<aa<<s1<<endl<<name;
    }
};
int main()
{
    derived d1(3,4,5,"shivam",'c');
    d1.dis();
}
