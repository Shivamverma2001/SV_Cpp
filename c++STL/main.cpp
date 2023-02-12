#include<iostream>
using namespace std;
#include<conio.h>
 #include<vector>
 //header vector class stl
 int main()
 {
vector<int>v1(5);//size =5 data int type
int i;
cout<<"enter the data in vector";
for(i=0;i<5;i++)
{
cin>>v1[i];// 5 elemnt
}
v1.push_back(23);//1insertion
v1.push_back(300);//1
cout<<"entered data in vector";
for(i=0;i<7;i++)
{
cout<<v1[i]<<endl;// 0 to 6
}
v1.pop_back();//delete
v1.pop_back();
cout<<"entered data in vector";
for(i=0;i<5;i++)
    {
         cout<<v1[i]<<endl;// 0 to 6
} }
