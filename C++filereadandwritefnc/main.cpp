//write and read function to write the group of data or object in a file
//binary mode
#include <iostream>
#include<fstream>
#include<conio.h>

using namespace std;
class name
{
    int x,y,z;
public:
    void in()
    {
        cin>>x>>y>>z;
    }
    void process()
    {
        cout<<x+y+z<<endl;
    }
    };
    int main()
    {
        name n1,n2;
        n1.in();
        ofstream f1;
        f1.open("marchten.cpp",ios::out);
        f1.write((char *)&n1,sizeof(n1));//write the data n1 into file
        f1.close();//writing task is done
        ifstream f2;
        f2.open("marchten.cpp",ios::in);//read the data n1 from the file
        f2.read((char*)&n2,sizeof(n2));
        n2.process();
        f2.close();
    }
