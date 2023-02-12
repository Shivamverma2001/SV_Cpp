#include <iostream>

using namespace std;

class car
{
     char comp[20];
     float cost;
     int yom;
 public:
    void take()
    {
        cout<<"enter the data"<<endl;
        gets(comp);
        cin>>cost>>yom;
        fflush(stdin);
    }
    void dis()
    {
        cout<<"details of the car are"<<endl;
        cout<<comp<<endl<<cost<<endl<<yom<<endl;
    }
};

int main()
{
    car c1[4];//array of objects
    for(int i=0;i<4;i++)
    {
        c1[i].take();
    }
    for(int i=0;i<4;i++)
    {
        c1[i].dis();
    }
}
