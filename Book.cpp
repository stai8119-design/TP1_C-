
#include "Book.hpp"


Book::Book() {
    m_titre = "Inconnu";
    m_auteur = "Inconnu";
    m_isbn = "";
    m_annee = 0;
}


Book::Book(string titre, string auteur, string isbn, int annee) {
    m_titre = titre;
    m_auteur = auteur;
    m_isbn = isbn;
    m_annee = annee;
}

string Book::getTitre() { return m_titre; }
string Book::getAuteur() { return m_auteur; }
string Book::getISBN() { return m_isbn; }
int Book::getAnnee() { return m_annee; }

void Book::afficher() {
    cout << "Titre: " << m_titre << " | Auteur: " << m_auteur
         << " | ISBN: " << m_isbn << " | Annee: " << m_annee << endl;
}



