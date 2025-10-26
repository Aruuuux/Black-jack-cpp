#include "../headers/Carte.hpp"
#include <iostream>
using namespace std;

Carte::Carte() {}
Carte::Carte(string val, string fam){
    valeur = val;
    famille = fam;
}
Carte::~Carte(){}

string Carte::getValeur() const{
    return valeur;
}

string Carte::getFamille() const{
    return famille;
}

string Carte::toString() const{
    return valeur + "de" + famille;
}

int Carte::getPoints() const{
    if (valeur == "As") return 11;
    if (valeur == "Roi" || valeur == "Dame" || valeur == "Valet" ) return 10;
    return stoi(valeur); //string to in "2" .. etc
}