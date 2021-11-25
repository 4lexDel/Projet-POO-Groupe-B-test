//CLservice.h********************************************************************************
#pragma once
#include "CLmapTB.h"

#include "CLmapClient.h"

#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapClient^ oMappClient;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerClient(System::String^ dataName);
		void ajouterClient(System::String^, System::String^, System::String^);
		void supprimerClient(System::String^);
		void modifierClient(System::String^, System::String^, System::String^, System::String^);
	};
}
