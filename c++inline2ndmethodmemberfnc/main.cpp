//inline member function
//2nd approach
#include <iostream>

using namespace std;

class classroom
{
    int block;
    int roomno;
    int floor;
public:
    void take()//fun defined inside the class is by default inline member function
    {
        cin>>block>>floor>>roomno;
    }
    void out()//fun defined inside the class is by default inline member function
    {
        cout<<block<<floor<<endl<<roomno<<endl;
    }
};
int main()
{
    classroom r1;
    r1.take();
    r1.out();
}

