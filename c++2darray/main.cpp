//2d array find the largest in two dimension array
#include <iostream>

using namespace std;

class data
{
    int a[3][4];//declaration of 2d array here 3 is row and 4 is cloumn
public:
    void in()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                cin>>a[i][j];//takes 12 element
            }
        }
    }
    int largest();//non inline member function

};
int data::largest()
{
    int large,i,j;
    large=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(large<a[i][j])
            {
                large=a[i][j];
            }
        }
    }
    return large;
}

int main()
{
    data d1;
    d1.in();
    int a=d1.largest();
    cout<<"Largest number is "<<a;
}
