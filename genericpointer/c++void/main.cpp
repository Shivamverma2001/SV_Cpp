#include <iostream>

using namespace std;

int main()
{
    void *p;//p is generic pointer
    //it is a pointer which take address of any data type
    char var='6';
    int var1=23;
    float var2=123.45;
    p=&var;//generic pointer take address of char data type
    cout<<*(char*)p<<endl;//limitation typecasting is mandatory
    p=&var1;
    cout<<*(int*)p<<endl;
       p=&var2;
    cout<<*(float*)p<<endl;
}
