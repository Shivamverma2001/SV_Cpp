#include <iostream>

using namespace std;

int main()
{
    int a,sum,n;
    cout<<"Enter the number from which you want to add the natural number";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of "<<n<<" natural number is "<<sum;
}
