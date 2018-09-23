/***********************************************************************
* Titre: Travail pratique #1 - transfert.cpp
* Date: 24 janvier 2018
* Auteur: Nanor Janjikian (1901777) et St�phanie Mansour (1935595)
* Desciption: Ce code contient les m�thodes impl�ment�es de transfert.h
************************************************************************/
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

#include "transfert.h"
//impl�mentation du constructeur par d�fault
Transfert::Transfert() {
	montant_ = 0.0;
	donneur_ = nullptr;
	receveur_ = nullptr;
}
//impl�mentation du constructeur par param�tres
Transfert::Transfert(double montant, Utilisateur* de, Utilisateur* pour) {
	montant_ = montant;
	donneur_ = de;
	receveur_ = pour;
}

//impl�mentation des m�thodes d'acc�s (const : on est en train d'acc�der)
Utilisateur* Transfert::getDonneur() const {
	return donneur_;
}

Utilisateur* Transfert::getReceveur() const {
	return receveur_;
}

double Transfert::getMontant() const {
	return montant_;
}
//impl�mentation des m�thodes de modifications 
void Transfert::setDonneur(Utilisateur* donneur) {
	donneur_ = donneur;
}

void Transfert::setReceveur(Utilisateur* receveur) {
	receveur_ = receveur;
}

void Transfert::setMontant(double montant) {
	montant_ = montant;
}
//impl�mentation du m�thode affichage (const parce que les variables ne changent pas, juste de l'affichage)
void Transfert::afficherTransfert() const {
	cout << " Transfert fait par : " << donneur_->getNom() << " pour :" << receveur_->getNom() << " d'un montant de :" << getMontant() << endl;
}


