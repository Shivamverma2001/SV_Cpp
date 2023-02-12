//modes of files
//out and append used to create new file
//ios::in and ios::out
#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{  //ios::in and ios::out
    ofstream f1;//writing
    ifstream f2;//reading
  //  f1.open("10thmarch.cpp",ios::out);//we can skip ios::out as default for ofstream
  f1.open("10thmarch.cpp",ios::app);
    char ch;
    ch=getche();//taking input from the keyboard
   /* f1.put(ch);
    f1.close();
    f2.open("10thmarch.cpp",ios::in);//we can skip ios::in as default for ifstream
    ch=f2.get();
    cout<<ch;
    f2.close();*/
   /* int x;
    cin>>x;
    f1<<x;//write into a file
    f1.close();
    Limitation
    data is overwrite take place in out mode*/
    // solution-> Append mode
    // append is better than out bcz it cant overwrite
    while(ch!='@')
    {
        f1.put(ch);
        ch=getche();
    }
    f1.close();
    f2.open("10thmarch.cpp",ios::in);
    ch=f2.get();
    while(ch!=EOF)
    {
        cout<<ch;
        ch=f2.get();
    }
    f2.close();
}
