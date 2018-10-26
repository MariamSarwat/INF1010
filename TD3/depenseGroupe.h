/*************************************************************************************
* Titre: Travail pratique #3 - depenseGroupe.h
* Auteur: David Dratwa
* Modifi� par: Nanor Janjikian (1901777) et St�phanie Mansour (1935595)
* Date: 22 octobre 2018
**************************************************************************************/

#ifndef DEPENSE_GROUPE_H
#define DEPENSE_GROUPE_H

#include "depense.h"
#include <vector>

using namespace std; 

class DepenseGroupe : public Depense {
public:
	//constructeur
	DepenseGroupe(const string& nom = "", double montant = 0, const string& lieu = "Montreal", TypeDepense type = groupe, unsigned int nombreParticipants = 0);
	DepenseGroupe(const DepenseGroupe& depense); 

	//getters 
	unsigned int getNombreParticipants() const; 
	double getMontantPersonnel() const;

	//setters
	void setNombreParticipants(unsigned int nombre); 

	//surcharge 
	friend ostream& operator<<(ostream& os, const DepenseGroupe& depense); 
private : 
	//Les utilisateurs qui partageront la depense
	unsigned int  nombreParticipants_; 
};

#endif // !DEPENSE_GROUPEE_H
