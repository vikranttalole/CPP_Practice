#include <iostream>
using namespace std;
 class SortArray
 {
    int arr[10];

    public:
    void input()
    {                                                        
        cout<<"Enter 10 array elemnts :";
        for(int i =0; i<10; i++)
        {
            cin >>arr[i];
        }
    }

    void sortArray()
    {
        for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<=10; j++)
        {
            if(arr [i]> arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        } 
        }
    }

    void display()
    {
        cout<<"Sorted array is:\n";
        for(int i=0; i<10; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    };
    int main()
    {
        SortArray obj;
        obj.input();
        obj.sortArray();
        obj.display();
    };





//  Q.1. Accept 10 array elements from user. 
//  Sort the array in ascending order. 
//  Display sorted array.
//   Create  class SortArray. 
// And use functions for 
//    1. taking input from user 
//    2. sorting array
//     3. display that sorted array 