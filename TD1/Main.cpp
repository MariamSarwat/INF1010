
#include <iostream>
#include <string>
#include "groupe.h"

using namespace std;

int main(int argc, const char * argv[]) {
	cout << "\t \tBienvenue sur PolyCount " << endl << " *****************************************" << endl;
	// Creer un  groupe pour  6 depenses et 4 utilisateurs.
	Groupe groupe("Madrid", 6, 4);

	// Creer 5 utlisateurs
	Utilisateur* u1 = new Utilisateur("u1");
	Utilisateur* u2 = new Utilisateur("u2");
	Utilisateur* u3 = new Utilisateur("u3");
	Utilisateur* u4 = new Utilisateur("u4");
	Utilisateur* u5 = new Utilisateur("u5");

	//Creer 7 dépenses.
	Depense* d1 = new Depense("d1", 100.00);
	Depense* d2 = new Depense("d2", 50.00);
	Depense* d3 = new Depense("d3", 70.00);
	Depense* d4 = new Depense("d4", 43.00);
	Depense* d5 = new Depense("d5", 15.00);
	Depense* d6 = new Depense("d6", 30.00);
	Depense* d7 = new Depense("d7", 17.00);

	//ajouter les utilisateurs au groupe
	groupe.ajouterUtilisateur(u1);
	groupe.ajouterUtilisateur(u2);
	groupe.ajouterUtilisateur(u3);
	groupe.ajouterUtilisateur(u4);
	groupe.ajouterUtilisateur(u5);

	//ajouter les depenses au groupe
	groupe.ajouterDepense(d1, u1);
	groupe.ajouterDepense(d2, u2);
	groupe.ajouterDepense(d3, u2);
	groupe.ajouterDepense(d4, u3);
	groupe.ajouterDepense(d5, u4);
	groupe.ajouterDepense(d6, u5);
	groupe.ajouterDepense(d7, u4);

	//calculer le total du grouoe et de chaque utilisateur
	groupe.calculerTotalDepenses();

	//Afficher  le groupe
	groupe.afficherGroupe();

	//Equilibrer les comptes
	groupe.equilibrerComptes();

	//Afficher le groupe
	groupe.afficherGroupe();

	//terminer le programme correctement
	return 0;
}
