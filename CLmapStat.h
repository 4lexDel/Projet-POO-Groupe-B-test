#pragma once
#include "CLmapTB.h"
using namespace System;
using System::String;

namespace NS_Comp_Mappage
{
	public ref class CLmapStat
	{
	protected:

		String^ IDClient;

		String^ mois;

		String^ TVA;
		String^ margeCommercial;
		String^ demarqueCommercial;
		String^ remise;

	public:
		String^ calculerPanierMoyen();
		String^ calculerCAParMois();
		String^ articleSousSeuil();
		String^ calculerMontantTotalClient();
		String^ articlePlusVendus();
		String^ articleMoinsVendus();
		String^ calculerValeurCommercialStock();
		String^ calculerValeurAchatStock();
		String^ calculerBenefice();
		String^ simulerValeurCommerciale();

		void setIDClient(String^);		
		
		void setMois(String^);		
		
		void setTVA(String^);		
		void setMargeCommercial(String^);		
		void setDemarqueCommercial(String^);
		void setRemise(String^);
	};

}