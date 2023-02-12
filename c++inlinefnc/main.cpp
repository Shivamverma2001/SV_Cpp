//inline code is pasted on fun call area. it give us address manage
//non incline call jump to address and return overhead. it give us call return address manage
//for multi use non inline is better than inline function
//inline is only a request not a  command
#include <iostream>//head file istream class object cin and ostream class obj cout

using namespace std;//std is the name of namespace

inline fun(int x,int y)
{
    return (x>y?x:y);
}

int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=fun(a,b);
    cout<<"Ans is"<<c;
      d=fun(4,5);
    cout<<endl<<"Ans is"<<d;
}
