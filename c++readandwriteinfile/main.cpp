//read and write in file
#include <iostream>//cin and cout

using namespace std;
#include<fstream>//file related classes and function are here
#include<conio.h>//getch
int main()
{
    char name[20];
    ofstream ff;
    ff.open("hello.cpp");
    gets(name);
    fflush(stdin);
    ff<<name;//similar to cout<<name;
    ff.close();
    ifstream f1;
    f1.open("hello.cpp");
    f1>>name;//similar to cin>>name;
    cout<<name;
    cout<<endl;
    f1.close();
    // another for multi word data
   ifstream f2;
   f2.open("hello.cpp");
   f2.getline(name,50);//read multi word syntax of get-ine(var-name,size of character)
   cout<<name;
   f2.close();
}
