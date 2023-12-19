#ifndef CPP_LAB_7_8_LIBRARY_H
#define CPP_LAB_7_8_LIBRARY_H
#include "Book.h"

class Library {
public:
    Library();
    Library(const Library&);
    ~Library();

    void addBook(const Book &book);
    void displayBooks();

    Book search_book_by_author(std::string author) {
        Book *found_books = new Book[size];
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (books[i].author == author) {
                found_books[count++] = books[i];
            }
        }
        return *found_books;
    }

private:
    Book *books;
    int size;
    int capacity;


    void expandCapacity();
};

Library::Library() {
    size = 0;
    capacity = int(INT_MAX / 10000);
    books = new Book[capacity];
}

Library::Library(const Library &other) {
    size = other.size;
    capacity = other.capacity;
    books = new Book[capacity];
    for (int i = 0; i < size; i++) {
        books[i] = other.books[i];
    }
}

Library::~Library() {
    delete[] books;
}

void Library::addBook(const Book &book) {
    if (size == capacity) {
        expandCapacity();
    }
    books[size] = book;
    size++;
}

void Library::displayBooks() {
    for (int i = 0; i < size; i++) {
        std::cout << "Author: " << books[i].getAuthor() << ", Name: " << books[i].getName() << ", Genre: "
                  << books[i].getGenre() << ", Year: " << books[i].getYear() << ", Status: " << books[i].getStatus()
                  << std::endl;
    }
}

void Library::expandCapacity() {
    capacity *= 2;
    Book *newBooks = new Book[capacity];
    for (int i = 0; i < size; i++) {
        newBooks[i] = books[i];
    }
    delete[] books;
    books = newBooks;
}


#endif //CPP_LAB_7_8_LIBRARY_H
