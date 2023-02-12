//38-810 inline member fun
//2nd approach
// declare inside inline and define outside
#include<iostream>
using namespace std;
class classroom
{
int block;
int roomno;
int floor;
public:
void inline take();//inline

void inline out(); //inline
}
};
void classroom:: take()//fun defined inside the class is by default inline member fun
{
cin>>block>>floor>>roomno;
}
void classroom:: out()//fun defined inside the class is by default inline member fun
{
cout<<block<<endl<<floor<<endl<<roomno;
}
int main()
{
classroom r1;
r1.take();
r1.out();

}

