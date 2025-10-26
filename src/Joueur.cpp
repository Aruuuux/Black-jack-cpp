#include "../headers/Joueur.hpp"
#include <iostream>
using namespace std;

Joueur::Joueur(string nom){};
Joueur::~Joueur(){};

void Joueur::tirerCarte(Carte c){
    main.push_back(c);
}

int Joueur::calculerScore(){
    int total = 0;
    int nbAs = 0;

    for(Carte &c: main){
        int points = c.getPoints();
        total += points;
        if(c.getValeur() == "AS") nbAs++;
    }

    //On doit ajuster si un As compte pour 11 (sans burst)
    while(total > 21 && nbAs > 0){
        total -= 10;
        nbAs--;
    }

    return total;
}

bool Joueur::estbust(){
    return calculerScore() > 21;
}

void Joueur::afficherMain(bool cacherPremiere){
    cout << nom << ":";
    for(size_t i = 0; i<main.size();i++){
        if(cacherPremiere && i == 0 ){
            cout << "[?]";
        }
        else 
            cout << main[i].toString() << " ";
    }
    cout << "(Score : " << calculerScore() << ")" << endl;
}

void Joueur::reset(){
    main.clear();
}
