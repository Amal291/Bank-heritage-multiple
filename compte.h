
#pragma once
#include <iostream>
#include <vector>
#include <assert.h>
#include"client.h"
#include"operation.h"
#include "devise.h"
#include "client.h"
using namespace std;



class compte
{
    private:
        int matricule;
        static int cpt;
        client* prop;
        vector<operation> historique;

    protected:
        devise* solde;

    public:
        compte(client* p, devise* s);
        compte();
        virtual bool retirerargent(devise* montant);
        void deposerargent(devise* montant);
        bool transfererargent(devise* montant, compte& c);
        void consultersolde()const;
        ~compte();
        

};