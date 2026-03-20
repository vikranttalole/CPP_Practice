#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    double sal;
public:
    // no-argument constructor
    Employee() : id(0), sal(0.0) {}

    // parameterized constructor
    Employee(int i, double s) : id(i), sal(s) {}

    // static factory function acting like a "make" constructor
    static Employee makeEmployee(int i, double s) {
        return Employee(i, s);
    }

    // setters
    void setId(int i) { id = i; }
    void setSal(double s) { sal = s; }

    int getId() const { return id; }
    double getSal() const { return sal; }

    // display (const so it can be called on const objects)
    void display() const {
        cout << "Employee ID: " << id << "\n";
        cout << "Salary: " << sal << "\n";
    }
};

int main() {
    // using no-arg constructor and setters
    Employee e1;
    e1.display();
    e1.setId(100);
    e1.setSal(45000.50);
    cout << "After setting values for e1:\n";
    e1.display();

    // using parameterized constructor
    Employee e2(101, 55000.75);
    cout << "e2 (parameterized):\n";
    e2.display();

    // using factory "make" function
    Employee e3 = Employee::makeEmployee(102, 60000.00);
    cout << "e3 (from makeEmployee):\n";
    e3.display();

    // create a constant object
    const Employee ce(103, 70000.00);
    cout << "const Employee ce:\n";
    // allowed: call const methods like getters or display
    ce.display();
    cout << "ce.getId() = " << ce.getId() << "\n";
    cout << "ce.getSal() = " << ce.getSal() << "\n";

    // not allowed (will not compile): calling non-const setter on const object
    // ce.setSal(80000.0); // <-- error: cannot call non-const on const object

    return 0;
}
