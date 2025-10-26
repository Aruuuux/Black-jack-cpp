#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include "Blackjack.hpp"
#include <string>
#include <vector>
using namespace std;

class Joueur{
    private :
        string nom;
        vector<Carte> main;
    public :
        Joueur(string nom);
        ~Joueur();

        void tirerCarte(Carte c);
        int calculerScore();
        bool estbust();
        void afficherMain(bool cacherPremiere = false );
        void reset();
};

#endif