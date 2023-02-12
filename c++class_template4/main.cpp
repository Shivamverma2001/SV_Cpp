//class template to find sum of dynamic array of any type
#include <iostream>

using namespace std;
template<class name>
class data
{
    int size;
    name *n,sum=0;;
public:
    void in()
    {
        cout<<"enter the number of element";
        cin>>size;
        n=new name[size];//dynamic memory allocation and n is the name of array
        for(int i=0;i<size;i++)
        {
            cin>>n[i];
            //or
            //cin>>*(n+i);
        }
    }
    void process()
    {

         for(int i=0;i<size;i++)
         {
             sum=sum+*(n+i);
         }
    }
    void dis()
             {
               cout<<"The sum of dynamic array is "<<sum<<endl;
             }
};

int main()
{
    data<float>d1;
    d1.in();
    d1.process();
    d1.dis();

    data<int>d2;
    d2.in();
    d2.process();
    d2.dis();
}
