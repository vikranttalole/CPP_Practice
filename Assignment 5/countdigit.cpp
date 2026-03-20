#include <iostream>
using namespace std;
int main ()
{
    int num,count=0;
    cout<<"Enter a numbers : ";
    cin>>num;

    while(num>0){
    count++;
    num=num/10;
    
    }
    cout<<"Digit of entered numbers are : "<<count<<endl;
    return 0;

};
// Q.2. Count how many digits are present in the number. 
// Input: 12345 
// Output: Number of digits = 5 

// num % 10	Get last digit
// num / 10	Remove last digit

// #include <iostream>
// using namespace std;

// int main() {
//     int num, count = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     // Handle negative numbers
//     num = abs(num);

//     // Count digits
//     while (num > 0) {
//         count++;
//         num = num / 10;
//     }

//     cout << "Number of digits = " << count;

//     return 0;
// }