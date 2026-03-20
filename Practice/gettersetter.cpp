// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class MyDate
{
    private:
    int day, month, year;
    public:
    void accept(){
        cout <<"\n Accept Day Month Year\n";
        cin>>day>>month>>year;
    }
    void display(){
        cout <<"date is"<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void SetDay(int d){
        cout<<"setter function is called \n";
        day = d;
    }
    void setMonth(int m)
    {
        cout<<"Setter function for month is called \n";
        month=m;
    }
    void setYear(int y)
    {
        cout<<"Setter function for year is called \n";
        year=y;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }
    int getDay()
    {
        return day;
    }

};
int main()
{
    MyDate d1;
    cout<<"Size of object d1 is \n"<<"size of (d1)";
    d1.accept();
    d1.display();
    d1.SetDay(27);
    d1.display();
    d1.setMonth(3);
    d1.display();
    d1.setYear(2020);
    d1.display();
    int d=d1.getDay();
    cout<<"current value for day is "<<d<<endl;
    int m=d1.getMonth();
    cout<<"current value for month is "<<m<<endl;
    int y=d1.getYear();
    cout<<"current value for year is "<<y<<endl;
    return 0;

}