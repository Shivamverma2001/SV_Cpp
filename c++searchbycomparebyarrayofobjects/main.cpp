#include <iostream>
#include<string.h>
//search a car with company name entered by user
using namespace std;

class car
{
     string comp;
     float cost;
     int yom;
 public:
    void take()
    {
        cout<<"enter the data"<<endl;
        cin>>comp;
        cin>>cost>>yom;
        fflush(stdin);
    }
    void dis()
    {
        cout<<"details of the car are"<<endl;
        cout<<comp<<endl<<cost<<endl<<yom<<endl;
    }
    string fun()
    {
        return comp;
    }
};

int main()
{
    car c1[4];//array of objects
    int j;
    for(int i=0;i<4;i++)
    {
        c1[i].take();
    }
    cout<<"enter the company name to search"<<endl;
    char compname[20];
    gets(compname);
    fflush(stdin);
    for(int i=0;i<4;i++)
    {
        if(c1[i].fun()==compname)
        j=i;
        break;
    }
    c1[j].dis();//if found will display the result details
}
