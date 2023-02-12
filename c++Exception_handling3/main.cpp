//Single Exception
#include <iostream>

using namespace std;

int main()
{
   int a[5];
   int i;
   for(i=0;i<5;i++)
   {
       cin>>a[i];
   }
   cout<<"you have entered this data";
   try{
   for(i=0;i<10;i++)
   {
       if(i>=5)
        throw 4;
       else
        cout<<a[i];
   }
   }
   catch(int)
   {
       cout<<endl<<"array out of bond";
   }
}
