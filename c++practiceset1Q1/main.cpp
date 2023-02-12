/*
class and object, function outside class

Suppose that a new outlet of Lovely Autos has opened its new branch in a city. It allows the manager to keep the records of all cars. For this, they need
the details of the car like, manufacture, model name, engine number, chassis number, year of manufacture and color. Create a class with member functions for entering the
required details of the car and displaying the output in a proper format.
*/
#include <iostream>

using namespace std;

class car
 {
     char man[20];
     char mod[20];
     int eng;
     int chais;
     int yom;
     char color[20];
 public:
    void take();//non inline function
    void display();
 };
 void car::take()
 {
     cout<<"Enter the detail of car";
     cin>>man>>mod>>eng>>chais>>yom>>color;
 }
 void car::display()
 {
     cout<<"You have entered this data";
     cout<<endl<<man<<endl<<mod<<endl<<eng<<endl<<chais<<endl<<yom<<endl<<color;
 }
int main()
{
    car c1,c2;
    c1.take();//copy of object from one to other same class
    c2=c1;
    c1.display();
    c2.display();
}
