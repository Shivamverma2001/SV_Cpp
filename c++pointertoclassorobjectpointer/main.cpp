//pointer to class or object pointer
#include <iostream>

using namespace std;

class teacher
{
    char name[20];
    int uid;
    float sal;
public:
    void take();//non inline member function
    void process();
    void display();

};
void teacher::take()//definition of non inline member function
{
    gets(name);
    cin>>uid>>sal;
}
void teacher::process()
{
   sal=sal+3000;//increment in salary
}
void teacher::display()
{
    cout<<name<<endl<<uid<<endl<<sal<<endl;
}

int main()
{
    teacher t1,*t2;//t2 is pointer to class or object pointer
    t1.take();
    t1.display();//normal obj . oprator
    t2=&t1;//it take the address of t1
    t2->process();//pointer to object -> operator
    t1.display();//

}
