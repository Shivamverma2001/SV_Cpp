
//writing into file character by character
//read and writing

#include <iostream>//cin and cout

using namespace std;
#include<fstream>//file related classes and function are here
#include<conio.h>//getch
int main()
{
ofstream ob;
ob.open("xyz.cpp");//writing
char c1;
c1=getche();
while(c1!='k')
{
ob.put(c1);
c1=getche();
}
ob.close();
    ifstream ff;
    ff.open("xyz.cpp");//reading
    char c2;
    c2=ff.get();
    cout<<endl<<"you are reading the file now"<<endl;
    while(c2!=EOF)
    {
        cout<<c2;
        c2=ff.get();
    }
    ff.close();
}
