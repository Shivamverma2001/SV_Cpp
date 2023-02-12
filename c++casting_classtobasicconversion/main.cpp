//conversion of class data to build  in data
//casting operator is used in (int =obj)(destination = source)
//3 things to remember
//does not take anything
//return type cant write but can return anything
//casting operator must be member function of class
#include <iostream>

using namespace std;
class time
{
int hr,min,sec;
public:
    void in()
    {
        cout<<"Enter the data for hour, min, and second";
        cin>>hr>>min>>sec;
    }
    operator int()//conversion from class to int(basic)  member function  int is a casting oprator
    {
        int p;
        p=hr*60*60+min*60+sec;
        return  p;
    }
};
int main()
{
    int second;
    time t1;
    t1.in();
   // second=t1.operator int();//function call
   //or
   second=t1;
    cout<<second;
}
