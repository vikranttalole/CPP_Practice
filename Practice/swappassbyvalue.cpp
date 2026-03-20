#include<iostream>
using namespace std;
int swap(int,int);
int main()
{
	int a,b,z;
	cout<<"enter value of a and b\n";
	cin>>a>>b;

	cout<<"before swapping value of a and b\n";
	cout<<"value of a = "<<a<<"  "<<"value of b = "<<b<<endl; 

	z=swap(a,b);                                                                //function calling
	cout<<"value of x is  "<<z<<endl;
    // cout<<"value of y is  "<<x<<endl;
	cout<<"after calling swap () value of a and b\n";
	cout<<"value of a = "<<b<<"  "<<"value of b = "<<a<<endl;
}
int swap(int p,int q)
{
	int x=100,y=50;
	int temp;                 //temprory value store 
	temp=p;
	p=q;
	q=temp;
    cout<<"value of y is  "<<x<<endl;
	cout<<"after swapping value of p and q\n";
	cout<<"value of p = "<<p<<"  "<<"value of q = "<<q<<endl;
	return x,y;
}
