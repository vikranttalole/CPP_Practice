// #Q.5. Write a program to swap two numbers without using a third variable. 
#include <iostream>
using namespace std;
int main ()
{
    int a=10;
    int b=20;
    cout<<"Before swapping two numbers are : "<<a<<" "<<b<<endl;
    {
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping two numbers are :"<<a<<" "<<b<<endl;
    }

};
