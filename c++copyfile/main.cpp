
#include <iostream>//cin and cout

using namespace std;
#include<fstream>//file related classes and function are here
#include<conio.h>//getch

int main()
{
    ofstream f;
    f.open("xyz.cpp");
    char c;
    c=getche();
    while(c!='k')
    {
        f.put(c);
        c=getche();
    }
    f.close();
    ifstream f1;
    f1.open("xyz.cpp");//reading
    ofstream f2;
    f2.open("newcreated.cpp");//writing
    char ch;
    ch=f1.get();
    while(ch!=EOF)
    {
       f2.put(ch);
       ch=f1.get();
    }
    f1.close();
    f2.close();


}
