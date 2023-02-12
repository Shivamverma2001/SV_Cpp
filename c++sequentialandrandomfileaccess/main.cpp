/*Sequence and Random access of the file
All previous file program are sequential
like open file read and write and then close
Random access functions
    functions are
    seekg()
    tellg()
    seekp()
    tellp()
    g means get pointer reading
    p means put pointer writing
    beg means begining   displacement is +ve
    end meand ending      displacement is -ve
    cur means current position  displacement is +ve or -ve
    */
#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{

    //get pointer
   ifstream f1;
   f1.open("marchten.cpp",ios::in);
   f1.seekg(5,ios::beg);//will move the get pointer from begining to 5
     // f1.seekg(4,ios::cur);
       //  f1.seekg(-5,ios::end);
   int x=f1.tellg();//will tell the pos of get pointer
   cout<<x;
   char ch;
   ch=f1.get();
   cout<<endl<<ch;
   // put pointer
       ofstream f2;
   f2.open("marchten.cpp",ios::out);
   f2.seekp(5,ios::beg);
   int  xx=f2.tellp();
   char chh;
   cout<<xx;
   cin>>chh;
   f2.put(chh);
   f2.close();
}
