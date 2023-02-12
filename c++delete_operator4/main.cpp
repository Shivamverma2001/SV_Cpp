//new and delete operator in dynamic array
#include<iostream>
using namespace std;
int main()
{
int size;
cin>>size;
string *s;
s=new string[size];
for(int i=0;i<size;i++)
{
cin>>*(s+i);//
}
 string s1;
cout<<"enter what u wanna search";
cin>>s1;
int d=-1;//never
for(int i = 0; i < size; i++)
{
if(*(s+i)==s1)
{
d=1;
break;
} }
if(d==-1)
    cout<<" not found";
else cout<<"found"; //
delete[]s;//ok
for(int i=0;i<size;i++)
{
cout<<*(s+i)<<endl;
} }
