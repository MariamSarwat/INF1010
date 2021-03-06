/***********************************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 24 janvier 2018
* Auteur: Nanor Janjikian (1901777) et Stéphanie Mansour (1935595)
* Desciption: Ce code permet va créé des utilisateurs et des depenses pour les ajouter
aux et groupes et ensuite afficher les dépenses faites par chaque membre pour la totalité
du groupe, à l'aide des fichiers d'implémentation de classe. 
************************************************************************/
/* Questions:
*	1. Le lien entre les classes Groupe et Transfert est celui de composition.
*	La durée de vie de la classe Groupe est controlée par celle de la classe Transfert.
*	En d'autres mots, si la classe Transfert est détruite, la classe Groupe sera détruite par conséquence.
*
*	2.Si une méthode est const, elle ne pourra pas effectuer des modifications
*	sur les attributs de l'objet.
*/
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
	Depense* d1 = new Depense("d1", 350.00);
	Depense* d2 = new Depense("d2", 70.00);
	Depense* d3 = new Depense("d3", 60.00);
	Depense* d4 = new Depense("d4", 54.55);
	Depense* d5 = new Depense("d5", 12.98);
	Depense* d6 = new Depense("d6", 45.78);
	Depense* d7 = new Depense("d7", 87.53);

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

	//calculer le total du groupe et de chaque utilisateur
	groupe.calculerTotalDepenses();

	//Afficher  le groupe
	groupe.afficherGroupe();

	//Equilibrer les comptes
	groupe.equilibrerComptes();

	//Afficher le groupe
	groupe.afficherGroupe();

	delete u1;
	delete u2;
	delete u3;
	delete u4;
	delete u5;
	
	
	delete  d1; 
	delete  d2;
	delete  d3;
	delete  d4;
	delete  d5;
	delete  d6;
	delete  d7;

	//terminer le programme correctement

	return 0;
}
