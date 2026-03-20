#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for(i = 1; i <= 6; i++)
    {
        for(j = i-1; j >= 0; j--)
        {
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}