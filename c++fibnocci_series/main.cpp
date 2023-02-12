#include <iostream>

using namespace std;

int main()
{
int n;
int term1=0,term2=1,term3;
cout<<"Enter the termination for term count";
cin>>n;
for(int i=1;i<=n;i++)
{
    cout<<term1<<endl;//0
    term3=term1+term2;//1
     term1=term2;
     term2=term3;
}

}
