
#ifndef TRANSFERT_H
#define TRANSFERT_H

#include <iostream>
#include <stdio.h>

using namespace std;

#include "utilisateur.h"

class Transfert {
public:

	// Constructeurs
	Transfert();
	Transfert(double montant, Utilisateur* de, Utilisateur* pour);
	// M�thodes d'acc�s

	Utilisateur* getDonneur() const;
	Utilisateur* getReceveur() const;
	double getMontant() const;


	//M�thode d'affichage
	void setDonneur(Utilisateur* donneur);
	void setMontant(double montant);
	void setReceveur(Utilisateur* receveur);

	void afficherTransfert() const;

private:
	double montant_;
	Utilisateur* donneur_;
	Utilisateur* receveur_;


};
#endif
