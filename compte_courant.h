#pragma once
#include "compte.h"
using namespace std;

class compte_courant : public compte
{
	private:
		devise* decouvert;
	public:
		compte_courant(client *c, devise *s, devise* decouvert);
		~compte_courant();
		bool retirerargent(devise* montant) override;
};