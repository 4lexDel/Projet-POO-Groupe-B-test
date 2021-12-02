#pragma once
#include "CLmapTB.h"

using System::String;

namespace NS_Comp_Mappage
{
    public ref class CLmappCommande
	{
		String^ sSql;

		String^ IDClient;

		String^ refCommande;
		String^ dateLivraison;
		String^ dateEmission;

		String^ modePaiement;

	public:
		String^ Select(void) new;
		String^ Insert(void) new;
		String^ Delete(void) new;
		String^ Update(void) new;

		void setRefCommande(String^);
		void setDateLivraison(String^);
		void setDateEmission(String^);

		void setNumeroClient(String^);
	
	};
}