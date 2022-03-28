#include "client.h"
#include "compte.h"
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
    cout<<"nom:"<<this->nom<<endl;
    cout<<"prenom"<<this->prenom<<endl;
    cout << "matricule " << this->matricule << endl;
    cout<<"adresse"<<this->adresse<<endl;
}
