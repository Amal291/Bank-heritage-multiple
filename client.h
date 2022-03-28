#pragma once
#include <iostream>
using namespace std;

class client
{	
    public: 
		
        client(string n, string p, string adr);
		~client();
		void afficher()const;
	
    private:
		
        static int cpt;
		int matricule;
		string nom;
		string prenom;
		string adresse;
        vector<compte*>mescomptes;
	
};