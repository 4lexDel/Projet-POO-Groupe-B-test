//MAPPING = MIDDLEWARE
#pragma once

using System::String;

namespace NS_Comp_Mappage
{
	public ref class CLmapClient
	{
	protected:
		String^ sSql;

		String^ numeroClient;
		String^ nom;
		String^ prenom;
		String^ dateNaissance;

		String^ NumeroFacturation;
		String^ NomAdresseFacturation;
		String^ villeFacturation;

		String^ NumeroLivraison;
		String^ NomAdresseLivraison;
		String^ villeLivraison;

	public:
		String^ Select(void) new;
		String^ Insert(void) new;
		String^ Delete(void) new;
		String^ Update(void) new;

		void setNumeroClient(String^);
		void setNom(String^);
		void setPrenom(String^);
		void setDateNaissance(String^);

		void setNumeroFacturation(String^);
		void setNomAdresseFacturation(String^);
		void setVilleFacturation(String^);
		
		void setNumeroLivraison(String^);
		void setNomAdresseLivraison(String^);
		void setVilleLivraison(String^);
	};
}
