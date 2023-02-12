//this pointer does not work for friend/static fun
//non static member fun this works
//works with objects only this pointer
//by default every non static member function have this pointer
//obj1=obj2 this pointer is working at backend
//this pointer implicitily work
#include <iostream>

using namespace std;
class area
{
    float side1,side2;
public:
    void in()//non static member function
    {
        cin>>this->side1>>side2;//in side2 it by default think this->side2
    }
    void rect()
    {
        cout<<this->side1*this->side2;//this pointer
    }
 /*
 This pointer is not working
 static void in()// static member function
    {
        cin>>this->side1>>side2;
    }
    void rect()
    {
        cout<<this->side1*this->side2;//this pointer
    }*/
};
int main()
{
    area a1;
    a1.in();
    //a1.rect();

    area a2;
    a2=a1;//obj=obj same class done by using this pointer
    a2.rect();
}
