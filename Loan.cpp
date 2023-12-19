#include "Loan.h"

Loan::Loan() {
    day = 0;
    month = 0;
    year = 0;
    book_name = "";
    time = 0;
}

Loan::Loan(int DAY, int MONTH, int YEAR, std::string BOOK_NAME, int TIME)
{
    day = DAY;
    month = MONTH;
    year = YEAR;
    book_name = BOOK_NAME;
    time = TIME;
}

Loan::Loan(const Loan & other) {
    day = other.day;
    month = other.month;
    year = other.year;
    book_name = other.book_name;
    time = other.time;
}

void Loan::setDay(int day) {
    this->day = day;
}

void Loan::setMonth(int month) {
    this->month = month;
}

void Loan::setYear(int year) {
    this->year = year;
}

void Loan::setBookname(string book_name) {
    this->book_name = book_name;
}

void Loan::setTime(int time) {
    this->time = time;
}

string Loan::getFamilia() {}

int Loan::getDay() {
    return day;
}

int Loan::getMonth() {
    return month;
}

int Loan::getYear() {
    return year;
}

string Loan::getBookname() {
    return book_name;
}

int Loan::getTime() {
    return time;
}

