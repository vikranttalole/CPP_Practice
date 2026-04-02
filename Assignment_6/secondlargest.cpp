
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int n = 5;

    int largest = arr[0];
    int secondLargest = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest = " << secondLargest;

    return 0;
}