#include "CLmapstock.h"

String^ NS_Comp_Mappage::CLmapstock::Select(void)
{ 
    return "SELECT Nom, QuantiteStock, PrixProduit,SeuilReapprovisionnement FROM Article";
}

String^ NS_Comp_Mappage::CLmapstock::Insert(void)
{ 
    return "INSERT INTO  (Nom, QuantitéStock, PrixProduit,SeuilReapprovisionnement) VALUES('" + this->nom + "','" + this->quantitestock + "','" + this->prixproduit + "','" + this->seuilreapprovisionnement + "');";
}

String^ NS_Comp_Mappage::CLmapstock::Delete(void)
{
    return "DELETE FROM Client WHERE Reference = " + reference;
}

String^ NS_Comp_Mappage::CLmapstock::Update(void)
{
    return "";
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

/*void NS_Comp_Mappage::CLmapstock::setnomtaxe(String^ val)
{
    this->nomtaxe = val;
}

void NS_Comp_Mappage::CLmapstock::setpourcentage(String^ val)
{
    this->pourcentagetaxe = val;
}

*/

