#include<iostream>
#include<iomanip>

using namespace std;

int callbyval(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int callbyref(int *a, int *b)
{
	int sum;
	sum = *a + *b;
	return sum;
}

int main()
{
	int a,b,callval,callref;
	cout<<"Enter two integers: "; cin>>a>>b;
	callval = callbyval(a,b);
	callref = callbyref(&a,&b);
	cout<<"Sum by Value: " << callval << endl;
	cout<<"Sum by Reference: " << callref << endl;
	return 0;
}
