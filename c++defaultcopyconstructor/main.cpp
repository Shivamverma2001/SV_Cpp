//
#include <iostream>

using namespace std;

class data
{
    int x,y;
public:
    data()// default constructor
    {
        cout<<"enter the data";
        cin>>x>>y;
    }
    void dis()
             {
                cout<<x<<endl<<y<<endl;
             }

};
int main()
{
   data d1;
   d1.dis();
   data d2=d1;//default copy compiler
   d2.dis();
   data d3(d1);//default copy compiler
   d3.dis();
}
