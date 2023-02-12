//copy constructor for class code
//mire than on const constructor overloading
#include<iostream>
using namespace std;
class code
{
int id;
public:
code()
{

}//default const 1
code(int a)
{
    id = a;
}//param constructor 2
code (const code & x)//copy constructor x is reference var 3
{
cout<<"copy called"<<endl;
id = x. id;
}
void display()
{
    cout<<id<<endl;
}};
int main()
{
code A(20);//param 2
code B(A);//message
code C = A;//message
code D;
D = A;//assignemnt
A.display();
B.display();
C.display();
D.display();
}
