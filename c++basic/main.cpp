#include <iostream>//iostream give us input output function
#include <stdlib.h>
#include<math.h>
using namespace std;//std is a name space which is standard name space which is earlier defined
//if we not use int it return int by default
int main()
{
    uint32_t n=00000010100101000001111010011100;
    uint32_t d=0;
        int c = 0;
    while (n != 0)
    {
        n = n / 10;
        ++c;
    }
        int a[c];
        for(int i=c-1;i>=0;i--){
            a[i]=n%10;
            n/=10;
        }
        for(int i=0;i<c;i++){
            if(a[i]==1){
               d+=pow(2,i); 
            }
        }
        cout<<d;
}
//00000010100101000001111010011100
//11111111111111111111111111111101