#include <bits/stdc++.h>
#include "Book.h"
#include "User.h"
#include "Inheritate.h"
#include "Library.h"
#include <fstream>

using namespace std;

int main(){
    int k;
    Library First;
    User New;
    cout << "Welcome to the library! What will we do?" << endl;
    cout << "1) Bring book back to library (add book)" << endl;
    cout << "2) Take book from library" << endl;
    cout << "3) Add new member" << endl;
    cout << "4) Show the library" << endl;
    cout << "5) Searching by author" << endl;
    cout << "6) Information about subscription" << endl;
    cout << "7) Extra...." << endl;
    cin >> k;
    switch(k){
        case  1:
        {
            Book book1;
            string vvod1;
            int y;
            cout << "Print the author:" << endl;
            cin >> vvod1;
            book1.setAuthor(vvod1);
            cout << "Print the name of book:" << endl;
            cin >> vvod1;
            book1.setName(vvod1);
            cout << "Print the genre:" << endl;
            cin >> vvod1;
            book1.setGenre(vvod1);
            cout << "Print the year:" << endl;
            cin >> y;
            book1.setYear(y);
            book1.setStatus("Free");
            First.addBook(book1);
        }
        case  2:
        {
            Book book1;
            string vvod1;
            int y;
            cout << "Print the author:" << endl;
            cin >> vvod1;
            book1.setAuthor(vvod1);
            cout << "Print the name of book:" << endl;
            cin >> vvod1;
            book1.setName(vvod1);
            cout << "Print the genre:" << endl;
            cin >> vvod1;
            book1.setGenre(vvod1);
            cout << "Print the year:" << endl;
            cin >> y;
            book1.setYear(y);
            book1.setStatus("Not free");
            First.addBook(book1);
        }
        case 3:
        {
            int con;
            string vvod2;
            cout << "Print surname:" << endl;
            cin >> vvod2;
            New.setFamilia(vvod2);
            cout << "Print name:" << endl;
            cin >> vvod2;
            New.setImya(vvod2);
            cout << "Print second name:" << endl;
            cin >> vvod2;
            New.setOtch(vvod2);
            cout << "Print age:" << endl;
            cin >> con;
            New.setAge(con);
            cout << "Print subscription availability:" << endl;
            cin >> vvod2;
            New.setSub(vvod2);
            cout << "Print number of having books:" << endl;
            cin >> con;
            New.setNumber(con);
        }
        case 4:
        {
            First.displayBooks();
        }
        case 5:
        {
            string vvod;
            cout << "Print the author:" << endl;
            cin >> vvod;
            First.search_book_by_author(vvod);
        }
        case 6:
        {
            cout << "Price of subscription:";
            New.get_sub_price();
        }
        case 7:
        {
            ofstream outFile("book.txt"); // Открытие файла для записи
            if (!outFile) {
                cerr << "Ошибка открытия файла" << std::endl;
                return 1;
            }
            Book book;
            cin >> book;
            outFile << book;
            outFile.close();

            ifstream inFile("book.txt"); // Открытие файла для чтения
            if (!inFile) {
                cerr << "Ошибка открытия файла" << endl;
                return 1;
            }

            Book bookFromFile;
            inFile >> bookFromFile;
            cout << bookFromFile;
            inFile.close();
        }
    }
    return 0;
};