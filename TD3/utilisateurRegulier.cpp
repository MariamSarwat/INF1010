/***********************************************************************************************
* Titre: Travail pratique #3 - utilisateurRegulier.cpp
* Auteur: Nanor Janjikian (1901777) et St�phanie Mansour (1935595)
* Date: 22 octobre 2018
* Description: Ce code contient les m�thodes impl�ment�es de utilisateurRegulier.h
* Elle repr�sente un utilisateur r�gulier.
************************************************************************************************/

#include "utilisateurRegulier.h"

UtilisateurRegulier::UtilisateurRegulier(const string& nom, double interet, TypeUtilisateur type, bool estGroupe, double totalDepense): Utilisateur(nom, type, interet, totalDepense) {
	estGroupe_ = estGroupe;
}
UtilisateurRegulier::UtilisateurRegulier(const Utilisateur& utilisateur) : Utilisateur(utilisateur) {
	 estGroupe_ = false;
}

bool UtilisateurRegulier::estGroupe() const{
	return estGroupe_;
}

//setters
void UtilisateurRegulier::setEtatGroupe(bool etat) {
	estGroupe_ = etat;
}

//la surcharge de l'op�rateur = de la classe Utilisateur
UtilisateurRegulier& UtilisateurRegulier::operator=(Utilisateur* utilisateur) {
	if (this != utilisateur)
		static_cast<Utilisateur> (*utilisateur) = *this; // ca copie les attibuts de utilisateurRegulier (this) dans utilisateur
	return *this;
}
//operator << de la classe de base pour afficher l'�tat de estGroupe_
ostream& operator<< (ostream& os, const UtilisateurRegulier& utilisateur){
	os << "\n\n \t Utilisateur : " << utilisateur.getNom() << " (Regulier) ";

	if (utilisateur.estGroupe_ == true)
		os << "est dans un groupe et ";
	else
		os << " n'est pas dans un groupe et ";
	os << static_cast<Utilisateur>(utilisateur) << endl;
	return os;
}

