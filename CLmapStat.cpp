#include "CLmapStat.h"

String^ NS_Comp_Mappage::CLmapStat::calculerPanierMoyen()
{
    return "exec calculerPanierMoyen";
}

String^ NS_Comp_Mappage::CLmapStat::calculerCAParMois()
{
    return "exec calculerCAParMois "+mois;
}

String^ NS_Comp_Mappage::CLmapStat::articleSousSeuil()
{
    return "exec articleSousSeuil";
}

String^ NS_Comp_Mappage::CLmapStat::calculerMontantTotalClient()
{
    return "calculerMontantTotalClient "+IDClient;
}

String^ NS_Comp_Mappage::CLmapStat::articlePlusVendus()
{
    return "exec articlePlusVendus";
}

String^ NS_Comp_Mappage::CLmapStat::articleMoinsVendus()
{
    return "exec articleMoinsVendus";
}

String^ NS_Comp_Mappage::CLmapStat::calculerValeurCommercialStock()
{
    return "exec calculerValeurCommercialStock";
}

String^ NS_Comp_Mappage::CLmapStat::calculerValeurAchatStock()
{
    return "exec calculerValeurAchatStock";
}

String^ NS_Comp_Mappage::CLmapStat::calculerBenefice()
{
    return "exec calculerBenefice";
}

String^ NS_Comp_Mappage::CLmapStat::simulerValeurCommerciale()
{
    TVA = TVA->Replace(",", ".");
    margeCommercial = margeCommercial->Replace(",", ".");
    demarqueCommercial = demarqueCommercial->Replace(",", ".");
    remise = remise->Replace(",", ".");
    //System::Windows::Forms::MessageBox::Show("exec simulerValeurCommerciale " + TVA + "," + margeCommercial + "," + demarqueCommercial + "," + remise);
    return "exec simulerValeurCommerciale "+TVA+","+margeCommercial+","+demarqueCommercial+","+remise;
}

void NS_Comp_Mappage::CLmapStat::setIDClient(String^ value)
{
    this->IDClient = value;
}

void NS_Comp_Mappage::CLmapStat::setMois(String^ value)
{
    this->mois = value;
}

void NS_Comp_Mappage::CLmapStat::setTVA(String^ value)
{
    this->TVA = value;
}

void NS_Comp_Mappage::CLmapStat::setMargeCommercial(String^ value)
{
    this->margeCommercial = value;
}

void NS_Comp_Mappage::CLmapStat::setDemarqueCommercial(String^ value)
{
    this->demarqueCommercial = value;
}

void NS_Comp_Mappage::CLmapStat::setRemise(String^ value)
{
    this->remise = value;
}
