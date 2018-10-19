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

//surcharge
UtilisateurRegulier& UtilisateurRegulier::operator=(Utilisateur* utilisateur) {
	if (this != utilisateur)
		static_cast<Utilisateur> (*utilisateur) = *this; // ca copie les attibuts de utilisateurRegulier (this) dans utilisateur
	return *this;
}

ostream& operator<< (ostream& os, const UtilisateurRegulier& utilisateur){
	os << "Utilisateur : " << utilisateur.getNom() << "(Regulier)";

	if (utilisateur.estGroupe_ == true)
		os << " est dans le groupe et ";
	else
		os << " n'est pas dans un groupe et ";
	os << static_cast<Utilisateur>(utilisateur) << endl;
	return os;
}

