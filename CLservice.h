//CLservice.h********************************************************************************
#pragma once
#include "CLmapTB.h"

#include "CLmapClient.h"
#include "CLmapPersonnel.h"
#include "CLmapstock.h"
#include "CLcad.h"

using System::String;

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapClient^ oMappClient;
		NS_Comp_Mappage::CLmapstock^ oMappstock;
		NS_Comp_Mappage::CLmapPersonnel^ oMappPersonnel;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerClient(String^ dataName);
		void ajouterClient(String^, String^, String^, String^, String^, String^, String^, String^, String^);
		void supprimerClient(String^);
		void modifierClient(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);


		System::Data::DataSet^ selectionnerStock(String^ dataName);
		void ajouterstock(String^, String^, String^, String^);
		void supprimerstock(String^);
		void modifierstock(String^ ,String^, String^, String^, String^);


		System::Data::DataSet^ selectionnerPersonnel(String^ dataName);
		void ajouterPersonnel(String^, String^, String^, String^, String^, String^, String^);
		void supprimerPersonnel(String^);
		void modifierPersonnel(String^, String^, String^, String^, String^, String^, String^, String^);
	};
}
