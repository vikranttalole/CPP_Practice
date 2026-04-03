#include <iostream>
using namespace std;

class Pattern
{
    int n;

public:

    void input()
    {
        cout << "Enter value of n: ";
        cin >> n;
    }

   
    void printPattern()
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                
                if(i == 1 || i == n || j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << "  "; // space inside
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Pattern obj;

    obj.input();
    obj.printPattern();

    return 0;
}