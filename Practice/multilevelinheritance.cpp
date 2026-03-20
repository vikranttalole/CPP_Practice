#include <iostream>
using namespace std;

class Employee
{
    int id;

    public:
    Employee(){
        cout<<"No arugument constructor employee is called\n";
        id=0;
    }
    Employee(int id)
        {
           cout<<"Para arug constructor employee is called\n";
           this->id =id;
        }
 void display()
    {
        cout<<"id of employee is :" <<id <<endl;
    }
};
int main()
{
    Employee s1(101);
    s1.display();
    return 0;
}