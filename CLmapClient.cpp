#include "CLmapClient.h"
using System::Data::SqlClient::SqlParameter;

String^ NS_Comp_Mappage::CLmapClient::Select(void)
{
	return "select C.NumeroClient, Nom, Prenom, Numero, NomAdresse as Adresse, nomVille as Ville from Client as C join Posseder as P on C.NumeroClient = P.NumeroClient join Adresse as A on A.IDAdresse = P.IDAdresse join Ville as V on V.IDVille = A.IDVille";
}

String^ NS_Comp_Mappage::CLmapClient::Insert(void)
{
	//return "INSERT INTO Client (Nom, Prenom, DateNaissance) VALUES('" + this->nom + "','" + this->prenom + "','" + this->dateNaissance+"');";
	return "exec ajouterClient '" + this->nom + "','" + this->prenom + "','" + this->dateNaissance + "', " + this->NumeroFacturation + ",'" + this->NomAdresseFacturation + "','" + this->villeFacturation + "', "+ this->NumeroLivraison + ",'" + this->NomAdresseLivraison + "','" + this->villeLivraison + "'";
}

String^ NS_Comp_Mappage::CLmapClient::Delete(void)
{
	return "exec supprimerClient " + numeroClient;
}

String^ NS_Comp_Mappage::CLmapClient::Update(void)
{
	//System::Windows::Forms::MessageBox::Show("exec modifierClient " + this->numeroClient + ", '" + this->nom + "', '" + this->prenom + "', '" + this->dateNaissance + "', " + this->NumeroFacturation + ", '" + this->NomAdresseFacturation + "', '" + this->villeFacturation + "', " + this->NumeroLivraison + ", '" + this->NomAdresseLivraison + "', '" + this->villeLivraison + "'");
	return "exec modifierClient " + this->numeroClient + ", '" + this->nom + "','" + this->prenom + "','" + this->dateNaissance + "', " + this->NumeroFacturation + ",'" + this->NomAdresseFacturation + "','" + this->villeFacturation + "', " + this->NumeroLivraison + ",'" + this->NomAdresseLivraison + "','" + this->villeLivraison + "'";
}

void NS_Comp_Mappage::CLmapClient::setNumeroClient(String^ value)
{
	this->numeroClient = value;
}

void NS_Comp_Mappage::CLmapClient::setNom(String^ value)
{
	this->nom = value;
}

void NS_Comp_Mappage::CLmapClient::setPrenom(String^ value)
{
	this->prenom = value;
}

void NS_Comp_Mappage::CLmapClient::setDateNaissance(String^ value)
{
	this->dateNaissance = value;
}

void NS_Comp_Mappage::CLmapClient::setNumeroFacturation(String^ value)
{
	this->NumeroFacturation = value;
}

void NS_Comp_Mappage::CLmapClient::setNomAdresseFacturation(String^ value)
{
	this->NomAdresseFacturation = value;
}

void NS_Comp_Mappage::CLmapClient::setVilleFacturation(String^ value)
{
	this->villeFacturation = value;
}

void NS_Comp_Mappage::CLmapClient::setNumeroLivraison(String^ value)
{
	this->NumeroLivraison = value;
}

void NS_Comp_Mappage::CLmapClient::setNomAdresseLivraison(String^ value)
{
	this->NomAdresseLivraison = value;
}

void NS_Comp_Mappage::CLmapClient::setVilleLivraison(String^ value)
{
	this->villeLivraison = value;
}
