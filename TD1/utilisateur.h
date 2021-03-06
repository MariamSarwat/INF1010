
#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>
#include <iostream>

using namespace std;

#include "depense.h"

class Utilisateur {
public:
	// constructeurs
	Utilisateur();
	Utilisateur(const string& nom);

	//Destructeur
	~Utilisateur();

	//Methodes d'accès
	string getNom() const;
	unsigned int getNombreDepense() const;
	double getTotal() const;

	//Methode de modification
	void setNom(const string& nom);

	// Methode ajout de dépense
	void ajouterDepense(Depense* uneDepense);

	//Methode de calcul total
	void calculerTotal();

	//Mathode d'affichage
	void afficherUtilisateur() const;

private:
	string nom_;
	unsigned int tailleTabDepense_;
	unsigned int nombreDepenses_;
	double totalDepense_;
	Depense ** listeDepenses_;


};
#endif /* utilisateur_hpp */
