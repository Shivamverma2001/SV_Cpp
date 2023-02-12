//constructors with default argumment
//default start from right to left
//all argument may be defaut
#include <iostream>

using namespace std;

class car
{
    float cost;
    int milage;
public:
    car(int x=12,float y=23456.50)//constructor with default argument
    {
        milage=x;
        cost=y;
        cout<<milage<<endl<<cost;// allowed
    }
    };
int main()
{
 car c1;//default argument will be considered
 car c2(15);//cost is default
 car c3(18,2500000);

}

