// Q.2. WAP to find Factorial of a Number. 
// Create class FindFactorial and functions to
// 1. Accept a number from user.
// 2. Calculate factorial using loop.
// 3. Display result.
#include <iostream>
using namespace std;
class Factorial
{
    int num;
    long long fact;

    public:
    void input()
    {
       cout<<"Enter number :";
       cin>>num;
    }
    void calculate()
    {
        fact=1;
        for (int i=1; i<=num; i++)
        {
            fact = fact *  i;
        }
    }
    void display()
    {
        cout<<"Factorial of num "<<num<<" "<<"is"<<fact;
    }
};
int main()
{
    Factorial obj;
    obj.input();
    obj.calculate();
    obj.display();
    return 0;
}
