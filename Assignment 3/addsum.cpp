#include <iostream>
using namespace std;

void add(int a=10, int b=20);

int main()
{
 add();
 add(50);
 add(40,60);
};
void add(int a,int b)
{
    cout<<a+b<<endl;
}

// Q.
// Write a function to calculate the sum of two numbers using default arguments.

// Example

// add(int a=10, int b=20)

// Call function with :

// add()
// add(50)
// add(10,20)
