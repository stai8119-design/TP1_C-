
#ifndef BANKACCOUNT_HPP_
#define BANKACCOUNT_HPP_

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string m_numero;
    double m_solde;

public:

    BankAccount();
    BankAccount(string numero, double soldeInitial);

    void deposer(double montant);
    bool retirer(double montant);
    void afficher() const;


    string getNumero();
    double getSolde();
};



#endif
