#include <iostream>

using namespace std;
//union have not user type name
int main()
{
    union
    {
        int x;
        float y;
    };
    cout<<"enter the following information"<<endl;
    cout<<"x in integer"<<endl;
    cin>>x;
    cout<<"y in float"<<endl;
    cin>>y;
    cout<<"\n content of union"<<endl;
    cout<<"x ="<<x<<endl;
    cout<<"y="<<y<<endl;
}

