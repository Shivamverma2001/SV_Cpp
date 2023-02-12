//reading for file(already exists) character by character
#include <iostream>//cin and cout

using namespace std;
#include<fstream>//file related classes and function are here
#include<conio.h>//getch
int main()
{
    ifstream ff;//ff is object of building class in class ifstream  bcz we want to read file
    ff.open("c++basic.cpp");//first check the existing
    char c1;
    c1=ff.get();//first character of file cp1.cpp
    while(c1!=EOF)//EOF is a marker at the end of every text file
    {
        cout<<c1;
        c1=ff.get();//check the 2nd character onwards
    }
    ff.close();
}
