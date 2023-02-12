/* Create a class with data members name, roll number, and cgpa. Enter the details for 5 student. Create an inline member function to take the data
and non inline member function to display the details of student with highest cgpa.
*/
#include <iostream>

using namespace std;

class student
{
    char name[20];
    int rollno;
public:
    float cgpa;
    void in()//inline member function
    {
        gets(name);
        cin>>rollno>>cgpa;
        fflush(stdin);
    }
    void out();//non inline member function
};
void student::out()
{
    cout<<endl<<name<<endl<<rollno<<endl<<cgpa;
}
int main()
{
    int i;
    student s1,s2,s3,s4,s5;
    s1.in();
    s2.in();
    s3.in();
    s4.in();
    s5.in();
    if(s1.cgpa>s2.cgpa&&s1.cgpa>s3.cgpa&&s1.cgpa>s4.cgpa&&s1.cgpa>s5.cgpa)
        s1.out();
    else if(s2.cgpa>s1.cgpa&&s2.cgpa>s3.cgpa&&s2.cgpa>s4.cgpa&&s2.cgpa>s5.cgpa)
        s2.out();
    else if(s3.cgpa>s1.cgpa&&s3.cgpa>s2.cgpa&&s3.cgpa>s4.cgpa&&s3.cgpa>s5.cgpa)
        s3.out();
    else if(s4.cgpa>s1.cgpa&&s4.cgpa>s2.cgpa&&s4.cgpa>s3.cgpa&&s4.cgpa>s5.cgpa)
        s4.out();
    else
        s5.out();
}
