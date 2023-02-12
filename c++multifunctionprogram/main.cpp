#include <iostream>

using namespace std;
void funct1(void);
void funct2(void);
int main(void)
{
    cout<<"inside the main\n";
    cout<<"computer\n";
    funct1();
}
void funct1()
{
    void funct2(void);
    cout<<"inside the function 1\n";
    cout<<"compu \n";
    funct2();
}
void funct2(void)
{
    cout<<"inside the function 2\n";
    cout<<"compu\n";
}
