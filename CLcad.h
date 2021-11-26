// CAD.H ***********************************************************************************
//CAD = Composant d'acc�s aux donn�es
#pragma once

using System::String;
using namespace System::Data;
using namespace SqlClient;

namespace NS_Comp_Data
{
	ref class CLcad
	{
	private:
		String^ sSql;		//Chaine contenant les futures requ�tes
		String^ sCnx;		//Chaine de connexion
		SqlConnection^ oCnx;	//Connexion
		SqlCommand^ oCmd;		//Commande
		SqlDataAdapter^ oDA;	//Adaptateur
		DataSet^ oDs;		//Stockage des elements
	public:
		CLcad(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
}