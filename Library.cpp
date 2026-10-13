#include "Library.hpp"

void Library::ajouterLivre(Book livre) {

    if (trouverParISBN(livre.getISBN()) != NULL) {
        cout << "Erreur: Ce livre existe deja!" << endl;
        return;
    }
    m_livres.push_back(livre);
    cout << "Livre ajoute!" << endl;
}

Book* Library::trouverParISBN(string isbn) {
    for (int i = 0; i < m_livres.size(); i++) {
        if (m_livres[i].getISBN() == isbn) {
            return &m_livres[i];
        }
    }
    return NULL;
}

void Library::listerLivres() {
    if (m_livres.empty()) {
        cout << "La bibliotheque est vide." << endl;
        return;
    }

    cout << "Liste des livres" << endl;
    for (int i = 0; i < m_livres.size(); i++) {
        m_livres[i].afficher();
    }
}



