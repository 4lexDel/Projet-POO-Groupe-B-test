#include "CLmapClient.h"
using System::Data::SqlClient::SqlParameter;

String^ NS_Comp_Mappage::CLmapClient::Select(void)
{
	return "SELECT Nom, Prenom, DateNaissance FROM Client";
}

String^ NS_Comp_Mappage::CLmapClient::Insert(void)
{
	return "INSERT INTO Client (Nom, Prenom, DateNaissance) VALUES('" + this->nom + "','" + this->prenom + "','" + this->dateNaissance+"');";
}

String^ NS_Comp_Mappage::CLmapClient::Delete(void)
{
	return "DELETE FROM Client WHERE NumeroClient = " + numeroClient;
}

String^ NS_Comp_Mappage::CLmapClient::Update(void)
{
	return "UPDATE Client SET Nom = '" + this->nom + "', Prenom = '" + this->prenom + "', DateNaissance ='" + this->dateNaissance + "' ,  WHERE numeroClient = '" + this->numeroClient + "'; ";
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
