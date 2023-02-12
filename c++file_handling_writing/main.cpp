//writing into file character by character
//get is function to read form file
//and put is write into file
#include <iostream>//cin and cout

using namespace std;
#include<fstream>//file related classes and function are here
#include<conio.h>//getch
int main()
{
ofstream ob;//ob is object of ofstream writing purpose

ob.open("abcd.cpp");//file will writing mode it is use for connection established
char c1;
c1=getche();//taking a char from the user
while(c1!='k')//k char decided by user k is terminating
{
ob.put(c1);//writing the same char into file
c1=getche();//take 2nd and on more characters from the users
}
ob.close();//it is used to destroy the connection
}
