#include<iostream>
#include <algorithm>
using namespace std;

class LibraryItem {
public:
    virtual void display()=0;
    virtual~LibraryItem(){}
};
class Book : public LibraryItem {
public:
    const char* title, * author;
    int pages;
    Book(const char* t, const char* a, int p) {
        title = t;
        author = a;
        pages = p;

    }
    void display() override {
        cout << " Book " << title << " pages : " << pages << endl;
    }
};

class Newspaper : public LibraryItem {
public:
    const char* name, * date, * edition;
    Newspaper(const  char* n, const char* d, const char* e) {
        name = n;
        date = d;
        edition = e;
    }
    void display() override {
        cout << " NEWS " << name << " Eddition : " << edition << endl;
    }
};
class Library {
    Book* books[5];
    Newspaper* news[5];
    int count_b = 0, count_n = 0;
public:
    void addBook(Book& b) {
        books[count_b++] = &b;
    }
    void addnewspaper(Newspaper& n) {
        news[count_n++] = &n;
    }
    void displayColl() {
        for (int i = 0; i < count_b; i++)
        {
            books[i]->display();
        }for (int i = 0; i < count_n; i++)
        {
            news[i]->display();
        }
    }
    void Book_sort() {
        for (int i = 0; i < count_b - 1; i++)
        {
            for (int j = 0; j < count_b - 1; j++)
            {
                if (books[j]->pages > books[j + 1]->pages)
                {
                    swap(books[j], books[j + 1]);
                }

            }
        }
    }
    Book* search(const char* t) {
        for (int i = 0; i < count_b; i++)
        {
            if (books[i]->title == t)
            {
                return books[i];
            }
        }
        return nullptr;
    }
};
int main() {
    Book b1("catcher", "salinger", 277);
    Book b2("Mockingbird", "Lee", 324);
    Newspaper n1("Post ", "2026", "evening");
    Newspaper n2("NEW YORK TIMES ", "2026", "fortnightly");
    Library lib;
    lib.addnewspaper(n1);
    lib.addnewspaper(n2);
    lib.addBook(b1);
    lib.addBook(b2);

    cout << "Before Sorting" << endl;
    lib.displayColl();


    lib.Book_sort();
    cout << "after sorting " << endl;
    lib.displayColl();
    return 0;
}