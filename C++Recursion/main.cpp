//Sum of series
//1+2+3+4....n
//Function must call itself
//for base value function do not call itself
#include <iostream>

using namespace std;

int sumos(int x)
{
    if(x>1)
    {
       return(x+sumos(x-1));//5+4+3...1 repeat value
    }
    else
        return 1;//base value
}
int main()
{
    int p;
    cin>>p;
    int pp;
    pp=sumos(p);
    cout<<pp<<endl;
}
