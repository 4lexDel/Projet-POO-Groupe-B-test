//CLservice.h********************************************************************************
#pragma once
#include "CLmapTB.h"

#include "CLmapClient.h"
#include "CLmapPersonnel.h"
#include "CLmapstock.h"
#include "CLcad.h"

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
		System::Data::DataSet^ selectionnerClient(System::String^ dataName);
		void ajouterClient(System::String^, System::String^, System::String^);
		void supprimerClient(System::String^);
		void modifierClient(System::String^, System::String^, System::String^, System::String^);


		System::Data::DataSet^ selectionnerstock(System::String^ dataName);
		void ajouterstock(System::String^, System::String^, System::String^, System::String^);
		void supprimerstock(System::String^);
		void modifierstock(System::String^ ,System::String^, System::String^, System::String^, System::String^);


		System::Data::DataSet^ selectionnerPersonnel(System::String^ dataName);
		void ajouterPersonnel(System::String^, System::String^, System::String^);
		void supprimerPersonnel(System::String^);
		void modifierPersonnel(System::String^, System::String^, System::String^, System::String^);
	};
}
