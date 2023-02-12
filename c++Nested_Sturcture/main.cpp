#include <iostream>

using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
struct student
{
char name[30];
long int rollno;
struct date dob;//nested structure
};
struct student a;
int main()
{
    //student a;
    a.name[]="shivam verma";
    a.rollno=21;
    a.dob.day=21;//nested structure
    a.dob.month=11;
    a.dob.year=2001;
    cout<<a.name<<endl<<a.rollno<<endl<<a.dob.day<<endl<<a.dob.month<<endl<<a.dob.year;
}
