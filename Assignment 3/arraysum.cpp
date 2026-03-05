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