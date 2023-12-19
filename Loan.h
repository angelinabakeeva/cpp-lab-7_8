#ifndef CPP_LAB_7_8_LOAN_H
#define CPP_LAB_7_8_LOAN_H
#include <iostream>

class Loan{
public:
    Loan();
    Loan(int day, int month, int year, std::string book_name, int time);
    Loan(const Loan &);
    ~Loan() = default;

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    void setBookname(std::string book_name);
    void setTime(int time);

    std::string getFamilia();
    int getDay();
    int getMonth();
    int getYear();
    std::string getBookname();
    int getTime();

protected:
    int day;
    int month;
    int year;
    std::string book_name;
    int time;
};

#endif //CPP_LAB_7_8_LOAN_H
