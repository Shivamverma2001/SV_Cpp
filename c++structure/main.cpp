#include <iostream>

using namespace std;
// by default all structure members are pblic
struct car
{
    int seats;//30 to 33 4 byte
    float price;//34 to 37
    char name[15];//memory is in multiple of 4 so 15 means nearest up=16
}c1;

int main()
{
    cout<<sizeof(c1)<<endl;//ans is 24 4+4+16
    cout <<&c1.seats<< endl<<&c1.price<<endl<<&c1.name;
}
