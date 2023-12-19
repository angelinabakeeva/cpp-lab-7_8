#ifndef CPP_LAB_7_8_USER_H
#define CPP_LAB_7_8_USER_H
#include <iostream>
#include <cstring>
#include "Book.h"

class User{
public:
    User();
    User(std::string familia, std::string imya, std::string otch, int age, std::string subscription, int number);
    User(const User &);
    ~User() = default;

    void setFamilia(std::string familia);
    void setImya(std::string imya);
    void setOtch(std::string otch);
    void setAge(int age);
    void setSub(std::string subscription);
    void setNumber(int number);

    std::string getFamilia();
    std::string getImya();
    std::string getOtch();
    int getAge();
    std::string getSub();
    int getNumber();

    virtual double get_sub_price() {};
    virtual void to_take(const Book &boo) {};

protected:
    std::string familia;
    std::string imya;
    std::string otch;
    int age;
    std::string subscription;
    int number;
    int pay;
};

#endif //CPP_LAB_7_8_USER_H
