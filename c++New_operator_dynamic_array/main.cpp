//new operator
//dynamic INTEGER array means size not fix
//static array size is fix and loss of memory also take place
#include <iostream>

using namespace std;

int main()
{
   int x;
   int *p;
   cout<<"enter the size for integer array";
   cin>>x;
   p=new int[x];//dynamic array as x decided by user at run time
   int i;
   cout<<"enter the data in dynamic array";
   for(i=0;i<x;i++)
   {
       cin>>*(p+i);//similar to p[i]
   }
   cout<<"displaying the data"<<endl;
   for(i=0;i<x;i++)
   {
       cout<<*(p+i)<<endl;
   }
}

