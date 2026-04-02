#include <iostream>
using namespace std;
int main()
{
    int arr[5], sum=0;
 cout << ("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum=sum+arr[i];
    }
     cout<<"Total Sum is :"<<sum<<endl;
};

// Q.
// Write a program to find the sum of all elements of an array.

// Example
// Input: 1 2 3 4 5
// Output: Sum = 15