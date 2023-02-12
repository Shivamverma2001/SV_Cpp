/*Structure
A university has maintained the records of 10 students like name, roll number, address-city, pin-code, district, registration number, and marks in a
structure. WaAP  to search the student with name "Rakesh" in structure and display in the record.

*/
#include <iostream>
#include<string.h>
using namespace std;
struct student
{
    char name[20];
    int roll;
    char city[20];
    int pin;
    char dis[20];
    int reg;
    float marks;
}s[2];//array of structure
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        cin>>s[i].name>>s[i].roll>>s[i].city>>s[i].pin>>s[i].dis>>s[i].reg>>s[i].marks;
    }

            char ntos[20];
            cout<<"Enter the name which you want to display the data";
    cin>>ntos;
    for(i=0;i<2;i++)
    {
            if(strcmp(s[i].name,ntos)==0)
        {
            cout<<endl<<s[i].name<<endl<<s[i].roll<<endl<<s[i].city<<endl<<s[i].pin<<endl<<s[i].dis<<endl<<s[i].reg<<endl<<s[i].marks;
        }
        else
            cout<<"does not exist";
    }


}
