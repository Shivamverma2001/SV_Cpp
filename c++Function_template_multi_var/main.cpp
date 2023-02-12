//function template for multi type variable
#include <iostream>

using namespace std;
template<class a,class b,class c>//a,b,c are three data-type
void fun(a a1,b b1,c c1)//a b  c any datatype
{
 cout<<a1<<endl<<b1<<endl<<c1<<endl;
}
int main()
{
  fun<int,float,char>(12,34.67,'r');
  fun<char,char,char>('w','q','s');
  fun<float,float,int>(1.25,34.5,12);
}
