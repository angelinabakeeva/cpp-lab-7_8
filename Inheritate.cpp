#include "Inheritate.h"

Member::Member() {
    familia = "";
    imya = "";
    otch = "";
    subscription = "";
}

Member::Member(std::string FAMILIA, std::string IMYA, std::string OTCH, std::string SUBSCRIPTION)
{
    familia = FAMILIA;
    imya = IMYA;
    otch = OTCH;
    subscription = SUBSCRIPTION;
}

Member::Member(const Member & other) {
    familia = other.familia;
    imya = other.imya;
    otch = other.otch;
    subscription = other.subscription;
}


/*---------------------------------------------------------------------------------------------------------------*/

Librarian::Librarian() {
    familia = "";
    imya = "";
    otch = "";
    subscription = "";
    stage = 0;
}

Librarian::Librarian(std::string FAMILIA, std::string IMYA, std::string OTCH, std::string SUBSCRIPTION, int STAGE)
{
    familia = FAMILIA;
    imya = IMYA;
    otch = OTCH;
    subscription = SUBSCRIPTION;
    stage = STAGE;
}

Librarian::Librarian(const Librarian & other) {
    familia = other.familia;
    imya = other.imya;
    otch = other.otch;
    subscription = other.subscription;
    stage = other.stage;
}

/*-----------------------------------------------------------------------------------------------------*/
double Member::get_sub_price()
{
    double price = this->pay;
    if (this->getAge() < 12 || this->getAge() > 50)
        return price * 0.5;
    else if (this->getAge() < 24)
        return price * 0.7;
    else
        return price * 1.1;

}

void Member::to_take(Book &boo)
{
    if (b.getStatus() == "Free")
    {
        if (this->getNumber() > 5)
        {
            if (this->getSub() == "Subscribded")
            {
                b.setStatus("Not free");
                this->setNumber(this->getNumber() + 1);
            }
            else
                cout << "You have not got subscription, so return previous books!";
        }
        else {
            b.setStatus("Not free");
            this->setNumber(this->getNumber() + 1);
        }
    }
    else
        cout << "You have got too many books, so return it!";
}

/*---------------------------------------------------------------------------------------------*/
double Librarian::get_sub_price()
{
    double price = this->pay;
    return price * (1 - (this->stage)/100);

}

void Member::to_take(Book &boo)
{
    if (b.getStatus() == "Free")
    {
        if (this->getNumber() > 7)
        {
            if (this->getSub() == "Subscribded")
            {
                b.setStatus("Not free");
                this->setNumber(this->getNumber() + 1);
            }
            else
                cout << "You have not got subscription, so return previous books!";
        }
        else {
            b.setStatus("Not free");
            this->setNumber(this->getNumber() + 1);
        }
    }
    else
        cout << "You have got too many books, so return it!";
}