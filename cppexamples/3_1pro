#include<iostream>
using namespace std;
int m=10;
int main()
{
    int m=20;
    {
        int k = m;
        int m = 30;
        cout<<"We are in inner block";
        cout<<"K = "<<k<<endl;
        cout<<"M = "<<m<<endl;
        cout<<"::m = "<<::m<<endl;
    }
    cout<<"We are in outer block";
    cout<<"M = "<<m<<endl;
    cout<<"::m = "<<::m<<endl;
    return 0;
}
