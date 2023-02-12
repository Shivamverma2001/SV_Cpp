//array inside in a class as data member
//linear search
//binary search
//sorting
//inserting
//deletion
#include <iostream>

using namespace std;
class data
{
    float x[5];//declare
    public:
        void take()
        {
            for(int i=0;i<5;i++)//i=0 to 4
            {
                cin>>x[i];//initialization of array
            }
        }
        void process()
        {
          int sum=0;
           for(int i=0;i<5;i++)
           {
               sum=sum+x[i];//sum of all element of array
           }
           cout<<sum<<endl;
        }
};

int main()
{
  data d1;
  d1.take();
  d1.process();
}
