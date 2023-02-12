//function template with non type argument
#include <iostream>

using namespace std;
template<class n,class size>
void fun(n b[],int s)
{
    n sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+b[i];
    }
    cout<<sum;
}
int main()
{
 float a[4];
 int i;
 for(i=0;i<4;i++)
 {
     cin>>a[i];

 }
 fun<int,int>(a,4);
}
