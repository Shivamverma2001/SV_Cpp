#include <iostream>

using namespace std;

struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    date today;
    void display(struct date one);
    //function declaration
    today.day=10;
    today.month=12;
    today.year=1994;
    display(today);
}
void display(struct date one)
{
    cout<<"Today's date is = "<<one.day<<"/";
    cout<<one.month;
    cout<<"/"<<one.year<<endl;
}
