//dynamic array
#include <iostream>

using namespace std;

class mobile
{
    float cost;
    string model;
public:
    void in()
    {
        cin>>cost>>model;
    }
    string search()
    {
        return model;
    }
    void out()
    {
        cout<<cost<<endl<<model<<endl;
    }
};
int main()
{
    int size,count=0;
    mobile *m;
    cout<<"Number of mobiles"<<endl;
    cin>>size;
    m=new mobile[size];//dynamic memory allocation
    cout<<"Enter the details of different mobiles";
    for(int i=0;i<size;i++)
    {
    (m+i)->in();
    }
      for(int i=0;i<size;i++)
    {
    (m+i)->out();}
    string mod;
    cout<<"enter the model";
    cin>>mod;
     for(int i=0;i<size;i++)
     {
         if(mod==(m+i)->search())
            ++count;
     }
     if(count>0)
        cout<<"model exist";
     else
     cout<<"model does not exist";

}
