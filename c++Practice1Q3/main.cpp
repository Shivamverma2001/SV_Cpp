/*Static data members and member functions
Suppose that a student wants to take the admission in LPU, he needs to enter his information to take admission. University provides admission for 2017-2018.
You need to design a program to generate a unique registration number for each new admission, and it should be increment by 1. You can use static member
function to check the status of registration number.
*/
#include <iostream>

using namespace std;

class students
{
    int static reg_no;
    char name[20];
    char city[20];
    char state[20];
    int mob;
public:
    void in()
    {
    cout<<endl<<"Enter your details";
    cin>>name>>city>>state>>mob;
    }
    int static out()
    {
        cout<<endl<<"Your registration number is "<<reg_no;
    }
    void out2()
    {
        cout<<name<<endl<<city<<endl<<state<<endl<<mob;
    }
    void out3();
};
int students::reg_no=20170000;
void students::out3()
{
    reg_no++;
}
int main()
{

 int i=0;
 students s[2];
 for(i;i<2;i++)
 {
     s[i].in();
     cout<<endl<<"Your details You have entered is"<<endl;
     s[i].out2();
      s[i].out();
     s[i].out3();

 }


}
