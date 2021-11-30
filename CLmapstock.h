#pragma once
#include "CLmapTB.h"
using namespace System;
using System::String;
/*using System::Int32;*/

namespace NS_Comp_Mappage
{
	public ref class CLmapstock
	{
	protected :
		String^ sSql;

		String^ reference;
		String^ nom;
		String^ quantitestock;
		String^ prixproduit;
		String^ seuilreapprovisionnement;
		String^ nomtaxe;
		String^ pourcentagetaxe;

	public:
		String^ Select(void) new;
		String^ Insert(void) new;
		String^ Delete(void) new;
		String^ Update(void) new;

		void setreference(String^);
		void setnom(String^);
		void setprixproduit(String^);
		void setquantitestock(String^);
		void setseuilreapprovisionnement(String^);
		
		void setnomtaxe(String^);
		void setpourcentage(String^);




	};

}