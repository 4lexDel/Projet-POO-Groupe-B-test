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
	this->oMappStat = gcnew NS_Comp_Mappage::CLmapStat();
	this->oMappCommande = gcnew NS_Comp_Mappage::CLmappCommande();
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
	oMappClient->setDateNaissance(dateNaissance);

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
	String^ sql;

	sql = oMappstock->Select();
	return this->oCad->getRows(sql, dataName);
}

void NS_Comp_Svc::CLservices::ajouterstock(String^ nom,   String^ quantitestock, String^ prixproduit, String^ seuilreapprovisionnement , String^ prixachat)
{
	String^ sql;
	
	oMappstock->setnom(nom);
	oMappstock->setquantitestock(quantitestock);
	oMappstock->setprixproduit(prixproduit);
	oMappstock->setseuilreapprovisionnement(seuilreapprovisionnement);
	oMappstock->setprixachat(prixachat);

	sql = this->oMappstock->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerstock(String^ ID)
{
	String^ sql;
	oMappstock->setreference(ID);
	//this->oMappTB->setId(int::Parse(ID));
	sql = this->oMappstock->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierstock(String^ ID, String^quantitestock, String^prixproduit, String^seuilreapprovisionnement, String^ prixachat)
{
	String^ sql;

	oMappstock->setreference(ID);
	oMappstock->setquantitestock(quantitestock);
	oMappstock->setprixproduit(prixproduit);
	oMappstock->setseuilreapprovisionnement(seuilreapprovisionnement);
	oMappstock->setprixachat(prixachat);

	sql = oMappstock->Update();

	this->oCad->actionRows(sql);
}

#pragma endregion

//***************PERSONNEL**********************

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerPersonnel(String^ dataName)
{
	String^ sql;

	sql = oMappPersonnel->Select();
	return this->oCad->getRows(sql, dataName);
}

void NS_Comp_Svc::CLservices::ajouterPersonnel(String^nom, String^prenom, String^dateEmbauche, String^ numero, String^ adresse, String^ ville, String^ IDSupPersonnel)
{
	String^ sql;

	oMappPersonnel->setNom(nom);
	oMappPersonnel->setPrenom(prenom);
	oMappPersonnel->setdateEmbauche(dateEmbauche);

	oMappPersonnel->setNumero(numero);
	oMappPersonnel->setNomAdresse(adresse);
	oMappPersonnel->setVille(ville);
	oMappPersonnel->setIDSupPersonnel(IDSupPersonnel);

	sql = this->oMappPersonnel->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerPersonnel(String^ID)
{
	String^ sql;

	oMappPersonnel->setIDPersonnel(ID);
	//this->oMappTB->setId(int::Parse(ID));
	sql = this->oMappPersonnel->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierPersonnel(String^ ID, String^ nom, String^ prenom, String^ dateEmbauche, String^ numero, String^ adresse, String^ ville, String^ IDSupPersonnel)
{
	String^ sql; 
	oMappPersonnel->setIDPersonnel(ID);

	oMappPersonnel->setNom(nom);
	oMappPersonnel->setPrenom(prenom);
	oMappPersonnel->setdateEmbauche(dateEmbauche);

	oMappPersonnel->setNumero(numero);
	oMappPersonnel->setNomAdresse(adresse);
	oMappPersonnel->setVille(ville);

	oMappPersonnel->setIDSupPersonnel(IDSupPersonnel);

	sql = oMappPersonnel->Update();

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerCommande(String^ dataName, String^ IDClient)
{
	String^ sql;

	oMappCommande->setNumeroClient(IDClient);
	sql = oMappCommande->Select();
	return this->oCad->getRows(sql, dataName);
}

void NS_Comp_Svc::CLservices::ajouterCommande(String^ IDClient, String^ dateLivraison)
{
	String^ sql1;

	oMappCommande->setNumeroClient(IDClient);
	oMappCommande->setDateLivraison(dateLivraison);

	sql1 = this->oMappCommande->Insert();

	this->oCad->actionRows(sql1);
}

void NS_Comp_Svc::CLservices::supprimerCommande(String^ IDCommande)
{
	String^ sql2;

	oMappCommande->setRefCommande(IDCommande);
	sql2 = this->oMappCommande->Delete();

	this->oCad->actionRows(sql2);
}

void NS_Comp_Svc::CLservices::modifierCommande(String^ IDCommande, String^ dateLivraison)
{
	String^ sql2;
	oMappCommande->setRefCommande(IDCommande);
	oMappCommande->setDateLivraison(dateLivraison);

	sql2 = oMappCommande->Update();

	this->oCad->actionRows(sql2);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::calculerPanierMoyen(String^ dataName)
{
	String^ sql;

	sql = oMappStat->calculerPanierMoyen();
	return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::calculerCAParMois(String^ dataName, String^ mois)
{
	String^ sql;

	oMappStat->setMois(mois);
	sql = oMappStat->calculerCAParMois();
	return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::articleSousSeuil(String^ dataName)
{
		String^ sql;

		sql = oMappStat->articleSousSeuil();
		return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::calculerMontantTotalClient(String^ dataName, String^ IDClient)
{
	String^ sql;

	oMappStat->setIDClient(IDClient);
	sql = oMappStat->calculerMontantTotalClient();
	return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::articlePlusVendus(String^ dataName)
{
	String^ sql;

	sql = oMappStat->articlePlusVendus();
	return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::articleMoinsVendus(String^ dataName)
{
	String^ sql;

	sql = oMappStat->articleMoinsVendus();
	return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::calculerValeurCommercialStock(String^ dataName)
{
	String^ sql;

	sql = oMappStat->calculerValeurCommercialStock();
	return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::calculerValeurAchatStock(String^ dataName)
{
	String^ sql;

	sql = oMappStat->calculerValeurAchatStock();
	return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::calculerBenefice(String^ dataName)
{
	String^ sql;

	sql = oMappStat->calculerBenefice();
	return this->oCad->getRows(sql, dataName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::simulerValeurCommerciale(String^ dataName, String^ TVA, String^ marge, String^ demarque, String^ remise)
{
	String^ sql;

	oMappStat->setTVA(TVA);
	oMappStat->setMargeCommercial(marge);
	oMappStat->setDemarqueCommercial(demarque);
	oMappStat->setRemise(remise);

	sql = oMappStat->simulerValeurCommerciale();
	return this->oCad->getRows(sql, dataName);
}
