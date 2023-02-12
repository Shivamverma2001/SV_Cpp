#include <iostream>

using namespace std;

//& is used for reference variable
//reference variable means second name of actual or real name like actual name is shivam verma second name is verma

int main()
{
    int name;//name is 1st name
    cin>>name;
    int &name1=name;//declare of reference
    //name1 is 2nd name of same memory
    cout<<name1;
    name1=34;
    cout<<endl<<name<<endl;//34 is displayed
    int &name2=name1;
    cout<<name2;//34
    cout<<&name2;//it print the same address of name1
}
