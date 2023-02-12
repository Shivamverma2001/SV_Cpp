//write a program to define 2 area function to calculate the are of circle as well as for the rectangle using function overloading
#include <iostream>


using namespace std;

float area(float r)
{
    return(3.14*r*r);
}
float area(float l, float b)
{
    return(l*b);
}

int main()
{
    float radius;
    cin>>radius;
    float a1=area(radius);
    cout<<a1<<endl;
    float length,breath;
    cin>>length>>breath;
    float a2=area(length,breath);
    cout<<a2<<endl;
}


