//inline 3rd approach
//declare inline inside the class and declare them outside
#include <iostream>

using namespace std;

class classroom
{
    int block;
    int roomno;
    int floor;
public:
    void inline take();//inline  if we remove inline word then it is non-inline
    void inline out();//inline
};
void classroom::take()//fun defined inside the class is by default inline member function
    {
        cin>>block>>floor>>roomno;
    }
void classroom::out()//fun defined inside the class is by default inline member function
    {
        cout<<block<<floor<<endl<<roomno<<endl;
    }
int main()
{
    classroom r1;
    r1.take();
    r1.out();
}
