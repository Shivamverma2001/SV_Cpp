#include <iostream>

using namespace std;

class bank
{
    char nameofc[20];
    int money;
    int accno;
public:
    void take()//by default inline
    {
       cin>>nameofc>>money>>accno;
    }
    void deposit(int);//non inline
    void inline withdraw(int );//inline
    int balance()
    {
        return money;
    }

};
void bank::deposit(int x)
{
   money=money+x;
};
void bank::withdraw(int y)
{
   money=money-y;
};

int main()
{
    bank b1;
    b1.take();
    int a,b;
     int amt=b1.balance();
    cout<<amt<<endl;
    cout<<"Enter the amount to deposit";
    cin>>a;
    b1.deposit(a);
     cout<<"Enter the amount to withdraw";
    cin>>b;
        amt=b1.balance();
    cout<<amt;
    b1.withdraw(b);
     amt=b1.balance();
    cout<<amt;
}



