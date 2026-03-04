#include <iostream>
using namespace std;
class employee
{

    int empid;
    string name;
    int salary;
    static int totalemployees;
    string companyname;
    public:

employee()
{
    empid=0;
    name="";
    salary=0;
    totalemployees=0;
    companyname="";

}
employee(int id,string n,int s,string cname)
{
empid=id;
name=n;
salary=s;
companyname=cname;
}
void display()
{
    cout<<"Employee id is "<<empid<<endl;
    cout<<"Employee name is "<<name<<endl;
    cout<<"Employee salary is "<<salary<<endl;
    cout<<"Company name is "<<companyname<<endl;
};
int main()
{
    employee e1(101,"Kamlesh",50000,"TCS");
    e1.display();
    employee e2(102,"Rohit",60000,"Infosys");
    e2.display();
    employee e3(103,"Suresh",55000,"Wipro");
    e3.display();
    employee e4(104,"Ramesh",58000,"HCL");
    e4.display();
    employee e5(105,"Mahesh",62000,"Tech Mahindra");
    e5.display();
    return 0;
}
};
