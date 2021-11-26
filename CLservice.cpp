//CLservice.CPP***************************************************************************************
#include "CLservice.h"

using System::String;
using namespace NS_Comp_Mappage;

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
}
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
