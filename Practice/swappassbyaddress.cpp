#include <iostream>
using namespace std;

void swap(int *x, int *y);   // function declaration

int main()
{
    int a, b;

    cout << "Enter value of a and b: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << " b = " << b << endl;

    swap(&a, &b);   // passing address

    cout << "After swapping: a = " << a << " b = " << b << endl;

    return 0;
}

// function definition
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}