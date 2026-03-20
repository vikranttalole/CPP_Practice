#include <iostream>
using namespace std;
class Area
{
    public:
    int area(int side)
    {
        return side*side;
    }
    int area(int length,int breadth)
    {
        return length*breadth;
    }
};
int main()
{
    Area obj1;
    cout<<"Area of square : "<<obj1.area(50)<<endl;
    cout<<"Area of Rectangle : "<<obj1.area(50,15)<<endl;
}
