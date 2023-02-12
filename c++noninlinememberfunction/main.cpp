#include <iostream>

using namespace std;

class classroom
{
    int block;
    int roomno;
    int floor;
public:
    void take();
    void out();
};
void classroom::take()
    {
        cin>>block>>floor>>roomno;
    }
void classroom::out()
    {
        cout<<block<<floor<<endl<<roomno<<endl;
    }
int main()
{
    classroom r1;
    r1.take();
    r1.out();
}
