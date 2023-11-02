#include <iostream>

using namespace std;

class Product
{

protected:
    string title;
    string author;
    string director;
    long long id;
    static int count;

public:
    Product(string ttl, string athr, string drctr, long long unique_id) : title(ttl), author(athr), director(drctr), id(unique_id)
    {
    }

    void ShowCount() const
    {
        cout << "Total Products created: " << count << endl;
    }

    virtual void displayInfo() const = 0;

    bool operator>(Product &p1)
    {
        if (this->id > p1.id)
            return true;
        else
            return false;
    }

    bool operator<(Product &p1)
    {
        if (this->id < p1.id)
            return true;
        else
            return false;
    }

    bool operator==(Product &p1)
    {
        if (this->id == p1.id)
            return true;
        else
            return false;
    }

    void operator=(Product &p1)
    {
        this->author = p1.author;
        this->director = p1.director;
        this->id = p1.id;
        this->title = p1.title;
    }

    Product(Product &p1)
    {
        this->author = p1.author;
        this->director = p1.director;
        this->id = p1.id;
        this->title = p1.title;
    }
};

class Book : public Product
{
public:
    Book(string ttl, string athr, long long unique_id) : Product(ttl, athr, "", unique_id)
    {
        ++count;
    }

    void displayInfo() const
    {
        cout << "Product Type: Book" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Unique Id: " << id << endl;
        cout << endl;
    }
};

class DVD : public Product
{
public:
    DVD(string ttl, string drctr, long long unique_id) : Product(ttl, "", drctr, unique_id)
    {
        ++count;
    }

    void displayInfo() const
    {
        cout << "Product Type: DVD" << endl;
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Unique Id: " << id << endl;
        cout << endl;
    }
};

int Product::count = 0;

int main()
{
    // initialize two dummy objects
    Book b1("Harry Potter", "JK Rowling", 1);
    b1.displayInfo();

    DVD d1("Avengers", "Russo Brothers", 2);
    d1.displayInfo();

    // test < operator
    if (b1 < d1)
        cout << "b1 is smaller than d1" << endl;

    else
        cout << "b1 is not smaller than d1" << endl;

    cout << endl;

    // test copy constructor
    Book b2(b1);
    b2.displayInfo();

    // test assignment operator
    DVD d2("Most Welcome 2", "Ananta Jalil", 3);
    d2.displayInfo();

    d2 = d1;
    d2.displayInfo();

    d2.ShowCount();

    // inventory system

    Product *p_array[5];
    int choice;
    string title, author, director;
    long long unique_id;

    for (int i = 0; i < 5; ++i)
    {
        cout << endl;
        cout << "Press 1 for book, 2 for DVD" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Title: ";
            cin >> title;

            cout << "Author: ";
            cin >> author;

            cout << "Unique ID: ";
            cin >> unique_id;

            p_array[i] = new Book(title, author, unique_id);
        }

        if (choice == 2)
        {
            cout << "Title: ";
            cin >> title;

            cout << "Director: ";
            cin >> director;

            cout << "Unique ID: ";
            cin >> unique_id;

            p_array[i] = new DVD(title, director, unique_id);
        }
    }

    cout << endl;
    cout << endl;
    cout << "Showing Details: " << endl;

    for (int i = 0; i < 5; ++i)
    {
        p_array[i]->displayInfo();
    }

    p_array[0]->ShowCount();
}