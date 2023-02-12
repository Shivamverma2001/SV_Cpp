#include <iostream>

using namespace std;

class circle
{
    /*
    if we write public behind private then void in is deleted and the in main function we access cin>>cir.rad; and we also get radius in main function
        and we also delete the area then we access the area in main directly like area=3.14*cir.rad*cir.rad;
        if we take radius in private then we cant access the radius in main function
    */
private:
    float rad;
public:
    void in(void)//does not take any thing and does not return
    {
        cout<<"Enter the radius of the circle";
        cin>>rad;
    }
    float area(void)//does not take but return float type of date
    {
        return(3.14*rad*rad);//return type is float
    }
};//cir; also possible here and cant execute in main function

int main()
{
    circle cir;//cir is instance of class circle

    cir.in();
    float myname=cir.area();//as fun return float type of data
    cout<<"The area of the circle is "<<myname;

}
