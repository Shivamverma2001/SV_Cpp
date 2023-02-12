//conversion form basic type to user defined datatype
#include <iostream>

using namespace std;
class celsius
{
    float temper;
public:
    celsius()
    {
        temper=0;
    }
    celsius(float ftmp)
    {
        temper=(ftmp-32)*5/9;
    }
    void showtemper()
    {
        cout<<"Temperature in Celsius:"<<temper;
    }
};
int main()
{
    celsius cel;
    //cel is user defined
    float fer;
    //fer is basic type
    cout<<"Enter temperature in Fahrenheit measurement:";
    cin>>fer;
    cel=fer;
    //convert from basic to user defined
 // equivalent to cel=celsius(fer);
    cel.showtemper();
    return 0;
}
