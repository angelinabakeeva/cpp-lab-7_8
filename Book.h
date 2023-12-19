#ifndef CPP_LAB_7_8_BOOK_H
#define CPP_LAB_7_8_BOOK_H
#include <iostream>

class Book{
public:
    Book();
    Book(std::string author, std::string name, std::string genre, int year, std::string status);
    Book(const Book &);
    ~Book() = default;

    void setAuthor(std::string author);
    void setName(std::string name);
    void setGenre(std::string genre);
    void setYear(int year);
    void setStatus(std::string status);

    std::string getAuthor();
    std::string getName();
    std::string getGenre();
    int getYear();
    std::string getStatus();

    bool operator==(const Book& b) const {
        return author == b.author && name == b.name && genre == b.genre && year == b.year && status == b.status;
    }

    bool Search(std::string searchName) {
        return this->name == searchName;
    }

    bool Search(int searchYear) {
        return this->year == searchYear;
    }
    friend std::ostream& operator<<(std::ostream& os, const Book& b) {
        os << "Author: " << b.author << std::endl;
        os << "Name: " << b.name << std::endl;
        os << "Genre: " << b.genre << std::endl;
        os << "Year: " << b.year << std::endl;
        os << "Status: " << b.status << std::endl;
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Book& b) {
        std::cout << "Enter author: ";
        std::getline(is, b.author);
        std::cout << "Enter name: ";
        std::getline(is, b.name);
        std::cout << "Enter genre: ";
        std::getline(is, b.genre);
        std::cout << "Enter year: ";
        is >> b.year;
        std::cout << "Enter status: ";
        std::getline(is, b.status);
        return is;
    }

protected:
    std::string author;
    std::string name;
    std::string genre;
    int year;
    std::string status;
};


#endif //CPP_LAB_7_8_BOOK_H
