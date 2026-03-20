#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for (i=1; i<=6; i++)
    {
        for(j=i-1; j>=1; j--)
        {
          cout<<j%2;     
        }
       cout<<endl;
    }
    
    return 0;
};

//  Q.2. Print Pattern
// 1
// 01 
// 101 
// 0101 
// 10101 