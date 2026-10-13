#include <iostream>
#include "BankAccount.hpp"

using namespace std;

int main() {

    BankAccount monCompte("FR123", 1000.0);

    monCompte.afficher();

    monCompte.deposer(500);
    monCompte.retirer(200);

    monCompte.afficher();

    return 0;
}



