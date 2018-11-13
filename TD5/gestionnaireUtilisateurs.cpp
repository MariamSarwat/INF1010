/********************************************
* Titre: Travail pratique #5 - gestionnaireUtilisateurs.cpp
* Date: 4 novembre 2018
* Auteur: Ryan Hardie
*******************************************/

#include "gestionnaireUtilisateurs.h"
#include "utilisateurPremium.h"
#include "utilisateurRegulier.h"

#include <algorithm>
#include <functional>
#include <iterator>

using namespace std::placeholders;


vector<double> GestionnaireUtilisateurs::getComptes() const {}
int GestionnaireUtilisateurs::estExistant(Utilisateur* utilisateur) const {}
void  GestionnaireUtilisateurs::mettreAJourComptes(Utilisateur* payePar, double montant) {}
pair<Utilisateur*, double>&  GestionnaireUtilisateurs::getMax() const {}
pair<Utilisateur*, double>&  GestionnaireUtilisateurs::getMin() const {}
Utilisateur *  GestionnaireUtilisateurs::getUtilisateurSuivant(Utilisateur* utilisateur, double montant) const {}
vector<pair<Utilisateur*, double>>  GestionnaireUtilisateurs::getUtilisateursEntre(double borneInf, double borneSup) const {}
GestionnaireUtilisateurs&  GestionnaireUtilisateurs::setCompte(pair<Utilisateur*, double> p) {}
