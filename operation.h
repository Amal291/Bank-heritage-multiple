#pragma once
#include <iostream>
using namespace std;

class devise;
class operation
{
	private: 
        static int cpt;
        int numoperation;
        string date;
        devise* montant;
        string libelle;
    public:
        operation(string date, devise* montant,string libelle);
        ~operation();
};
