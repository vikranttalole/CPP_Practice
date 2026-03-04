#include <iostream>
using namespace std;

class myDate
{
    int day, month, year;

public:
    static int count;

    myDate()
    {
        cout << "no args constructor is called\n";
        day = 27;
        month = 4;
        year = 2028;
        count++;
    }

    myDate(int d, int m, int y)
    {
        cout << "parameterized constructor is called\n";
        day = d;
        month = m;
        year = y;
        count++;
    }

    void display() const
    {
        cout << "date is " << day << "/" << month << "/" << year << endl;
    }
};

int myDate::count = 0;

int main()
{
    myDate d1;
    cout << "number of objects created is " << myDate::count << endl;

    myDate d2(27, 8, 2526);
    cout << "number of objects created is " << myDate::count << endl;

    
    cout << "number of objects created is " << myDate::count << endl;
}