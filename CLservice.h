//CLservice.h********************************************************************************
#pragma once

#include "CLmapClient.h"
#include "CLmapPersonnel.h"
#include "CLmapstock.h"
#include "CLcad.h"
#include "CLmappCommande.h"
#include "CLmapStat.h"

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
		NS_Comp_Mappage::CLmappCommande^ oMappCommande;
		NS_Comp_Mappage::CLmapStat^ oMappStat;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerClient(String^ dataName);
		void ajouterClient(String^, String^, String^, String^, String^, String^, String^, String^, String^);
		void supprimerClient(String^);
		void modifierClient(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);


		System::Data::DataSet^ selectionnerstock(String^ dataName);
		void ajouterstock(String^, String^, String^, String^ ,String^);
		void supprimerstock(String^);
		void modifierstock(String^ ,String^, String^, String^ ,String^ );


		System::Data::DataSet^ selectionnerPersonnel(String^ dataName);
		void ajouterPersonnel(String^, String^, String^, String^, String^, String^, String^);
		void supprimerPersonnel(String^);
		void modifierPersonnel(String^, String^, String^, String^, String^, String^, String^, String^);

		System::Data::DataSet^ selectionnerCommande(String^ dataName, String^ IDClient);
		void ajouterCommande(String^ IDClient, String^ dateLivraison);
		void supprimerCommande(String^ IDCommande);
		void modifierCommande(String^ IDCommande, String^ dateLivraison);
			
		void ajouterPanier(String^ IDCommande, String^ nomArticle, String^ quantite, String^ couleur);
		void supprimerPanier(String^ IDCommande, String^ IDArticle);

		System::Data::DataSet^ calculerPanierMoyen(String^ dataName);
		System::Data::DataSet^ calculerCAParMois(String^ dataName, String^ mois);
		System::Data::DataSet^ articleSousSeuil(String^ dataName);
		System::Data::DataSet^ calculerMontantTotalClient(String^ dataName, String^ IDClient);
		System::Data::DataSet^ articlePlusVendus(String^ dataName);
		System::Data::DataSet^ articleMoinsVendus(String^ dataName);
		System::Data::DataSet^ calculerValeurCommercialStock(String^ dataName);
		System::Data::DataSet^ calculerValeurAchatStock(String^ dataName);
		System::Data::DataSet^ calculerBenefice(String^ dataName);
		System::Data::DataSet^ simulerValeurCommerciale(String^ dataName, String^ TVA, String^ marge, String^ demarque, String^ remise);
	
		System::Data::DataSet^ selectionnerNomArticle(String^ dataName);
	};
}
