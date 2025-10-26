#ifndef CARTE_HPP
#define CARTE_HPP

#include <string>
using namespace std;

class Carte{
    private :
        string valeur;
        string famille;
    public:
        Carte();
        Carte(string val, string fam);
        ~Carte();

        string getValeur() const;
        string getFamille() const;
        int getPoints() const;
        string toString() const;

};

#endif