//linear search in dynamic array
#include <iostream>

using namespace std;
class one
{
    char *p;
    int size;
public:
    void in()
    {
        cout<<"enter the size for character array"<<endl;
        cin>>size;
        p=new char[size];//dynamic array for char data-type inside the class
        cout<<"enter the char array"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>*(p+i);//p[0]...p[length]
        }
    }
    void search()
    {
        cout<<"enter the char which you want to search";
        char name;
        int count=0;
        cin>>name;
        for(int i=0;i<size;i++)
        {
            if(*(p+i)==name)
                count=count+1;

        }
        if(count>0)
            cout<<"char exist"<<count<<"times";
        else
            cout<<"char does not exist";
    }
};
int main()
{
    one o1;
    o1.in();
    o1.search();
}
