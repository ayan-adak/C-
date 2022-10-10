#include<iostream>
#include<cstring>
using namespace std;

class binary
{
    string s;

    public:
    void read(void)
    {
        cout<<"Enter a Binary Number: ";
        cin>>s;
    }
    void chk(void)
    {
        for (int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"\nIncorrect binary number format...the program will quit";
                exit(0);
            }
        }
    }
    
    void ones(void)
    {
        chk();
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            s.at(i)='1';
            else
            s.at(i)='0';
        }
    }
    void display(void)
    {
        ones();
        cout<<"\nThe 1's complement of the above binary number is: "<<s;
    }
};

int main()
{
    binary b;
    b.read();
    b.display();
    return 0;
}
