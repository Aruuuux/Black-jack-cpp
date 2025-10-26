#include "../headers/Blackjack.hpp"
#include <iostream>
using namespace std;

int main(){
    cout << " Bienvenue au BlackJack Royal !" << endl;

    Blackjack game;

    game.distribuerCarte();

    while(!game.estTerminee()){
        game.afficherEtat();

        cout << "\nAction (h = hit, s = stay) : ";
        char action; 
        cin >> action;

        if(action == 'h' ){
            game.tirerJoueur();
        } else if (action == 's'){
            game.tourBanque();
        } else {
            cout << " Commande invalide." << endl;
        }
    }

    cout << "\n==========================" << endl;
    game.afficherEtatFinal();
    cout << game.resultat() << endl;
    cout << "\n==========================" << endl;
    
    return 0;
}