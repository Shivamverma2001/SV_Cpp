//float dynamic array inside the class
#include <iostream>

using namespace std;

class basic
{
protected:
    float *name;
    int size;
public:
    void take()
    {
        cout<<"enter the size"<<endl;
        cin>>size;
        name=new float[size];//new operator  of dynamic array inside the class
        cout<<"enter the data"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>*(name+i);//taking the data in array
        }
    }
    void process()
    {
        float sum;
        for(int i=0;i<size;i++)
        {
            sum=sum+*(name+i);//adding the array elements
        }
        cout<<"sum of array ="<<endl;
        cout<<sum;
    }
};
int main()
{
    basic b1;
    b1.take();
    b1.process();
}
