/************************************************************************
* Titre: Travail pratique #2 - main.cpp
* Date: 16 septembre 2018
* Auteur: Wassim Khene
* Modifi� par : Nanor Janjikian (1901777) et St�phanie Mansour (1935595)
* Date: 2 octobre 2018
* Description: Ce code permet de cr�� des utilisateurs et des d�penses
* pour les ajouter aux utilisateurs et groupes et ensuite afficher
* les d�penses faites par chaque membre pour la totalit� du groupe, 
* �  l'aide des fichiers d�impl�mentation de classe.
*************************************************************************/

/* Questions:
*	1. L�op�rateur = est une affectation qui est utile lorsqu�on veut
*       modifier les attributs d�un objet en le passant les valeurs des
*	attributs d�un autre objet d�j� existant.
*          Le constructeur par copie est utile lorsqu�on veut cr�er un second
*       objet identique a un objet d�j� cr�er pour pouvoir le modifier,
*       tout en gardant une copie de ce dernier.
*
*	2. En utilisant l�op�rateur =, on affecte les attributs d�un objet
*       d�j� existant � un autre objet existant. En d�autre mots, cet op�rateur
*       est utilis� sur deux objets d�j� cr��s. Par contre, en utilisant le
*       constructeur par copie, on utilise un objet qui existe pour pouvoir cr�er
*	un nouvel objet identique � ce dernier.
*/

#include <string>
#include <iostream>
#include "depense.h";
#include "utilisateur.h"
#include "transfert.h"
#include "groupe.h"

using namespace std;

int main() {

	cout << "\t \tBienvenue sur PolyCount " << endl << " *****************************************************" << endl;
	
	// Initialisation des depenses
	Depense* d1 = new Depense("d1", 12, "IGA");
	Depense* d2 = new Depense("d2", 11, "Provigo");
	Depense* d3 = new Depense("d3", 5, "Jean-drapeau");
	Depense* d4 = new Depense("d4", 23, "Vieux port");
	Depense* d5 = new Depense("d5", 17, "Metro");
	Depense* d6 = new Depense("d6", 29, "Desjardins");
	// Exemple d'utilisation du constructeur par copie et de l'operateur d'assignation
	Depense* d7 = new Depense(*d5);
	d7->setNom("d7");
	d7->setLieu("Maisonnee");

	Depense* d8 = new Depense();
	*d8 = *d1;
	d8->setNom("d8");
	d8->setLieu("Banque scotia");

	// Initialisation des utilisateurs
	Utilisateur* u1 = new Utilisateur("Martin");
	Utilisateur* u2 = new Utilisateur("Franklin");
	Utilisateur* u3 = new Utilisateur("Geraldine");
	Utilisateur* u4 = new Utilisateur("Bernard");

	//Exemple d'utilisation de l'operateur d'assignation
	Utilisateur* u5 = new Utilisateur();
	*u5 = *u1;
	u5->setNom("Christian");

	// Initialisation du groupe
	Groupe* groupe = new Groupe("vacances");

	// Ajout des utilisateurs et des depenses au groupe
	((((*groupe += u1) += u2) += u3) += u4) += u5;

	groupe->ajouterDepense(d1, u1).ajouterDepense(d2, u1).ajouterDepense(d3, u2).ajouterDepense(d4, u3).ajouterDepense(d5, u4)
		.ajouterDepense(d6, u5).ajouterDepense(d7, u3).ajouterDepense(d8, u4);
	cout << *groupe;
	// Equilibrage des comptes
	groupe->equilibrerComptes();
	cout << *groupe;

	// TODO: Terminez le programme correctement

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

	system("pause");
	return 0;
}
