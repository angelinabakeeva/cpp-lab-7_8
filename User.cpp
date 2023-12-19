#include "User.h"

User::User() {
    familia = "";
    imya = "";
    otch = "";
    age = 0;
    subscription = "Not subscribded";
    number = 0;
}

User::User(std::string FAMILIA, std::string IMYA, std::string OTCH, int AGE, std::string SUBSCRIPTION, int NUMBER)
{
    familia = FAMILIA;
    imya = IMYA;
    otch = OTCH;
    age = AGE;
    subscription = SUBSCRIPTION;
    number = NUMBER;
}

User::User(const User & other) {
    familia = other.familia;
    imya = other.imya;
    otch = other.otch;
    age = other.age;
    subscription = other.subscription;
    number = other.number;
}

std::ostream& operator<<(std::ostream& os, const User& user)
{
    os << "Surname: " << user.familia << std::endl;
    os << "Name: " << user.imya << std::endl;
    os << "Second name: " << user.otch << std::endl;
    os << "Age: " << user.age << std::endl;
    os << "Subscription: " << user.subscription << std::endl;
    os << "Number of books: " << user.number << std::endl;
    return os;
}

void User::setFamilia(std::string familia) {
    this->familia = familia;
}

void User::setImya(std::string imya) {
    this->imya = imya;
}

void User::setOtch(std::string otch) {
    this->otch = otch;
}

void User::setAge(int age) {
    this->age = age;
}

void User::setSub(std::string subscription) {
    this->subscription = subscription;
}

void User::setNumber(int number) {
    this->number = number;
}

std::string User::getFamilia() {
    return familia;
}

std::string User::getImya() {
    return imya;
}

std::string User::getOtch() () {
    return otch;
}

int User::getAge() {
    return age;
}

std::string User::getSub() {
    return subscription;
}

int User::getNumber() {
    return number;
}