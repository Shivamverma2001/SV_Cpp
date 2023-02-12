//vector first program push_back,pop_back
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v(5);
cout<<"enter the data in vector";
for(int i=0;i<5;i++)
    {
    v[i]=i;//0 to 4
}
vector<int>::iterator i=v.begin();//iterator declare
v.erase(i);//0 is deleted
cout<<"size is="<<v.size();
for(int i=0;i<4;i++)
{
        cout<<v[i]<<endl;
} }
