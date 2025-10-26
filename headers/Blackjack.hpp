#ifndef BLACKJACK_HPP
#define BLACKJACK_HPP

#include "Carte.hpp"
#include "Joueur.hpp"
#include <string>
#include <vector>
using namespace std;

class Blackjack{
    private :
        vector<Carte> deck;
        Joueur  joueur;
        Joueur banque;
        bool partieterminee;

    public :
        Blackjack();
        ~Blackjack();

        void initialiserDeck();
        void melangerDeck();
        Carte piocherCarte();
        void distribuerCarte();
        void tirerJoueur();
        void tourBanque();
        void afficherEtat();
        void afficherEtatFinal();
        string resultat();
        bool estTerminee();

};

#endif