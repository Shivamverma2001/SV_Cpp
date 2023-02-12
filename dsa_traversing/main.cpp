#include <iostream>
//ub=max index,lb=min index
using namespace std;

int main()
{
    int arr[7]={12,12,34,25,45,67,88};
    int lb=0,ub=6;
    for(int i=lb;i<ub;i++)
    {
        cin>>arr[i];
    }
    for(int i=lb;i<ub;i++)
    {
        cout<<arr[i];
    }
}
