//delete operator(array of int )
#include<iostream>
 using namespace std;
 int main()
 {
int *p,size;
cout<<"enter the size";
cin>>size;
p=new int[size];
cout<<"enter the data"<<endl;
for(int i=0;i<size;i++)
{
cin>>*(p+i);//ok
}
cout<<"entered data before delete"<<endl;
for(int i=0;i<size;i++)
{
cout<<*(p+i)<<endl;//ok
}
delete []p;//deallocation of mem
cout<<"entered data after delete"<<endl;
for(int i=0;i<size;i++)
    {
        cout<<*(p+i)<<endl;//ok
} }
