/***********************************************************************
* Titre: Travail pratique #1 - utilisateur.cpp
* Date: 24 janvier 2018
* Auteur: Nanor Janjikian (1901777) et St�phanie Mansour (1935595)
* Desciption: Ce code contient les m�thodes impl�ment�es de utilisateur.h
************************************************************************/
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

#include "utilisateur.h"
//impl�mentation du constructeur par d�fault
Utilisateur::Utilisateur() {
	nom_ = "unknown";
	tailleTabDepense_ = 5;
	nombreDepenses_ = 0;
	totalDepense_ = 0.0;
	listeDepenses_ = nullptr;
}
//impl�mentation du constructeur par param�tres
//ajout de const avant le titre parce qu'il est constant (ne change pas)
Utilisateur::Utilisateur(const string& nom) {
	nom_ = nom;
	tailleTabDepense_ = 5;
	nombreDepenses_ = 0;
	totalDepense_ = 0;
	listeDepenses_ = new Depense*[tailleTabDepense_];
}
//impl�mentation du destructeur
//Ajout d'un desctructeur pour d�sallouer la m�moire
Utilisateur::~Utilisateur() {
	delete[] listeDepenses_;
	listeDepenses_ = nullptr;
	}
//impl�mentation des m�thodes d'acc�s (const : on est en train d'acc�der)
string Utilisateur::getNom() const {
	return nom_;
}

unsigned int Utilisateur::getNombreDepense() const {
	return nombreDepenses_;
}

double Utilisateur::getTotal() const {
	return totalDepense_;
}
//impl�mentation des m�thodes de modifications 
void Utilisateur::setNom(const string& nom) {
	nom_ = nom;
}
// Implementation methode ajout de d�pense
void Utilisateur::ajouterDepense(Depense* uneDepense) {
	if (nombreDepenses_ == tailleTabDepense_) {
		// Si nombre depense est egal a taille depense doubler taille
		int nouvelleTaille = tailleTabDepense_ * 2;
		Depense** nouvelleListeDepenses = new Depense*[nouvelleTaille];

		// Copier les d�penses
		for (unsigned int i = 0; i < nombreDepenses_; i++)
			nouvelleListeDepenses[i] = listeDepenses_[i];

		//liberer le tableau 
		delete[] listeDepenses_;

		// assigner la nouvelle liste et la nouvelle capacit�
		listeDepenses_ = nouvelleListeDepenses;
		tailleTabDepense_ = nouvelleTaille;
	}
	// Ajouter nouvelle depense
	listeDepenses_[nombreDepenses_++] = uneDepense;
}
//Implementation methode de calcul total
void Utilisateur::calculerTotal() {
	for (unsigned int i = 0; i < nombreDepenses_; i++)
		totalDepense_ += listeDepenses_[i]->getMontant();
}
//implementation de methode afficher (ajout de cont comme c'est juste une  affichage) 
void Utilisateur::afficherUtilisateur() const {
	cout <<endl<< "Utilisateur : " << nom_ << " a depense pour un total de : " << totalDepense_ <<endl << "Liste de depenses : " << endl;
	for (unsigned int i = 0; i < nombreDepenses_; i++)
		listeDepenses_[i]->afficherDepense();
}