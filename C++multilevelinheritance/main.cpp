//multi-level inheritance
#include <iostream>

using namespace std;
class per//base class
{
protected:
char name[20];
int age;
public:
    void in1()
    {
        cin>>name>>age;
    }
    };
class bq:public per//bq is intermediate drive class
{
protected:
  float matmarks;
  public:
      void in2()
      {
          cin>>matmarks;
      }
};
class iq:public bq//iq is also inter drive
{
protected:
   float intmarks;
   public:
       void in3()
       {
           cin>>intmarks;
       }
};
class cert:public iq//final drive class
{
    char certi[20];//ok
public:
    void in4()
    {
        cin>>certi;
    }
    void out()
    {
        cout<<"entered detail is=";
        cout<<name<<endl<<age<<endl<<matmarks<<endl<<intmarks<<endl<<certi<<endl;
    }
};
int main()
{
    cert c1;
    c1.in1();
    c1.in2();
    c1.in3();
    c1.in4();
    c1.out();
}
