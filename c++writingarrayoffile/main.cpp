//write array of object for the file
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
        name n[3];
       for(int i=0;i<3;i++)
       {n[i].in();
        ofstream f1;
        f1.open("marchten.cpp",ios::out);
        f1.write((char *)&n[i],sizeof(n[i]));//write the data n1 into file
        f1.close();//writing task is done
       ifstream f2;
        f2.open("marchten.cpp",ios::in);//read the data n1 from the file
        f2.read((char*)&n[i],sizeof(n[i]));
        n[i].process();
        f2.close();
    }
    }
