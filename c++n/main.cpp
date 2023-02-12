#include <iostream>

using namespace std;
int main()
{
   string str("microsoft");
   string::reverse iterator r;
   for(r=str.rbegin();r<str.rend();r++)
                        cout<<*r;
}
