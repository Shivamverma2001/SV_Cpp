//multiple constructor in same class or constructor overloading
#include <iostream>

using namespace std;

class student
{
    int rollno;
    float cgpa;
public:
    student()//default  inline
    {
      rollno=10;
      cgpa=5.6;
    }
    student(int a);//constructor with 1 argument  non-inline
    student(int x,float y);//constructor with 2 argument  non inline
    void dis()
    {
        cout<<rollno<<endl<<cgpa<<endl;
    }
};
student::student(int a)
{
    rollno=a;
    cgpa=8.78;
}
student::student(int x,float y)
    {
      rollno=x;
      cgpa=y;
    }
int main()
{
    student s1;//default
    s1.dis();
    student s2(25);//1 argument
    s2.dis();
    student s3(12,8.9);//2 argument
    s3.dis();
}
