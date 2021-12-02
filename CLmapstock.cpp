#include "CLmapstock.h"

using System::Data::SqlClient::SqlParameter;

String^ NS_Comp_Mappage::CLmapstock::Select(void)
{ 
   return "select A.Reference, Nom, QuantiteStock, PrixProduit, SeuilReapprovisionnement, NomTaxe, PourcentageTaxe from Taxer Tr join Article as A on Tr.Reference = A.Reference join Taxe as Ta on Tr.IDTaxe = Ta.IDTaxe";
}

String^ NS_Comp_Mappage::CLmapstock::Insert(void)
{ 

    return "exec ajouterArticle " + this->nom + ", " + this->quantitestock + ", " + this->prixproduit + ", " + this->seuilreapprovisionnement + "," +this->prixachat ;
}

String^ NS_Comp_Mappage::CLmapstock::Delete(void)
{
    return "exec supprimerArticle " + this->reference;
}

String^ NS_Comp_Mappage::CLmapstock::Update(void)
{
    return "exec modifierStock " + this->reference + ", " + this->quantitestock + ", " + this->prixproduit + ", " + this->seuilreapprovisionnement + "," + this->prixachat;
}
void NS_Comp_Mappage::CLmapstock::setreference(String^ val)
{
    this->reference = val;
}

void NS_Comp_Mappage::CLmapstock::setnom(String^ val)
{
    this->nom = val;
}

void NS_Comp_Mappage::CLmapstock::setprixproduit(String^ val )
{
    this->prixproduit = val;
}

void NS_Comp_Mappage::CLmapstock::setquantitestock(String^ val)
{
    this->quantitestock = val;
}

void NS_Comp_Mappage::CLmapstock::setseuilreapprovisionnement(String^ val)
{
    this->seuilreapprovisionnement = val;
}

void NS_Comp_Mappage::CLmapstock::setprixachat(String^ val)
{
    this->prixachat = val;
}

/*void NS_Comp_Mappage::CLmapstock::setnomtaxe(String^ val)
{
    this->nomtaxe = val;
}

void NS_Comp_Mappage::CLmapstock::setpourcentage(String^ val)
{
    this->pourcentagetaxe = val;
}*/



