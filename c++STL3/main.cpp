//pushback,popback,popfront,pushfront
#include<iostream>
#include<conio.h>
#include<list>//header
using namespace std;
 main()
 {
list<int> r1;//r1 is obj of list
class r1.push_back(10);//10
r1.push_back(20);//10,20
r1.push_back(30);//10,20,30
r1.push_front(15);//15,10,20,30
r1.push_front(25);//25 15 10 20 30 ok
list<int>::iterator
it=r1.begin();
cout<<"\n element in linked list are\n";
for(it=r1.begin();it!=r1.end();it++)
    {
    cout<<*it<<"\t";//*pointer=value
 } r1.pop_front();//25 deleted
 cout<<"\n element in linked list are\n";
 for(it=r1.begin();it!=r1.end();it++)
{
cout<<*it<<"\t";
}
r1.pop_back();//15 10 20
cout<<"\n element in linked list are\n";
for(it=r1.begin();it!=r1.end();it++)
{
cout<<*it<<"\t";
}
r1.sort();//arrange in increasing order
cout<<"\n element in linked list are\n";
for(it=r1.begin();it!=r1.end();it++)
{
cout<<*it<<"\t";//10 15 20
} r1.reverse();//decre
cout<<"\n element in linked list are\n";
for(it=r1.begin();it!=r1.end();it++)
{
cout<<*it<<"\t";
}
it=r1.begin();
it++;
it++;
r1.insert(it,56);//3rd pos
cout<<"\n element in linked list are\n";
for(it=r1.begin();it!=r1.end();it++)
{
    cout<<*it<<"\t";
}
it=r1.begin();
it++;
r1.erase(it);//2nd
cout<<"\n element in linked list are\n";
for(it=r1.begin();it!=r1.end();it++)
    {
        cout<<*it<<"\t";
}
getch();
}
