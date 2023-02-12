//run time polymorphism where derived class is not redefining the fun
 #include<iostream>
  using namespace std;
  class base
  {
       public:
void virtual in()
    {
cout<<"i am in base class input"<<endl;
}
 void virtual out()
 {
cout<<"i am in base class output"<<endl;
} };
class derived:public base { };
int main()
{
    base *b;
    base objb;
derived objd;
 b=&objb;
  b->in();
   b->out();
b=&objd;
 b->in();
 b->out();
}
