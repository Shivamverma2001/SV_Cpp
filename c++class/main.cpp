#include <iostream>
//There are 3 access specifiers are there public, protected, private
//function must be in private area
//private data is access by only member of same class
using namespace std;

class car
{
//by default access specifier is private
  char company[20];
    float cost;
public:
    void in()//1 prototype is there and we are using one of them. There are 4 prototype
    {
      cin>>company>>cost;
    }
    void out()
    {
        cout<<"You have entered this data ";
        cout<<company<<endl<<cost;
    }
};

int main()
{
    cout<<"Please enter the data";
   car c1;//c1 is object and now memory is allocated to c1
   c1.in();//function call
   c1.out();//object.function
}
