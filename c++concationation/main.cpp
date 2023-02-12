#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
string    s1="hello";
    string s2="hello";
    string s3;
    s3=s1+s2;
    cout<<endl<<s3<<endl;
    if(s1>s2)
    {
        cout<<"s1 is greater then s2";
    }
    else if(s1==s2)
    cout<<"both are same";
    else
        cout<<"s2 is greater";
        char a=s1[3];
        cout<<endl<<a;// l is printed
}
