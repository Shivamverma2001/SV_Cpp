#include <iostream>

using namespace std;

int main()
{
    enum days{ sunday=7,monday,tuesday,wednesday,thursday,friday,saturday};//by default sunday is 0
    cout<<sunday<<endl<<monday<<endl<<tuesday<<endl<<wednesday<<endl<<thursday<<endl<<friday<<endl<<saturday<<endl;
   // if sunday is 7 monday is 8 tuesday is 9
    //if we give wednesday 5 then thursday is 6 friday is 7 saturday is 8
    //if also give individually different numbers
    days d1,d2;
    d1=thursday;
    d2=sunday;
    if(d1<d2)
        cout<<"d1 comes first in the week";
    else
        cout<<"d2 comes first in the week";
    cout<<endl<<d1-d2;
    cout<<endl<<d2-d1;
}
