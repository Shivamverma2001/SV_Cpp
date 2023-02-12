#include <iostream>

using namespace std;

class book
{
    char name[30];
    float cost;
    char writter[30];
public:
    void getdata();//declare the fnc inside the class

    void display();//prototype is inside and defined can be outside
}b1;//class is over
  void book::getdata()//function is defined inside the class
    {
        cout<<"Enter the name, cost and writer of the book";
        gets(name);
        cin >>cost;
        fflush(stdin);//clear the buffer area
        gets(writter);
        fflush(stdin);//clear the buffer area
    }
    void book::display()//function is defined inside the class
    {
        cout<<"You have entered this data"<<name<<endl<<cost<<endl<<writter;
    }

int main()
{
    //book b1;
    b1.getdata();
    book b2;
    b2.getdata();
    b1.display();
    b2.display();
}
