#include "BankAccount.hpp"


BankAccount::BankAccount() {
    m_numero = "0000";
    m_solde = 0.0;
}


BankAccount::BankAccount(string numero, double soldeInitial) {
    m_numero = numero;
    m_solde = soldeInitial;
}

void BankAccount::deposer(double montant) {
    if(montant > 0) {
        m_solde = m_solde + montant;
        cout << "Depot réussi !" << endl;
    } else {
        cout << "Erreur montant" << endl;
    }
}

bool BankAccount::retirer(double montant) {
    if(montant <= m_solde) {
        m_solde -= montant;
        return true;
    } else {
        return false;
    }
}

void BankAccount::afficher() const {
    cout << "Compte numero: " << m_numero << " solde: " << m_solde << endl;
}

string BankAccount::getNumero() {
    return m_numero;
}

double BankAccount::getSolde() {
    return m_solde;
}



