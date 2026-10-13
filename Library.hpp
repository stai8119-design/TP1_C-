

#ifndef LIBRARY_HPP_
#define LIBRARY_HPP_

#include <vector>
#include "Book.hpp"

using namespace std;

class Library {
private:
    vector<Book> m_livres;

public:
    void ajouterLivre(Book livre);
    Book* trouverParISBN(string isbn);
    void listerLivres();
};



#endif
