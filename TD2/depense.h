/***************************************************************************
* Titre: Travail pratique #2 - depense.h
* Auteur: Wassim Khene
* Modifi� par : Nanor Janjikian (1901777) et St�phanie Mansour (1935595)
* Date : 2 octobre 2018
***************************************************************************/

#ifndef DEPENSE_H
#define DEPENSE_H

#include <string>
#include <iostream>

using namespace std;

class Depense {
public:
	// Constructeurs par d�fault
	Depense();
	//Ajout du param�tre lieu dans le constructeur par param�tres
	Depense(const string& nom, double montant, const string& lieu);
	//Ajout du constructeur par copie
	Depense(const Depense& depense);
	
	// Methodes d'acces et ajout de la m�thode getLieu
	string getNom() const;
	double getMontant() const;
	string* getLieu() const;

	// Methodes de modifications et ajout de la m�thode setLieu
	void setNom(const string& nom);
	void setMontant(double montant);
	void setLieu(const string& lieu);

	//Ajout de la surcharge de l'operateur =
	Depense& operator=(const Depense& depense);
	//M�thode d'affichage remplac�e par une surcharge de l'operateur <<
	friend ostream& operator<<(ostream& os, const Depense& depense);

private:
	string nom_;
	double montant_;
	//Ajoute l'attribut lieu pointeur
	string* lieu_;
};
#endif