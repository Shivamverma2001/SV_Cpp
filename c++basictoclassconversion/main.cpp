//basic to class conversion(source=build in, destination=class)
//takes place in destination constructor
// minute for user and will convert into time class(data member hr and min)
#include <iostream>

using namespace std;

class time
{
 int min,hours;
 public:
     time()//default constructor
     {

     }
     time(int x)//constructor for conversion x=minutes(main)
     {
         hours=x/60;
         min=x%60;
     }
    void dis()
     {
         cout<<hours<<endl<<min;
     }
};
int main()
{
    time t1;//due to this default constructor is necessary
    int minutes;//build in data type
    cin>>minutes;
    t1=minutes;//basic to class conversion
    //if we cant write default constructor
    //then we use not time t1
    //we use time t1(minutes);
    t1.dis();
}
