
#include <iostream>
#include "Book.hpp"
#include "Library.hpp"

using namespace std;

int main() {
    Library maBiblio;

    Book b1("C++ Programming", "Stroustrup", "1234", 2020);
    Book b2("Python Basics", "Guido", "5678", 2018);

    maBiblio.ajouterLivre(b1);
    maBiblio.ajouterLivre(b2);

    maBiblio.listerLivres();

    Book* cherche = maBiblio.trouverParISBN("1234");
    if (cherche != NULL) {
        cout << "Livre trouve : ";
        cherche->afficher();
    } else {
        cout << "Livre non trouve." << endl;
    }

    return 0;
}

