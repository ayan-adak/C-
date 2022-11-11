#include<iostream>
#include<iomanip>

using namespace std;

class A     
{
    protected:
    int a;
    public:
    A(){a=0;}
    A(int x) : a(x){}
    void getData()
    {
        cout<<"Enter Value: ";cin>>a;
    }
    void display()
    {
        cout<<"Value is: "<<a<<endl;
    }
};

class B : public A      //single inheritance
{
    protected:
    int b;
    public:
    B(){b=0;}
    B(int x, int y) : A(x),b(y){}
    void getData()
    {
        cout<<"Enter Value: ";cin>>b;
    }
    void display()
    {
        cout<<"Values are: "<<a<<","<<b<<endl;
    }
};

class C : public B       //multilevel inheritance
{
    protected:
    int c;
    public:
    C(){c=0;}
    C(int p) : c(p){}
    C(int x, int y, int z) : B(x,y),c(z){}
    void getData()
    {
        cout<<"Enter Value: ";cin>>c;
    }
    void display()
    {
        cout<<"Values are: "<<a<<","<<b<<","<<c<<endl;
    }
};

class D : public A, public B        //multiple inheritance
{
    protected:
    int d;
    public:
    D(){d=0;}
    D(int q) : d(q){}
    D(int x, int y, int z) : B(x,y),d(z){}
    void display()
    {
        cout<<"Values in D of A and B are "<<B::a<<","<<B::b<<endl;
        cout<<"Sum of A and B in D: "<<B::a+b<<endl;
    }
};

class E : public C, public D        //hybrid & hierarchical inheritance
{
    protected:
    int e;
    public:
    E(){e=0;}
    E(int x, int y) : C(x),D(y){}
    void display()
    {
        cout<<"Values are: "<<C::c<<","<<D::d<<endl;
        cout<<"Sum of C and D in E is "<<C::c + D::d<<endl;
    }
};

int main()
{
    A Oa(4); Oa.display();
    B Ob(6,7); Ob.display();
    C Oc(2,3,5); Oc.display();
    D Od(8,6,5); Od.display();
    E Oe(9,8); Oe.display();
}
