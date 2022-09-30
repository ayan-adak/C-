#include<iostream>
using namespace std;
class Sample
{
    private:
    int data1,data2;
    public:
    void set(int i, char c);
    void display();
};

void Sample :: set(int i, char c)
{
    data1 = i;
    data2 = c;
}

void Sample :: display()
{
    cout<<"Data1 = "<<data1<<endl;
    cout<<"Data2 = "<<data2<<endl;
}

int main()
{
    Sample *s_ptr;
    try
    {
        s_ptr = new Sample;
    }
    catch(bad_alloc ba)
    {
        cout<<"Bad Allocation occured...the program will terminate now";
        return 1;
    }
    s_ptr->set(25,'A');
    s_ptr->display();
    delete s_ptr;
    return 1;
}
