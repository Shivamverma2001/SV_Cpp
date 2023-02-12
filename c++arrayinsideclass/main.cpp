#include <iostream>

using namespace std;

class name
{
char n[5];
public:
    void in();
    void src();

};
void name::in()
{
    for(int i=0;i<5;i++)//array inside class
    {
        cin>>n[i];//input in char array
    }
}
void name::src()
{
    int count=0;
    char cts;
    cout<<"enter the character to search";
    cin>>cts;
    for(int i=0;i<5;i++)
    {
        if(n[i]==cts)
            count++;
    }
      if(count>0)
        cout<<"found";
    else
        cout<<"not found";
}

int main()
{
    name n1;
    n1.in();
    n1.src();
}
