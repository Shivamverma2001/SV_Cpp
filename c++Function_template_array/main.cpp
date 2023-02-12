//function template for array
//find the sum of array element
#include <iostream>
template<class a,class b>//
a name(a a1[],b size)//size int
{
a sum=0;
   for(int i=0;i<size;i++)
   {
      sum=sum+a1[i];
   }
return sum;
}

using namespace std;

int main()
{
   int a[6];
   float b[4];
   cout<<"enter the data"<<endl;
   for(int i=0;i<6;i++)
   {
       cin>>a[i];
   }
   int x=name<int,int>(a,6);
   cout<<"sum of integer array"<<x<<endl;
     cout<<"enter the float array"<<endl;
        for(int i=0;i<6;i++)
   {
       cin>>b[i];
   }
    float y=name<float,int>(b,6);
   cout<<"sum of float array"<<y<<endl;
}
