#include "CLmappCommande.h"
/*#include "CLmapstock.h"*/
String^ NS_Comp_Mappage::CLmappCommande::Select(void)
{
    /*return "select A.refCommande, A.dateLivraison ,A.dateEmission,numeroClient from commande "*/
    return "select Commande.RefCommande as [Ref commande], DateLivraison as [Date de livraison], DateEmission as [Date emission], Article.Reference, Nom, Couleur, NombreArticle as  Quantite, PrixUHT from Commande left join Composer on Commande.RefCommande = Composer.RefCommande left join Article on Article.Reference = Composer.Reference where NumeroClient = "+this->IDClient +" order by Commande.RefCommande asc ";
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

String^ NS_Comp_Mappage::CLmappCommande::ajouterPanier(void)
{
    return "exec ajouterPanier " + refCommande + ",'" + nomArticle +"',"+ quantite+", '"+couleur+"'";
}

String^ NS_Comp_Mappage::CLmappCommande::supprimerPanier(void)
{
    return "exec supprimerPanier "+refCommande+","+IDArticle;
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

void NS_Comp_Mappage::CLmappCommande::setIDArticle(String^ value)
{
    IDArticle = value;
}

void NS_Comp_Mappage::CLmappCommande::setNomArticle(String^ value)
{
    nomArticle = value;
}

void NS_Comp_Mappage::CLmappCommande::setQuantite(String^ value)
{
    quantite = value;
}

void NS_Comp_Mappage::CLmappCommande::setCouleur(String^ value)
{
    couleur = value;
}

