//CLservice.CPP***************************************************************************************
#include "CLservice.h"

using System::String;
using namespace NS_Comp_Mappage;

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
	this->oMappPersonnel = gcnew NS_Comp_Mappage::CLmapPersonnel();
	this->oMappstock = gcnew NS_Comp_Mappage::CLmapstock();
}

//**********CLIENTS*********************

#pragma region CLIENTS

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerClient(String^ dataTableName)
{
	String^ sql;

	sql = oMappClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}


void NS_Comp_Svc::CLservices::ajouterClient(String^ nom, String^ prenom, String^ dateNaissance, String^ numeroFacturation, String^ adresseFacturation, String^ villeFacturation, String^ numeroLivraison, String^ adresseLivraison, String^ villeLivraison)
{
	String^ sql;

	oMappClient->setNom(nom);
	oMappClient->setPrenom(prenom);
	oMappClient->setDateNaissance(dateNaissance);

	oMappClient->setNumeroFacturation(numeroFacturation);
	oMappClient->setNomAdresseFacturation(adresseFacturation);
	oMappClient->setVilleFacturation(villeFacturation);
	oMappClient->setNumeroLivraison(numeroLivraison);
	oMappClient->setNomAdresseLivraison(adresseLivraison);
	oMappClient->setVilleLivraison(villeLivraison);


	sql = this->oMappClient->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerClient(String^ ID)
{
	String^ sql;

	oMappClient->setNumeroClient(ID);
	//this->oMappTB->setId(int::Parse(ID));
	sql = this->oMappClient->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierClient(String^ ID, String^ nom, String^ prenom, String^ dateNaissance, String^ numeroFacturation, String^ adresseFacturation, String^ villeFacturation, String^ numeroLivraison, String^ adresseLivraison, String^ villeLivraison)
{
	String^ sql;

	oMappClient->setNumeroClient(ID);

	oMappClient->setNom(nom);
	oMappClient->setPrenom(prenom);
	oMappClient->setPrenom(dateNaissance);

	oMappClient->setNumeroFacturation(numeroFacturation);
	oMappClient->setNomAdresseFacturation(adresseFacturation);
	oMappClient->setVilleFacturation(villeFacturation);
	oMappClient->setNumeroLivraison(numeroLivraison);
	oMappClient->setNomAdresseLivraison(adresseLivraison);
	oMappClient->setVilleLivraison(villeLivraison);

	sql = oMappClient->Update();

	this->oCad->actionRows(sql);
}

#pragma endregion

//*************STOCK******************
#pragma region STOCK

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerstock(String^ dataName)
{
	String^ sql1;

	sql1 = oMappstock->Select();
	return this->oCad->getRows(sql1, dataName);

}

void NS_Comp_Svc::CLservices::ajouterstock(String^ nom, String^ quantitestock, String^ prixproduit, String^ seuilreapprovisionnement)
{
	String^ sql1;

	oMappstock->setnom(nom);
	oMappstock->setprixproduit(prixproduit);
	oMappstock->setquantitestock(quantitestock);
	oMappstock->setseuilreapprovisionnement(seuilreapprovisionnement);

	sql1 = this->oMappstock->Insert();

	this->oCad->actionRows(sql1);
}

void NS_Comp_Svc::CLservices::supprimerstock(String^ ID)
{
	String^ sql1;
	oMappstock->setreference(ID);
	//this->oMappTB->setId(int::Parse(ID));
	sql1 = this->oMappstock->Delete();

	this->oCad->actionRows(sql1);
}

void NS_Comp_Svc::CLservices::modifierstock(String^ ID,String^nom, String^quantitestock, String^prixproduit, String^seuilreapprovisionnement)
{
	String^ sql1;

	oMappClient->setNumeroClient(ID);
	oMappClient->setNom(nom);
	oMappClient->setPrenom(quantitestock);
	oMappClient->setPrenom(prixproduit);
	sql1 = oMappClient->Update();

	this->oCad->actionRows(sql1);
}

#pragma endregion

//***************PERSONNEL**********************

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerPersonnel(String^ dataName)
{
	String^ sql2;

	sql2 = oMappPersonnel->Select();
	return this->oCad->getRows(sql2, dataName);
}

void NS_Comp_Svc::CLservices::ajouterPersonnel(String^nom, String^prenom, String^dateEmbauche, String^ numero, String^ adresse, String^ ville, String^ IDSupPersonnel)
{
	String^ sql2;

	oMappPersonnel->setNom(nom);
	oMappPersonnel->setPrenom(prenom);
	oMappPersonnel->setdateEmbauche(dateEmbauche);

	oMappPersonnel->setNumero(numero);
	oMappPersonnel->setNomAdresse(adresse);
	oMappPersonnel->setVille(ville);
	oMappPersonnel->setIDSupPersonnel(IDSupPersonnel);

	sql2 = this->oMappPersonnel->Insert();

	this->oCad->actionRows(sql2);
}

void NS_Comp_Svc::CLservices::supprimerPersonnel(String^ID)
{
	String^ sql2;

	oMappPersonnel->setIDPersonnel(ID);
	//this->oMappTB->setId(int::Parse(ID));
	sql2 = this->oMappPersonnel->Delete();

	this->oCad->actionRows(sql2);
}

void NS_Comp_Svc::CLservices::modifierPersonnel(String^ ID, String^ nom, String^ prenom, String^ dateEmbauche, String^ numero, String^ adresse, String^ ville, String^ IDSupPersonnel)
{
	String^ sql2; 
	oMappPersonnel->setIDPersonnel(ID);

	oMappPersonnel->setNom(nom);
	oMappPersonnel->setPrenom(prenom);
	oMappPersonnel->setdateEmbauche(dateEmbauche);

	oMappPersonnel->setNumero(numero);
	oMappPersonnel->setNomAdresse(adresse);
	oMappPersonnel->setVille(ville);

	oMappPersonnel->setIDSupPersonnel(IDSupPersonnel);

	sql2 = oMappPersonnel->Update();

	this->oCad->actionRows(sql2);
}