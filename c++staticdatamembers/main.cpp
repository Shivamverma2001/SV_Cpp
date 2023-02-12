//static data member
#include <iostream>

using namespace std;

class school
{
    char name[20];//non static data
    char address[20];//non static data
    int static studentcount;//static data member
public:
    void start()
    {
        cin>>name>>address;
    }
    void passout()
    {
       studentcount= studentcount-60;
    }
    void adm()
    {
       studentcount=studentcount+100;
    }
    void dis()
    {
        cout<<studentcount<<endl;
    }
};
int school::studentcount=1000;//defination of static var and mandatory to define

int main()
{
    school s1;
    s1.start();
    s1.dis();//1000
    s1.passout();//940
    s1.dis();
    s1.adm();//100
    s1.dis();//1040
}
