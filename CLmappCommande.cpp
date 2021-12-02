#include "CLmappCommande.h"
/*#include "CLmapstock.h"*/
String^ NS_Comp_Mappage::CLmappCommande::Select(void)
{
    /*return "select A.refCommande, A.dateLivraison ,A.dateEmission,numeroClient from commande "*/
    return "select NumeroClient, Commande.RefCommande, DateLivraison, DateEmission, Nom, NombreArticle, PrixUHT from Commande left join Composer on Commande.RefCommande = Composer.RefCommande left join Article on Article.Reference = Composer.Reference where NumeroClient = "+this->IDClient +" order by Commande.RefCommande asc ";
}

String^ NS_Comp_Mappage::CLmappCommande::Insert(void)
{
    return "exec ajouterCommande " + this->IDClient + ", '" + this->dateLivraison + "'";
}

String^ NS_Comp_Mappage::CLmappCommande::Delete(void)
{
    return "exec supprimerCommande " + refCommande;
}

String^ NS_Comp_Mappage::CLmappCommande::Update(void)
{
    return "exec modifierCommande " + this->refCommande + ",'" + this->dateLivraison + "'";
}

void NS_Comp_Mappage::CLmappCommande::setRefCommande(String^ val)
{
    this->refCommande = val;
}

void NS_Comp_Mappage::CLmappCommande::setDateLivraison(String^ val)
{
    this->dateLivraison = val;
}

void NS_Comp_Mappage::CLmappCommande::setDateEmission(String^ val)
{
    this->dateEmission = val;
}

void NS_Comp_Mappage::CLmappCommande::setNumeroClient(String^val)
{
    this->IDClient = val;
}

