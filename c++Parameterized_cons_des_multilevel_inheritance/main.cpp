//Parameterized constructor and destructor with multi-level inheritance
#include <iostream>

using namespace std;
class one
{
   protected:
       float a,b;
       public:
           one(float aa,float bb)
           {
               a=aa;
               b=bb;
           }

};
class two:public one
{
    protected:
        char name;
       public:
           two(float cc,float dd,char fame):one(cc,dd)
           {
               name=fame;
           }

};
class three:public two
{
protected:
    string s1;
       public:
           three(float a2,float a3,char nam,string ss):two(a2,a3,nam)
           {
               s1=ss;
           }
};
class four:public three
{
       int bn;//private data of same class is access with member function
       public:
           four(float a21,float a31,char n,string sss,int bnn):three(a21,a31,n,sss)
           {
               bn=bnn;
           }
           void dis()
           {
               cout<<a<<endl<<b<<endl<<name<<endl<<s1<<endl<<bn;
           }
};
int main()
{
    four f1(3.1,3.2,'s',"shivam",5);
    f1.dis();
}
