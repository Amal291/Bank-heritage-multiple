#include <iostream>
#include <cstring>
#include "client.h"
#include "Compte.h"   
#include"devise.h"
using namespace std;


int client::cpt = 0;
client::client(string n, string p, string adr)
	:matricule(++client::cpt)
{
	this->nom = n;
	this->prenom = p;
	this->adresse = adr;
}

client::~client()
{
	cout << "destructeur de la classe client" << endl;
	client::cpt--;
}

void client::afficher() const
{	
	cout << "Nom:" << this->nom << endl;
    cout << "Prenom:" << this->prenom << endl;
    cout << "matricule:" << this->matricule << endl;
	cout << "Adresse:" << this->adresse << endl;
} 

void compte::deposerargent(devise* montant)
{
   *(this->solde) = this->solde->operator+(*montant);
   operation op(numoperation, "+");
   this->historique.push_back(op);
}

void compte::consultersolde()const
{
    cout << "le num est : " << this->matricule<< endl;
    this->solde->afficher();
}
bool compte::retirerargent(devise* montant)
{
	if (*(this->solde) >= *montant)
	{
		*(this->solde) = *(this->solde) - *montant;
		operation op("DD/MM/YYYY",montant,"-");
		this->list_opera.push_back(op);
		return true;
	}

	return false;

bool compte::transfererargent(devise* montant,compte& c)
{
    if(this->retirerargent(montant) == true)
    {
        c.deposerargent(montant);
        return true;
    }
    else
    return false;
}
