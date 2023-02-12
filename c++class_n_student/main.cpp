#include<iostream>
using namespace std;
class student_t_distribution
{
    char name[20];
    char address[20];
    int marks;
    public:
    void take()
    {
        cout<<endl<<"Enter the name and address and marks of the students with no space"<<endl;
        cin>>name>>address;
        cin>>marks;
    }
    void out();
};
void student_t_distribution::out()
{
    cout<<"Name of the student is "<<name<<endl<<"Address of the student is "<<address<<endl<<"Marks of the student is "<<marks;
}
int main()
{
    int n;
    cout<<"Enter number of students";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        student_t_distribution s[i];
        s[i].take();
        s[i].out();
    }
    return 0;
}
