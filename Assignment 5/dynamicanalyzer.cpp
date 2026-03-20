// Q.1. Create a class Analyzer that stores numbers dynamically.
// Requirements:
// Accept number of elements N.
// Dynamically allocate array.
// Accept numbers.
// Find and print:
// Maximum number
// Minimum number
// Average value

#include <iostream>
using namespace std;

class Analyzer
{
    int *arr, n;

public:
    // function to accept size and allocate memory
    void acceptSize()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        arr = new int[n];   // dynamic allocation
    }

    // function to accept elements
    void acceptData()
    {
        cout << "Enter " << n << " numbers:\n";
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    // function to find max
    void findMax()
    {
        int max = arr[0];
        for(int i = 1; i < n; i++)
        {
            if(arr[i] > max)
                max = arr[i];
        }
        cout << "Maximum: " << max << endl;
    }

    // function to find min
    void findMin()
    {
        int min = arr[0];
        for(int i = 1; i < n; i++)
        {
            if(arr[i] < min)
                min = arr[i];
        }
        cout << "Minimum: " << min << endl;
    }

    // function to find average
    void findAverage()
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        float avg = (float)sum / n;
        cout << "Average: " << avg << endl;
    }

    // destructor to free memory
    ~Analyzer()
    {
        delete[] arr;
    }
};

int main()
{
    Analyzer obj;

    obj.acceptSize();
    obj.acceptData();
    obj.findMax();
    obj.findMin();
    obj.findAverage();

    return 0;
}