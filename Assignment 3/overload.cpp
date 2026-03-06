#include <iostream>
using namespace std;

int area (int side)
{
    cout<<"Area of square :"<<side*side<<endl;
}
int area (int length , int breadth)
{
    cout<<"Area of rectangle :"<<length*breadth<<endl;
}

int main()
{
    area(5);
    area(5,4);
    return 0;
    
}
