#include "Book.h"

Book::Book() {
    author = "";
    name = "";
    genre = "";
    year = 0;
    status = "Free";
}

Book::Book(std::string AUTHOR, std::string NAME, std::string GENRE, int YEAR, std::string STATUS)
{
    author = AUTHOR;
    name = NAME;
    genre = GENRE;
    year = YEAR;
    status = STATUS;
}

Book::Book(const Book & other) {
    author = other.author;
    name = other.name;
    genre = other.genre;
    year = other.year;
    status = other.status;
}

void Book::setAuthor(std::string author) {
    this->author = author;
}

void Book::setName(std::string name) {
    this->name = name;
}

void Book::setGenre(std::string genre) {
    this->genre = genre;
}

void Book::setYear(int year) {
    this->year = year;
}

void Book::setStatus(std::string status) {
    this->status = status;
}

std::string Book::getAuthor() {
    return author;
}

std::string Book::getName() {
    return name;
}

std::string Book::getGenre() {
    return genre;
}

int Book::getYear() {
    return year;
}

std::string Book::getStatus() {
    return status;
}