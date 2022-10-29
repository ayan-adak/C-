#include<iostream>
#include<iomanip>
 
using namespace std;

class Complex
{
    private:
        float real;
        float img;

    public:
        Complex():real(0),img(0) {}
        Complex(float x,float y)
        {
            this->real = x ; this->img=y;
        }
        Complex(Complex &X)
        {
            this->real = X.real;this->img=X.img;
        }
        Complex addition(Complex X)
        {
            Complex T;
            T.real = this->real-X.real; 
            T.img = this->img+X.img;
            return T;
        }
        Complex subtraction(Complex X)
        {
            Complex T; 
            T.real = this->real-X.real;
            T.img = this->img-X.img;
            return T;
        }
        Complex multiplication(Complex X)
        {
            Complex T;
            T.real = (this->real * X.real)-(this->img * X.img);
            T.real = (this->real * X.img)+(this->img * X.real);
            return T;
        }
        void read()
        {
            cout<<"Enter real and imaginary parts of the complex number: "; 
            cin>>real>>img;
        }
        void display()
        {
            cout<<real;
            if(img>0)
            cout<<"+"<<img<<"i"<<endl;
            else if(img<0)
            cout<<img<<"i"<<endl;
        }
};

int main()
{
    Complex obj1, obj2, obj3;
    Complex obj4(-3, -7);
    Complex obj5(obj4);
    obj1.read();
    obj2.read();
    obj3=obj1.addition(obj2);
    cout<<"Addition Result"<<endl;
    obj3.display();
    cout<<endl;
    cout<<"obj5 has been created from obj4 using using copy constructor "<<endl;
    cout<<"Displaying obj5 "<<endl;
    obj5.display();
    return 0;
}
