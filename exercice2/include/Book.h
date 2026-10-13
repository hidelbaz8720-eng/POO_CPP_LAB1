#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
public:
    // Constructeurs
    Book();
    Book(const std::string& titre, const std::string& auteur, const std::string& isbn, int annee);

    // Getters / Accesseurs
    std::string getTitre() const;
    std::string getAuteur() const;
    std::string getISBN() const;
    int getAnnee() const;

    // Affichage
    void afficher() const;

private:
    std::string m_titre;
    std::string m_auteur;
    std::string m_isbn;
    int m_annee;
};

#endif // BOOK_H
