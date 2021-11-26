//MAPPING = MIDDLEWARE
#pragma once
#include "CLmapTB.h"

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

	public:
		String^ Select(void) new;
		String^ Insert(void) new;
		String^ Delete(void) new;
		String^ Update(void) new;

		void setNumeroClient(String^);
		void setNom(String^);
		void setPrenom(String^);
		void setDateNaissance(String^);
	};
}
