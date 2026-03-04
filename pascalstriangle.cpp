#include <iostream>
using namespace std;

void printPascal(int n)
{
    for (int i = 0; i < n; i++) 
    {
        int val = 1;
        for (int j = 0; j <= i; j++)
         {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Number of rows: ";
    if (!(cin >> rows) || rows < 0) return 1;
    printPascal(rows);
    return 0;
}