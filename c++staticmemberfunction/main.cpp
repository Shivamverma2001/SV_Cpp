//non static member fun access obj.funname
//static member fun to display the count
#include <iostream>

using namespace std;

class school
{
    char name[20];//non static data
    char location[20];
    int static s_count;//static data member
    public:
        void take()
        {
            cin>>name>>location;
        }
        void adm();//non inline
        void passout()// inline function non static member
        {
            s_count=s_count-50;//non static member access the static data member
        }
        void static counting()//counting is a static member function
        {
            cout<<s_count<<endl;//static member function can only access static data not other data like name and address
        }
};
int school::s_count=100;//static member initializtion
void school::adm()
{
    s_count=s_count+60;
}

int main()
{
    school s1;
    s1.take();//100 take is a member function
    s1::counting();//2nd way to access static member function
    s1.adm();//160
    s1.counting();//1st way to access static member function
    s1.passout();//110
    s1.counting();
    //school::counting(); it is also happen in static member function

}
