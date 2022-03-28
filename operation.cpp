#include "operation.h"
#include "devise.h"
using namespace std;

int operation::cpt = 0;

operation::operation(string date, devise* montant, string libelle)
	:numoperation(++operation::cpt)
{
	this->date = date;
	this->montant = montant;
	this->libelle = libelle;
}

operation::~operation()
{
	//cout << "destructeur de la classe operation" << endl;
	operation::cpt--;
}