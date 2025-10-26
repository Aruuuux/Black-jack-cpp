#include "../headers/Blackjack.hpp"
#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

Blackjack::Blackjack(): joueur("joueur"), banque("banque"), partieterminee(false){}
Blackjack::~Blackjack(){}

void Blackjack::initialiserDeck(){
    deck.clear();

    vector<string> familles = { "❤️", "♠️", "♣️", "♦️"};
    vector<string> valeurs = { "AS", "2", "3", "4", "5", "6", "7", 
        "8", "9", "10", "Valet", "Dame", "Roi"};
    
    for(const string& f : familles){
        for(const string& v : valeurs){
            deck.push_back(Carte(v, f));
        }
    }


    random_device rd;
    mt19937 g(rd()); // créer une graine à partir du matériel
    shuffle(deck.begin(), deck.end(), g);
    
};

Carte Blackjack::piocherCarte(){
    if(deck.empty()){
        cout<< "Le deck est vide !"<< endl;
        initialiserDeck();
    }

    Carte c = deck.back();
    deck.pop_back();

    return c;
}