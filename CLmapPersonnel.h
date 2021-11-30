//MAPPING = MIDDLEWARE
#pragma once
#include "CLmapTB.h"

using System::String;

namespace NS_Comp_Mappage
{
	public ref class CLmapPersonnel
	{
	protected:
		String^ sSql;

		String^ IDPersonnel;
		String^ nom;
		String^ prenom;
		String^ dateEmbauche;

		String^ Numero;
		String^ NomAdresse;
		String^ ville;

		String^ IDSupPersonnel;

	public:
		String^ Select(void) new;
		String^ Insert(void) new;
		String^ Delete(void) new;
		String^ Update(void) new;

		void setIDPersonnel(String^);
		void setNom(String^);
		void setPrenom(String^);
		void setdateEmbauche(String^);

		void setNumero(String^);
		void setNomAdresse(String^);
		void setVille(String^);
		void setIDSupPersonnel(String^);
	};
}
