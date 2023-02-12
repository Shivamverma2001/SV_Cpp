
//class template with default argument right to left
#include <iostream>

using namespace std;

template<class one,class two=int,class three=char>//syntax  right to left
class data
{
    one a1;
    two t1;
    three th;
public:
    void in(one aa,two tt,three tthh)
    {
    a1=aa;
    t1=tt;
    th=tthh;

    }
    void dis()
    {
        cout<<"you have entered this data"<<endl;
        cout<<a1<<endl<<t1<<endl<<th<<endl;
    }
};
int main()
{
    data<int,int,float>obj;//default willl not work here
    obj.in(21,21,23.5);
    obj.dis();
     data<int,int>obj2;
         obj2.in(21,21,65);
    obj2.dis();
         data<int>obj3;
         obj3.in(21,2.1,05);
    obj3.dis();
}
