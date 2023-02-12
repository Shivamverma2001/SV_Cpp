#include <iostream>

using namespace std;

union car//size union is 20 ut in structure the size is 28
{
    char model[20];
    float cost;
    int eng_cap;

};//no memory is  allocated

int main()
{
    car c1,*c2;
    cout<<"Enter the details";
    cin>>c1.model>>c1.cost>>c1.eng_cap;//normal member access
    c2=&c1;
    cout<<"you have entered this data";
        cout<<endl<<c2->cost<<endl<<c2->model<<endl<<c2->eng_cap;//pointer to union


}
