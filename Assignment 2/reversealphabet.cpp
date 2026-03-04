#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)   // rows
    {
        for(j = 1; j <= i; j++)   // columns
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }

    return 0;
}