// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    void accept()
    {
        cout<<"\n accept value for real and imaginary \n";
        cin>>real>>img;
    }
    void display()
    {
        cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
    }
    void setReal(int r)
    {
        cout<<"setter function is called \n";
        real=r;
    }
    int getReal()
    {
        return real;
    }

};
int main(){
    Complex c1;
    cout<<"size of c1 is "<<"size of (c1)";
    c1.accept();
    c1.display();
    c1.setReal(5);
    c1.display();
    int r=c1.getReal();
    cout<<"value of real is "<<r<<endl;
    return 0;

}