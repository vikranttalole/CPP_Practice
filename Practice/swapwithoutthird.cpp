#include <iostream>
using namespace std;
// int main()
// {
//     int a=10;
//     int b=20;
//     cout<<"Before swapping elements are :"<<a<<" "<<b<<endl;

//     swap(a,b);
//     {
//         cout<<"After swapping elements are :"<<a<<" "<<b<<endl;
//     }

// };

int main()
{
    int a =10;
    int b =20;

    cout<<"Before swapping the elements are :"<<a<<" "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swapping the elemnts are :"<<a<<" "<<b<<endl;
};
