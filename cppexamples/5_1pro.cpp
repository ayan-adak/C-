#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;

    public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout<<"number: "<<number<<endl;
        cout<<"cost: "<<cost<<endl;
    }
};

void item :: getdata(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    item x;
    cout<<"\nobject x "<<"\n";
    x.getdata(100,299.95);
    x.putdata();
    item y;
    cout<<"\nObject y "<<"\n";
    y.getdata(200,175.50);
    y.putdata();
    return 0;
}
