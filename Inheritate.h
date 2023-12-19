#ifndef CPP_LAB_7_8_INHERITATE_H
#define CPP_LAB_7_8_INHERITATE_H
#include "User.h"

class Member : public User {
private:
    int pay = 200;
    int number;
public:
    Member();
    Member(std::string familia, std::string imya, std::string otch, std::string subscription, int number);
    Member(const Member &);
    ~Member() = default;

    double get_sub_price() {};
    void to_take(Book &boo)
};

class Librarian : public User {
private:
    int pay = 100;
    int stage;
public:
    Librarian();
    Librarian(std::string familia, std::string imya, std::string otch, std::string subscription, int stage);
    Librarian(const Librarian &);
    ~Librarian() = default;

    double get_sub_price() {};
    void to_take(Book &boo)

};

#endif //CPP_LAB_7_8_INHERITATE_H
