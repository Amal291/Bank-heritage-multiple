#include "compte_epargne.h"
#include "devise.h"
#include <assert.h>
using namespace std;

compte_epargne::compte_epargne(client* p, devise* s, double taux)
	:compte(p,s)
{
	assert(taux >= 0 && taux <= 100);
	this->taux_interet = taux;
}

compte_epargne::compte_epargne():compte()
{
	this->taux_interet = NULL;
}

compte_epargne::~compte_epargne()
{
	cout << "destructeur de la classe compte_epargne" << endl;
}

void compte_epargne::calcul_interet()
{
	devise *taux = new devise( * (this->solde) * (this->taux_interet / 100));
	this->deposerargent(taux);
}

bool compte_epargne::retirerargent(devise* montant)
{
{ compte_epargne ce; 
    if (*(this->solde) / 2 >= *montant)
    { if (typeid(*this).name() == typeid(ce).name()){
    return this->compte::retirerargent(montant);
    } 
    return true; }

    return false;
}
}