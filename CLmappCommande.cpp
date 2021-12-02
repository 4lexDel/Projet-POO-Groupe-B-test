#include "CLmappCommande.h"
/*#include "CLmapstock.h"*/
String^ NS_Comp_Mappage::CLmappCommande::Select(void)
{
    /*return "select A.refCommande, A.dateLivraison ,A.dateEmission,numeroClient from commande "*/
    return "select NumeroClient, Commande.RefCommande, DateLivraison, DateEmission, Nom, NombreArticle, PrixUHT from Commande join Composer on Commande.RefCommande = Composer.RefCommande join Article on Article.Reference = Composer.Reference where NumeroClient = "+this->numeroClient +" order by Commande.RefCommande asc ";
}

String^ NS_Comp_Mappage::CLmappCommande::Insert(void)
{
    return "exec ajouterCommande " + "'" + this->dateLivraison + "', '" + this->dateEmission + "', '" + this->numeroClient + "'";
}

String^ NS_Comp_Mappage::CLmappCommande::Delete(void)
{
    return "exec supprimerEmploye " + refCommande;
}

String^ NS_Comp_Mappage::CLmappCommande::Update(void)
{
    return "exec modifierPersonnel " + this->refCommande + ",'" + this->dateLivraison + "', '" + this->dateEmission + "', '" + this->numeroClient + "'";

}

void NS_Comp_Mappage::CLmappCommande::setRefCommande(String^ val)
{
    this->refCommande = val;
}

void NS_Comp_Mappage::CLmappCommande::setDateLivraison(String^ val)
{
    this->dateLivraison = val;
}

void NS_Comp_Mappage::CLmappCommande::setDateEmiision(String^ val)
{
    this->dateEmission = val;
}

void NS_Comp_Mappage::CLmappCommande::setNumeroClient(String^val)
{
    this->numeroClient = val;
}

