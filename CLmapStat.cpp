#include "CLmapStat.h"

String^ NS_Comp_Mappage::CLmapstock::calculerPanierMoyen()
{
    return "exec calculerPanierMoyen";
}

String^ NS_Comp_Mappage::CLmapstock::calculerCAParMois()
{
    return "exec calculerCAParMois "+mois;
}

String^ NS_Comp_Mappage::CLmapstock::articleSousSeuil()
{
    return "exec articleSousSeuil";
}

String^ NS_Comp_Mappage::CLmapstock::calculerMontantTotalClient()
{
    return "calculerMontantTotalClient "+IDClient;
}

String^ NS_Comp_Mappage::CLmapstock::articlePlusVendus()
{
    return "exec articlePlusVendus";
}

String^ NS_Comp_Mappage::CLmapstock::articleMoinsVendus()
{
    return "exec articleMoinsVendus";
}

String^ NS_Comp_Mappage::CLmapstock::calculerValeurCommercialStock()
{
    return "exec calculerValeurCommercialStock";
}

String^ NS_Comp_Mappage::CLmapstock::calculerValeurAchatStock()
{
    return "exec calculerValeurAchatStock";
}

String^ NS_Comp_Mappage::CLmapstock::calculerBenefice()
{
    return "exec calculerBenefice";
}

String^ NS_Comp_Mappage::CLmapstock::simulerValeurCommerciale()
{
    return "exec simulerValeurCommerciale "+TVA+","+margeCommercial+","+demarqueCommercial+","+remise;
}

void NS_Comp_Mappage::CLmapstock::setIDClient(String^ value)
{
    this->IDClient = value;
}

void NS_Comp_Mappage::CLmapstock::setMois(String^ value)
{
    this->mois = value;
}

void NS_Comp_Mappage::CLmapstock::setTVA(String^ value)
{
    this->TVA = value;
}

void NS_Comp_Mappage::CLmapstock::setMargeCommercial(String^ value)
{
    this->margeCommercial = value;
}

void NS_Comp_Mappage::CLmapstock::setDemarqueCommercial(String^ value)
{
    this->demarqueCommercial = value;
}

void NS_Comp_Mappage::CLmapstock::setRemise(String^ value)
{
    this->remise = value;
}
