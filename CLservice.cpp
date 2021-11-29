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

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = oMappClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}


void NS_Comp_Svc::CLservices::ajouterClient(String^ nom, String^ prenom, String^ dateNaissance)
{
	System::String^ sql;

	oMappClient->setNom(nom);
	oMappClient->setPrenom(prenom);
	oMappClient->setDateNaissance(dateNaissance);

	sql = this->oMappClient->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerClient(System::String^ ID)
{
	System::String^ sql;

	oMappClient->setNumeroClient(ID);
	//this->oMappTB->setId(int::Parse(ID));
	sql = this->oMappClient->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierClient(System::String^ ID, System::String^ nom, System::String^ prenom, String^ dateNaissance)
{
	System::String^ sql;

	oMappClient->setNumeroClient(ID);
	oMappClient->setNom(nom);
	oMappClient->setPrenom(prenom);
	oMappClient->setPrenom(dateNaissance);
	sql = oMappClient->Update();

	this->oCad->actionRows(sql);
}

//*************STOCK******************

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerstock(System::String^ dataName)
{
	System::String^ sql1;

	sql1 = oMappstock->Select();
	return this->oCad->getRows(sql1, dataName);

}

void NS_Comp_Svc::CLservices::ajouterstock(System::String^ nom, System::String^ quantitestock, System::String^ prixproduit, System::String^ seuilreapprovisionnement)
{
	System::String^ sql1;

	oMappstock->setnom(nom);
	oMappstock->setprixproduit(prixproduit);
	oMappstock->setquantitestock(quantitestock);
	oMappstock->setseuilreapprovisionnement(seuilreapprovisionnement);

	sql1 = this->oMappstock->Insert();

	this->oCad->actionRows(sql1);
}

void NS_Comp_Svc::CLservices::supprimerstock(System::String^ ID)
{
	System::String^ sql1;
	oMappstock->setreference(ID);
	//this->oMappTB->setId(int::Parse(ID));
	sql1 = this->oMappstock->Delete();

	this->oCad->actionRows(sql1);
}

void NS_Comp_Svc::CLservices::modifierstock(System::String^ ID,System::String^nom, System::String^quantitestock, System::String^prixproduit, System::String^seuilreapprovisionnement)
{
	System::String^ sql1;

	oMappClient->setNumeroClient(ID);
	oMappClient->setNom(nom);
	oMappClient->setPrenom(quantitestock);
	oMappClient->setPrenom(prixproduit);
	sql1 = oMappClient->Update();

	this->oCad->actionRows(sql1);
}


//***************PERSONNEL**********************

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerPersonnel(System::String^ dataName)
{
	System::String^ sql2;

	sql2 = oMappPersonnel->Select();
	return this->oCad->getRows(sql2, dataName);
}

void NS_Comp_Svc::CLservices::ajouterPersonnel(System::String^nom, System::String^prenom, System::String^dateEmbauche)
{
	System::String^ sql2;

	oMappPersonnel->setNom(nom);
	oMappPersonnel->setPrenom(prenom);
	oMappPersonnel->setdateEmbauche(dateEmbauche);

	sql2 = this->oMappPersonnel->Insert();

	this->oCad->actionRows(sql2);
}

void NS_Comp_Svc::CLservices::supprimerPersonnel(System::String^ID)
{
	System::String^ sql2;

	oMappPersonnel->setIDPersonnel(ID);
	//this->oMappTB->setId(int::Parse(ID));
	sql2 = this->oMappPersonnel->Delete();

	this->oCad->actionRows(sql2);
}

void NS_Comp_Svc::CLservices::modifierPersonnel(System::String^ ID, System::String^ nom, System::String^ prenom, System::String^ dateEmbauche)
{
	System::String^ sql2; 
	oMappPersonnel->setIDPersonnel(ID);
	oMappPersonnel->setNom(nom);
	oMappPersonnel->setPrenom(prenom);
	oMappPersonnel->setdateEmbauche(dateEmbauche);

	sql2 = oMappPersonnel->Update();

	this->oCad->actionRows(sql2);
}