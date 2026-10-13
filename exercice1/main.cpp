#include <iostream>


#include <iostream>
#include "BankAccount .h"


int main() {
    BankAccount compte1;
    BankAccount compte2("C001", 1000.0);

    compte2.deposer(500.0);
    compte2.retirer(200.0);

    compte2.afficher();

    return 0;
}


