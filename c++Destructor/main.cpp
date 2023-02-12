//destructor is 0 or 1 not more than one
//default constructor compiler
//exception at-least one parameter constructor
//default destructor is provided by compiler
// by obj go out of scope
#include <iostream>

using namespace std;

class car
{
    float cost;
    int milage;
public:
    car()
    {
cout<<"default constructor is invoked";
    }
    car(int x,float y=23456.50)//constructor with default argument
    {
        milage=x;
        cost=y;
        cout<<milage<<endl<<cost;// allowed
    }
    ~car()//destructor for car class
    {
        cout<<endl<<"your object is distroyed";
    }
    };
int main()
{
 {car c1;//default constructor is called
 car c2(15);
 car c3(18,2500000);}//destructor is called before hello
 cout<<endl<<"hello you are here";

}
