#include "compte_epargne_payant.h"
#include "devise.h"
using namespace std;

compte_epargne_payant::compte_epargne_payant(client* c, devise* s, double taux)
            :compte(c,s),compte_epargne(c,s,taux),compte_payant(c,s)
{
}

compte_epargne_payant::~compte_epargne_payant()
{
    cout << "destructeur de la classe compte_epargne_payant" << endl;
}

bool compte_epargne_payant::retirerargent(devise* montant)
{
    if (this->compte_epargne::retirerargent(montant))
    {
        return this->compte_payant::retirerargent(montant);
    }
}