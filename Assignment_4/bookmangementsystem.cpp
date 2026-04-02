#include <iostream>
using namespace std;
class Book
{
    int bookid;
    string title;
    string author;
    float price;
public:
void input()
{

    cout<<"Enter book id : ";
    cin>>bookid;

    cout<<"Enter book title :";
    cin>>title;

    cout<<"Enter Author Name : ";
    cin>>author;

    cout<<"Enter price of book : ";
    cin>>price;
}

void  display()
{
    cout<<"Book id is : "<<bookid<<endl;
    cout<<"Book title is  :"<<title<<endl;
    cout<<"Book author name is :"<<author<<endl;
    cout<<"Book price is : "<<price<<endl;
}
};
int main()
{
    Book b[4];   // Create 4 book objects

    cout << "Enter details of 4 books";

    for(int i = 0; i < 4; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        b[i].input();
    }

    cout << "Displaying Book Information";

    for(int i = 0; i < 4; i++)
    {
        b[i].display();
    }

    return 0;
}


// Q.3. Book Management System 
// Create a class Book. 
// Data Members
//  1.bookId 
//  2.title 
//  3.author 
//  4.price 
 
//  Member Functions 
//  input()
//  display() 

//  Requirements 
//   Create 4 book objects take input from user.
//  Display information of all books. 