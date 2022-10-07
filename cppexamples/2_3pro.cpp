#include<iostream>
using namespace std;
class Person
{
    char name[30];
    int age;

    public:
    void getData();
    void display();
};

void Person :: getData()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
}

void Person :: display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

int main()
{
    Person p;
    p.getData();
    p.display();
    return 0;
}
