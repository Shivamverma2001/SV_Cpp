#include <iostream>

using namespace std;

int main()
{
    struct value{
    unsigned day:5;//bit field
    //by pointer
    //v->day=16;
    //indirection operator
    //(*v)/day=16;
    unsigned month:4;
    unsigned year:7;
    };
    struct value a;
    a.day=12;
    a.month=7;
    a.year=2001;
    cout<<"date is"<<a.day<<endl<<a.month<<endl<<a.year<<endl;
    cout<<"a requires"<<sizeof(a)<<"bytes"<<endl;
}
