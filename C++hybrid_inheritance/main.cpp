//multi path inheritance or hybrid inheritance
//ambiguity solution
//virtual base class is the solution
//virtual do that only 1 path is follow
#include <iostream>

using namespace std;

class one
{
  protected:
      int a,b;//base
  public:
    void in()
    {
        cin>>a>>b;
    }
};
class two:public virtual one//same
{
protected:
    int c;//a,b access
public:
    void in1()
    {
        cin>>c;
    }
};
class three:virtual public one//same
{
protected:
    int d;
public:
    void in2()
    {
        cin>>d;
    }
};
class four:virtual public one,public two,public three
{
public:
    void process()
    {
        cout<<a+b+c+d;
    }
};
int main()
{
  four f1;
  f1.in();
  f1.in1();
  f1.in2();
  f1.process();
}
