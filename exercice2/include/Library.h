#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"

class Library {
public:
    // Gestion du catalogue
    void ajouterLivre(const Book& livre);
    const Book* trouverParISBN(const std::string& isbn) const;
    void listerLivres() const;

private:
    std::vector<Book> m_livres;
};

#endif // LIBRARY_H
