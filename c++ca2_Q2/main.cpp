/*There is a secret organization and they want to create a secret language for the calculation to make the
data secure.Now the manager of the organization asked his IT employee to make the program which will function as
follows:
A. * will subtract the numbers
B. - will divide the numbers
C. / will add the numbers
D. + will multiply the numbers
*/
#include <iostream>

using namespace std;

class language
{
public:
    float x;
    void in()
    {
    cin>>x;
    }
    void display()
    {
        cout<<"\n Result is"<<x;
    }
    void operator*(language ob)
    {
        x=x*ob.x;
        display();
    }
     void operator-(language ob)
    {
        x=x-ob.x;
        display();
    }
     void operator/(language ob)
    {
        x=x/ob.x;
        display();
    }
     void operator+(language ob)
    {
        x=x+ob.x;
        display();
    }
};
int main()
{
    language l1,l2;
    l1.in();
    l2.in();
    cout<<"Enter the expression which you want to do with these numbers";
    char c;
    cin>>c;
  switch(c)
  {
  case '*':
    l1-l2;
    break;
  case '-':
    l1/l2;
    break;
  case '/':
    l1+l2;
    break;
  case '+':
    l1*l2;
    break;
  }
}
