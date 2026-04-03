#include <iostream>
using namespace std;

class DecimalToBinary
{
    int num;
    int binary[32];  // to store binary digits
    int i;

public:

    // Function to accept number
    void input()
    {
        cout << "Enter a decimal number: ";
        cin >> num;
    }

    // Function to convert decimal to binary
    void convert()
    {
        int n = num;
        i = 0;

        while(n > 0)
        {
            binary[i] = n % 2;   // store remainder
            n = n / 2;           // divide by 2
            i++;
        }
    }

    // Function to display binary number
    void display()
    {
        cout << "Binary equivalent: ";
        for(int j = i - 1; j >= 0; j--)
        {
            cout << binary[j];
        }
    }
};

int main()
{
    DecimalToBinary obj;

    obj.input();
    obj.convert();
    obj.display();

    return 0;
}