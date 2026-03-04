#include <iostream>
using namespace std;
class item
{
    public:
    static int x;
    int number;
    public:
    void getdata(int a)
    {
        number=a;
        number++;
        x++;
    }
    void getcount()
    {
        x=10;
        cout<<"Value is "<<x<<endl;
    }
    void getcount_1()
    {
        x++;
        cout<<"Value is "<<number<<endl;
        cout<<"value is "<<x<<endl;
    }
};
int number = 10;
int item::x;
int main()
{
    item a;
    a.getcount();
    a.getdata(100);
    a.getcount_1();
    cout<<number<<endl;
    cout<<a.number;
}