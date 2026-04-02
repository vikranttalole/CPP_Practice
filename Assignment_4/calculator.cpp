#include <iostream>
using namespace std;
class Calculator
{
    int num1,num2;
    public:

    void input()
    {
    cout<<"Enter the first number: ";
    cin >> num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    }

    void add()
    {
        cout<<"Additon is :"<<num1+num2<<endl;
    }
    void sub()
    {
        cout<<"Subtraction is :"<<num1-num2<<endl;
    }
    void multiply()
    {
        cout<<"Multiplication is :"<<num1*num2<<endl;
    }
    void divide ()
    {
        if (num2!=0)
        cout<<"Dividation is : "<<num1/num2<<endl;
        else
        cout<<"Divide by zero is not possible :"<<endl;
    }
    void square()
    {
        cout<<"Square of number num1 is :"<<num1*num1<<endl;
        cout<<"Square of number num2 is :"<<num2*num2<<endl;
    }  
};
int main()
{
    Calculator c;
    c.input();
    c.add();
    c.sub();
    c.multiply();
    c.divide();
    c.square();

    return 0;
}




// Q.4. Simple Calculator Using Class Create a class Calculator:
//  Data Members 
//  1.num1
// 2. num2
// Member Functions :
// 1. add() 
// 2.subtract()
// 3.multiply() 
// 4. divide() 
// 5. square() 
// Requirements :
//  Take input from user. 
//  Perform all operations using class functions. 