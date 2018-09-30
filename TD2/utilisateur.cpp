/********************************************************************************
* Titre: Travail pratique #2 - utilisateur.cpp
* Auteur: Wassim Khene
* Modifi� par : Nanor Janjikian (1901777) et St�phanie Mansour (1935595)
* Date: 2 octobre 2018
* Description: Ce code contient les m�thodes impl�ment�es de utilisateur.h
*********************************************************************************/
#include <iomanip>
#include <iostream>
#include "utilisateur.h"
using namespace std;

// Impl�mentation du constructeur par d�fault
Utilisateur::Utilisateur() : nom_("") {
}
//impl�mentation du constructeur par param�tres
Utilisateur::Utilisateur(const string& nom)
	: nom_(nom) {
}
//implementation du constructeur par copie
Utilisateur::Utilisateur(const Utilisateur& utilisateur):
	nom_(utilisateur.nom_) {
}

//Destructeur
Utilisateur::~Utilisateur() {
}

//implementation des methodes d'acces
string Utilisateur::getNom() const {
	return nom_;
}

double Utilisateur::getTotalDepenses() const {
	double total = 0;
	for (unsigned int i = 0; i < depenses_.size(); i++) {
		total += depenses_[i]->getMontant();
	}
	return total;
}

//implementation des methodes de modification
void Utilisateur::setNom(const string& nom) {
	nom_ = nom;
}
//implementation des operateurs += et =
Utilisateur& Utilisateur::operator+=(Depense* uneDepense) {
	depenses_.push_back(uneDepense);	
	return *this;
}

Utilisateur& Utilisateur::operator=(const Utilisateur& utilisateur) {
	if (this != &utilisateur)
	{
		depenses_ = utilisateur.depenses_;
		nom_ = utilisateur.nom_;
	}
	return *this;
}
//implementation de la methode d'affichage
ostream& operator<<(ostream &os, const Utilisateur& utilisateur) {
	os <<"Utilisateur : " << utilisateur.getNom() 	<< " a depense pour un total de : " << utilisateur.getTotalDepenses() <<endl
		<< "\t Liste de depenses : " << endl; 

	for (unsigned int i = 0; i < utilisateur.depenses_.size(); i++) {
		os << "\t\t" << *utilisateur.depenses_[i];
	}
	return os;
}

