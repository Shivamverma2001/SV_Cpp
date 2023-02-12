//create a dynamic array of obj for room class and search
//the room with highest capacity
//array of objects(dynamic)
#include <iostream>

using namespace std;
class room
{
    int room_no;
    int capacity;
public:
    void input()
    {
        cin>>room_no>>capacity;
    }
    void out()
    {
        cout<<room_no<<endl<<capacity<<endl;
    }
    int search()
    {
        return capacity;
    }

};
int main()
{
    int num,a;
    room *p;
    cout<<"Enter the size";
    cin>>num;
    p=new room[num];//dynamic allocation
    cout<<"Enter the room detail"<<endl;
    for(int i=0;i<num;i++)
    {
      (p+i)->input();//0 to num-1
    }
    cout<<"display the room details";
    for(int i=0;i<num;i++)
    {
      (p+i)->out();//0 to num-1
    }
  a=(p+0)->search();//assumption
  for(int i=1;i<num;i++)
  {
            if(((p+i)->search())>a)
        a=(p+i)->search();
  }
  cout<<a;
  a=(p+0)->search();//assumption
  for(int i=1;i<num;i++)
  {
            if(((p+i)->search())<a)
        a=(p+i)->search();
  }
  cout<<a;
}
