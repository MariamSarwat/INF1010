#include "depense.h"
#include <iostream>
#include <iomanip>

using namespace std;

//constructeur par default implementation
Depense::Depense()
{
	titre_ = "unknown";
	montant_ = 0.0;
}

//constructeur avec paramètres
Depense::Depense(string& titre, double montant)
{
	titre_ = titre;
	montant_ = montant;
}

//méthode d'accès
string Depense::getTitre() const
{
	return titre_;
}

double Depense::getMontant() const
{
	return montant_;
}

//méthodes de modification
void Depense::setTitre(string& titre)
{
	titre_ = titre;
}

void Depense::setMontant(double montant)
{
	montant_ = montant;
}

void Depense::afficherDepense() const
{
	cout << "Achat : " << titre_ << " Prix :" << montant_ << endl; //setprecision : iomanip
}