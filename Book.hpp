
#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string m_titre;
    string m_auteur;
    string m_isbn;
    int m_annee;

public:
    Book();
    Book(string titre, string auteur, string isbn, int annee);

    string getTitre();
    string getAuteur();
    string getISBN();
    int getAnnee();

    void afficher();
};



#endif
