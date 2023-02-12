/*Inline Functions
Suppose the Google has opened his office in Chandigarh recently. Now there is the requirement for the new employees in a company. The manager to keep the
 records of all employees. For this, they need the details of the employee like employee name, experience of the employee, age, status of the
 employee(married or unmarried). Create a class with the member function for entering the required details of the employee and inline function
 for displaying the output in a proper format and check whether the employee is eligible or not.
*/
#include <iostream>

using namespace std;

class employee
{
   char e_name[20];
   int exp;
   int age;
   char status[20];
   public:
       void in();//member function
       void inline out();//inline function
};
void employee::in()
{
    cin>>e_name>>exp>>age>>status;
}
void employee::out()
{
    if(age>=20&&exp>=5)
    cout<<endl<<e_name<<endl<<exp<<endl<<age<<endl<<status<<endl;
}
int main()
{
    int n;
    cout<<"How many employee records you want";
    cin>>n;
    employee e[10];
    for(int i=0;i<n;i++)
    {
        e[i].in();
    }
        for(int i=0;i<n;i++)
    {
        e[i].out();
    }

}
