#include <iostream>
#include "Book.h"
#include "Library.h"

int main() {
    Library maBibliotheque;

    // Création de livres
    Book b1("Le Petit Prince", "Antoine de Saint-Exupery", "978-2070612758", 1943);
    Book b2("1984", "George Orwell", "978-0451524935", 1949);

    // Ajout dans la bibliothèque
    maBibliotheque.ajouterLivre(b1);
    maBibliotheque.ajouterLivre(b2);

    // Test de doublon ISBN
    Book b3("Doublon Test", "Auteur X", "978-1984000000", 2020);
    maBibliotheque.ajouterLivre(b3);

    // Affichage du catalogue
    maBibliotheque.listerLivres();

    // Recherche par ISBN
    std::cout << "Recherche de l'ISBN 978-2070612758...\n";
    const Book* livreTrouve = maBibliotheque.trouverParISBN("978-2070612758");
    if (livreTrouve != nullptr) {
        std::cout << "Trouve : ";
        livreTrouve->afficher();
    } else {
        std::cout << "Livre non trouve.\n";
    }

    return 0;
}
