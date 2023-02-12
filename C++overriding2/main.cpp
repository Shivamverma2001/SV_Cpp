//parent to child relationship
//1 parent can have many child
//in next generation child must have child and they become parent
//over-riding
#include <iostream>

using namespace std;

class students//grand parent
{
    protected:
    char name[20];
    float intermarks;
    public:
        void in()
        {
            cin>>name>>intermarks;
        }
};
class arts:public students
{
  protected:
      float eearts;
  public:
    void in1()
    {
        cin>>eearts;
    }
    void admarts()
    {
        if(intermarks>50&&eearts>60)
            cout<<"can take admission in arts";
        else
            cout<<"can not take admission in arts";
    }
};
class engineering:public students
{
protected:
    float eeeng;
public:
    void in2()
    {
        cin>>eeeng;
    }
    void admeng()
    {
       if(intermarks>70&&eeeng>75)
       {
           cout<<"eligible for engineering";
       }
       else
        cout<<"not eligible for engineering";
    }
};
class medical:public students
{
protected:
    float eemed;
public:
    void in3()
    {
        cin>>eemed;
    }
    void admmed()
    {
        if(intermarks>80&&eemed>70)
            cout<<"eligible for admission in medical";
        else
            cout<<"not eligible to take admission in medical";
    }
};
class mechanical:public engineering//mechanical grandson is students
{
    float eemech;
public:
    void in4()
    {
        cin>>eemech;
    }
    void admech()
    {
        if(intermarks>70&&eeeng>75&&eemech>70)
            cout<<"eligible for mechanical";
        else
            cout<<"not eligible for mechanical";
    }
};
class electronics:public engineering
{
    float eeelec;
public:
    void in5()
    {
        cin>>eeelec;
    }
       void admelec()
    {
        if(intermarks>70&&eeeng>75&&eeelec>75)
            cout<<"eligible for electrical";
        else
            cout<<"not eligible for electrical";
    }
};
class civil:public engineering
{
    float eeciv;
public:
    void in6()
    {
        cin>>eeciv;
    }
        void admciv()
    {
        if(intermarks>70&&eeeng>75&&eeciv>80)
            cout<<"eligible for civil";
        else
            cout<<"not eligible for civil";
    }
};
int main()
{
/*arts a1;//obj of arts
a1.in();
a1.in1();
a1.admarts();
engineering e1;
e1.in();
e1.in2();
e1.admeng();
medical m1;
m1.in();
m1.in3();
m1.admmed();
mechanical mm;
mm.in();
mm.in2();
mm.in4();
mm.admech();
electronics ee;
ee.in();
ee.in2();
ee.in5();
ee.admelec();*/
civil cc;
cc.in();
cc.in2();
cc.in6();
cc.admciv();
}
