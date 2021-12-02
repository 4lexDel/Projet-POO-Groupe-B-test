//MyForm.H*********************************************************************************************
#pragma once
#include "CLservice.h"


namespace ProjetPOOGroupeB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region declaration components

	protected:

	private: delegate void FuncVersionDisplay(String^ message);

	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;


	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dgv_enr_personnel;


	private: System::Windows::Forms::Button^ btn_load_personnel;
	private: System::Windows::Forms::Button^ insertButtonPerso;
	private: System::Windows::Forms::Button^ deleteButtonPerso;






	private: System::Windows::Forms::Button^ updateButtonPerso;



	private: System::Windows::Forms::TextBox^ textBoxIDPersoUpdate;

	private: System::Windows::Forms::Label^ label9;



	private: System::Windows::Forms::TabPage^ tabPage3;


	private: System::Windows::Forms::Button^ btn_load_client;
	private: System::Windows::Forms::DataGridView^ dgv_enr_stock;














	private: System::Windows::Forms::Button^ btn_load_stock;
















	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ panierMoyenButton;

	private: System::Windows::Forms::DataGridView^ dgv_enr_stat;
	private: System::Windows::Forms::Button^ articlePlusVendusButton;
	private: System::Windows::Forms::Button^ articleMoinsVendusButton;
	private: System::Windows::Forms::Button^ simulationButton;




	private: System::Windows::Forms::Button^ seuilButton;
	private: System::Windows::Forms::Button^ achatButton;
	private: System::Windows::Forms::Button^ valeurComStockButton;



	private: System::Windows::Forms::Button^ CAButton;



	private: System::Windows::Forms::DataGridView^ dgv_enr_client;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ InsertTabClient;
	private: System::Windows::Forms::TabPage^ UpdateTabClient;
	private: System::Windows::Forms::TextBox^ textBoxDateEmbauchePersoUpdate;

	private: System::Windows::Forms::TextBox^ textBoxPrenomPersoUpdate;

	private: System::Windows::Forms::TextBox^ textBoxNomPersoUpdate;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TabPage^ DeleteTabClient;
	private: System::Windows::Forms::TextBox^ textBoxIDPersoDelete;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ insertButtonClient;


	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBoxIDClientUpdate;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBoxDateNaissanceClientUpdate;

	private: System::Windows::Forms::TextBox^ textBoxPrenomClientUpdate;

	private: System::Windows::Forms::TextBox^ textBoxNomClientUpdate;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ updateButtonClient;



	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TextBox^ textBoxIDClientDelete;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ deleteButtonClient;




	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBoxAdresseClientLivUpdate;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownClientLivUpdate;



	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBoxAdresseClientFacUpdate;

	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownClientFacUpdate;

	private: System::Windows::Forms::Label^ label32;




	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBoxAdresseClientFacInsert;

	private: System::Windows::Forms::TextBox^ textBoxAdresseClientLivInsert;

	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownClientFacInsert;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownClientLivInsert;

	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ textBoxDateNaissanceClientInsert;

	private: System::Windows::Forms::TextBox^ textBoxPrenomClientInsert;

	private: System::Windows::Forms::TextBox^ textBoxNomClientInsert;


	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxAdressePersoUpdate;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPersoUpdate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxIDSupPersoUpdate;

	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxAdressePersoInsert;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPersoInsert;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxIDSupPersoInsert;

	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::TextBox^ textBoxDateEmbauchePersoInsert;

	private: System::Windows::Forms::TextBox^ textBoxPrenomPersoInsert;
	private: System::Windows::Forms::TextBox^ textBoxNomPersoInsert;




	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::TextBox^ textBoxPrixProStockInsert;

	private: System::Windows::Forms::TextBox^ textBoxQuantSStockInsert;
	private: System::Windows::Forms::TextBox^ textBoxSeuilReapStockInsert;


	private: System::Windows::Forms::TextBox^ textBoxNomStockInsert;

	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Button^ insertButtonStock;

	private: System::Windows::Forms::TabPage^ tabPage10;


















	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TextBox^ textBoxIDStockDelete;

	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Button^ deleteButtonStock;

	private: System::Windows::Forms::TextBox^ textBoxRefStockUpdate;

	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Button^ updateButtonStock;

	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::TextBox^ textBoxPrixProStockUpdate;

	private: System::Windows::Forms::TextBox^ textBoxQuantSStockUpdate;
	private: System::Windows::Forms::TextBox^ textBoxSeuilReapStockUpdate;
	private: System::Windows::Forms::TabControl^ tabControl4;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::TextBox^ textBoxDateLivComInsert;








	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Button^ insertButtonCommande;

	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::TextBox^ textBoxRefComUpdate;

















	private: System::Windows::Forms::Label^ label72;


	private: System::Windows::Forms::TextBox^ textBoxDateLivrComUpdate;

	private: System::Windows::Forms::Button^ updateButtonCommande;



	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::TabPage^ tabPage14;
	private: System::Windows::Forms::TextBox^ textBoxRefComDelete;


	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::Button^ deleteButtonCommande;

	private: System::Windows::Forms::DataGridView^ dgv_enr_commande;
	private: System::Windows::Forms::Button^ btn_load_commande;
	private: System::Windows::Forms::TextBox^ textBoxIDClientCommande;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBoxIDStat;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRemiseStat;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownDemarqueStat;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMargeStat;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownTVAStat;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMoisStat;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ valeurAchatStockButton;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::TextBox^ textBoxIDComInsert;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::TextBox^ textBoxPrixAchatStockInsert;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::TextBox^ textBoxPrixAchatStockUpdate;
	private: System::Windows::Forms::TabPage^ tabPage15;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::TextBox^ textBoxRefComPanier;


	private: System::Windows::Forms::ComboBox^ comboBoxVillePersoInsert;
	private: System::Windows::Forms::ComboBox^ comboBoxArticlePanier;

	private: System::Windows::Forms::ComboBox^ comboBoxVillePersoUpdate;
	private: System::Windows::Forms::ComboBox^ comboBoxVilleClientLivInsert;
	private: System::Windows::Forms::ComboBox^ comboBoxVilleClientFacInsert;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBoxVilleClientLivUpdate;
	private: System::Windows::Forms::ComboBox^ comboBoxVilleClientFacUpdate;
	private: System::Windows::Forms::Button^ buttonAjouterPanier;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownQuantitePanier;

	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::TextBox^ textBoxRefArtPanier;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Button^ buttonSupprimerPanier;

	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::TextBox^ textBoxCouleurPanier;
	private: System::Windows::Forms::Label^ label62;

















	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TabControl^ ClientTabControl;
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->comboBoxVilleClientFacInsert = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxVilleClientLivInsert = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseClientFacInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdresseClientLivInsert = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownClientFacInsert = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownClientLivInsert = (gcnew System::Windows::Forms::NumericUpDown());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateNaissanceClientInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomClientInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomClientInsert = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->insertButtonClient = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->comboBoxVilleClientFacUpdate = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxVilleClientLivUpdate = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseClientFacUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdresseClientLivUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownClientFacUpdate = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownClientLivUpdate = (gcnew System::Windows::Forms::NumericUpDown());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDClientUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateNaissanceClientUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomClientUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomClientUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->updateButtonClient = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxIDClientDelete = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->deleteButtonClient = (gcnew System::Windows::Forms::Button());
			this->dgv_enr_client = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load_client = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->InsertTabClient = (gcnew System::Windows::Forms::TabPage());
			this->comboBoxVillePersoInsert = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdressePersoInsert = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownPersoInsert = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDSupPersoInsert = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateEmbauchePersoInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomPersoInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomPersoInsert = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->insertButtonPerso = (gcnew System::Windows::Forms::Button());
			this->UpdateTabClient = (gcnew System::Windows::Forms::TabPage());
			this->comboBoxVillePersoUpdate = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->updateButtonPerso = (gcnew System::Windows::Forms::Button());
			this->textBoxAdressePersoUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownPersoUpdate = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDSupPersoUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDPersoUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateEmbauchePersoUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomPersoUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomPersoUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->DeleteTabClient = (gcnew System::Windows::Forms::TabPage());
			this->textBoxIDPersoDelete = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->deleteButtonPerso = (gcnew System::Windows::Forms::Button());
			this->dgv_enr_personnel = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load_personnel = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixAchatStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixProStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQuantSStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeuilReapStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->insertButtonStock = (gcnew System::Windows::Forms::Button());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixAchatStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRefStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->updateButtonStock = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixProStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQuantSStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeuilReapStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxIDStockDelete = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->deleteButtonStock = (gcnew System::Windows::Forms::Button());
			this->dgv_enr_stock = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load_stock = (gcnew System::Windows::Forms::Button());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDClientCommande = (gcnew System::Windows::Forms::TextBox());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateLivComInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDComInsert = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->insertButtonCommande = (gcnew System::Windows::Forms::Button());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxRefComUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateLivrComUpdate = (gcnew System::Windows::Forms::TextBox());
			this->updateButtonCommande = (gcnew System::Windows::Forms::Button());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxRefComDelete = (gcnew System::Windows::Forms::TextBox());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->deleteButtonCommande = (gcnew System::Windows::Forms::Button());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxRefComPanier = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->textBoxCouleurPanier = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxArticlePanier = (gcnew System::Windows::Forms::ComboBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownQuantitePanier = (gcnew System::Windows::Forms::NumericUpDown());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->buttonAjouterPanier = (gcnew System::Windows::Forms::Button());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->textBoxRefArtPanier = (gcnew System::Windows::Forms::TextBox());
			this->buttonSupprimerPanier = (gcnew System::Windows::Forms::Button());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->dgv_enr_commande = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load_commande = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDStat = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownRemiseStat = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownDemarqueStat = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMargeStat = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTVAStat = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMoisStat = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->articlePlusVendusButton = (gcnew System::Windows::Forms::Button());
			this->articleMoinsVendusButton = (gcnew System::Windows::Forms::Button());
			this->simulationButton = (gcnew System::Windows::Forms::Button());
			this->seuilButton = (gcnew System::Windows::Forms::Button());
			this->achatButton = (gcnew System::Windows::Forms::Button());
			this->valeurAchatStockButton = (gcnew System::Windows::Forms::Button());
			this->valeurComStockButton = (gcnew System::Windows::Forms::Button());
			this->CAButton = (gcnew System::Windows::Forms::Button());
			this->panierMoyenButton = (gcnew System::Windows::Forms::Button());
			this->dgv_enr_stat = (gcnew System::Windows::Forms::DataGridView());
			ClientTabControl = (gcnew System::Windows::Forms::TabControl());
			ClientTabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientFacInsert))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientLivInsert))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientFacUpdate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientLivUpdate))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_client))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->InsertTabClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPersoInsert))->BeginInit();
			this->UpdateTabClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPersoUpdate))->BeginInit();
			this->DeleteTabClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_personnel))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_stock))->BeginInit();
			this->tabPage8->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage13->SuspendLayout();
			this->tabPage14->SuspendLayout();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownQuantitePanier))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_commande))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRemiseStat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDemarqueStat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMargeStat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTVAStat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMoisStat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_stat))->BeginInit();
			this->SuspendLayout();
			// 
			// ClientTabControl
			// 
			ClientTabControl->Controls->Add(this->tabPage1);
			ClientTabControl->Controls->Add(this->tabPage2);
			ClientTabControl->Controls->Add(this->tabPage3);
			ClientTabControl->Controls->Add(this->tabPage8);
			ClientTabControl->Controls->Add(this->tabPage4);
			ClientTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			ClientTabControl->Location = System::Drawing::Point(0, 0);
			ClientTabControl->Name = L"ClientTabControl";
			ClientTabControl->SelectedIndex = 0;
			ClientTabControl->Size = System::Drawing::Size(752, 898);
			ClientTabControl->TabIndex = 11;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->dgv_enr_client);
			this->tabPage1->Controls->Add(this->btn_load_client);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(744, 1022);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(5, 435);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(732, 351);
			this->tabControl2->TabIndex = 26;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->comboBoxVilleClientFacInsert);
			this->tabPage5->Controls->Add(this->comboBoxVilleClientLivInsert);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->label28);
			this->tabPage5->Controls->Add(this->label36);
			this->tabPage5->Controls->Add(this->textBoxAdresseClientFacInsert);
			this->tabPage5->Controls->Add(this->textBoxAdresseClientLivInsert);
			this->tabPage5->Controls->Add(this->label37);
			this->tabPage5->Controls->Add(this->label38);
			this->tabPage5->Controls->Add(this->numericUpDownClientFacInsert);
			this->tabPage5->Controls->Add(this->numericUpDownClientLivInsert);
			this->tabPage5->Controls->Add(this->label39);
			this->tabPage5->Controls->Add(this->label40);
			this->tabPage5->Controls->Add(this->label41);
			this->tabPage5->Controls->Add(this->textBoxDateNaissanceClientInsert);
			this->tabPage5->Controls->Add(this->textBoxPrenomClientInsert);
			this->tabPage5->Controls->Add(this->textBoxNomClientInsert);
			this->tabPage5->Controls->Add(this->label43);
			this->tabPage5->Controls->Add(this->label44);
			this->tabPage5->Controls->Add(this->button1);
			this->tabPage5->Controls->Add(this->insertButtonClient);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(724, 322);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Insert";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// comboBoxVilleClientFacInsert
			// 
			this->comboBoxVilleClientFacInsert->FormattingEnabled = true;
			this->comboBoxVilleClientFacInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->comboBoxVilleClientFacInsert->Location = System::Drawing::Point(585, 221);
			this->comboBoxVilleClientFacInsert->Name = L"comboBoxVilleClientFacInsert";
			this->comboBoxVilleClientFacInsert->Size = System::Drawing::Size(84, 24);
			this->comboBoxVilleClientFacInsert->TabIndex = 75;
			// 
			// comboBoxVilleClientLivInsert
			// 
			this->comboBoxVilleClientLivInsert->FormattingEnabled = true;
			this->comboBoxVilleClientLivInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->comboBoxVilleClientLivInsert->Location = System::Drawing::Point(585, 85);
			this->comboBoxVilleClientLivInsert->Name = L"comboBoxVilleClientLivInsert";
			this->comboBoxVilleClientLivInsert->Size = System::Drawing::Size(84, 24);
			this->comboBoxVilleClientLivInsert->TabIndex = 75;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(607, 198);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(34, 17);
			this->label20->TabIndex = 47;
			this->label20->Text = L"Ville";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(607, 61);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(34, 17);
			this->label22->TabIndex = 46;
			this->label22->Text = L"Ville";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(461, 200);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(60, 17);
			this->label28->TabIndex = 45;
			this->label28->Text = L"Adresse";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(461, 65);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(60, 17);
			this->label36->TabIndex = 44;
			this->label36->Text = L"Adresse";
			// 
			// textBoxAdresseClientFacInsert
			// 
			this->textBoxAdresseClientFacInsert->Location = System::Drawing::Point(431, 221);
			this->textBoxAdresseClientFacInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseClientFacInsert->Name = L"textBoxAdresseClientFacInsert";
			this->textBoxAdresseClientFacInsert->Size = System::Drawing::Size(133, 22);
			this->textBoxAdresseClientFacInsert->TabIndex = 43;
			// 
			// textBoxAdresseClientLivInsert
			// 
			this->textBoxAdresseClientLivInsert->Location = System::Drawing::Point(431, 86);
			this->textBoxAdresseClientLivInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseClientLivInsert->Name = L"textBoxAdresseClientLivInsert";
			this->textBoxAdresseClientLivInsert->Size = System::Drawing::Size(133, 22);
			this->textBoxAdresseClientLivInsert->TabIndex = 42;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(352, 200);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(24, 17);
			this->label37->TabIndex = 40;
			this->label37->Text = L"N°";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(352, 65);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(24, 17);
			this->label38->TabIndex = 41;
			this->label38->Text = L"N°";
			// 
			// numericUpDownClientFacInsert
			// 
			this->numericUpDownClientFacInsert->Location = System::Drawing::Point(332, 221);
			this->numericUpDownClientFacInsert->Name = L"numericUpDownClientFacInsert";
			this->numericUpDownClientFacInsert->Size = System::Drawing::Size(69, 22);
			this->numericUpDownClientFacInsert->TabIndex = 39;
			// 
			// numericUpDownClientLivInsert
			// 
			this->numericUpDownClientLivInsert->Location = System::Drawing::Point(332, 86);
			this->numericUpDownClientLivInsert->Name = L"numericUpDownClientLivInsert";
			this->numericUpDownClientLivInsert->Size = System::Drawing::Size(69, 22);
			this->numericUpDownClientLivInsert->TabIndex = 38;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(384, 165);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(173, 17);
			this->label39->TabIndex = 37;
			this->label39->Text = L"Adresse de facturation";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(384, 29);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(156, 17);
			this->label40->TabIndex = 36;
			this->label40->Text = L"Adresse de livraison";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(25, 181);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(278, 17);
			this->label41->TabIndex = 35;
			this->label41->Text = L"Date de naissance (Format : AAAA-MM-JJ)";
			// 
			// textBoxDateNaissanceClientInsert
			// 
			this->textBoxDateNaissanceClientInsert->Location = System::Drawing::Point(27, 202);
			this->textBoxDateNaissanceClientInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDateNaissanceClientInsert->Name = L"textBoxDateNaissanceClientInsert";
			this->textBoxDateNaissanceClientInsert->Size = System::Drawing::Size(220, 22);
			this->textBoxDateNaissanceClientInsert->TabIndex = 31;
			// 
			// textBoxPrenomClientInsert
			// 
			this->textBoxPrenomClientInsert->Location = System::Drawing::Point(27, 140);
			this->textBoxPrenomClientInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomClientInsert->Name = L"textBoxPrenomClientInsert";
			this->textBoxPrenomClientInsert->Size = System::Drawing::Size(220, 22);
			this->textBoxPrenomClientInsert->TabIndex = 30;
			// 
			// textBoxNomClientInsert
			// 
			this->textBoxNomClientInsert->Location = System::Drawing::Point(27, 84);
			this->textBoxNomClientInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomClientInsert->Name = L"textBoxNomClientInsert";
			this->textBoxNomClientInsert->Size = System::Drawing::Size(219, 22);
			this->textBoxNomClientInsert->TabIndex = 29;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(25, 63);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(37, 17);
			this->label43->TabIndex = 34;
			this->label43->Text = L"Nom";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(24, 116);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(57, 17);
			this->label44->TabIndex = 32;
			this->label44->Text = L"Prenom";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(562, 322);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 45);
			this->button1->TabIndex = 2;
			this->button1->Text = L"INSERT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::insertButtonClient_Click);
			// 
			// insertButtonClient
			// 
			this->insertButtonClient->Location = System::Drawing::Point(553, 269);
			this->insertButtonClient->Margin = System::Windows::Forms::Padding(4);
			this->insertButtonClient->Name = L"insertButtonClient";
			this->insertButtonClient->Size = System::Drawing::Size(164, 45);
			this->insertButtonClient->TabIndex = 2;
			this->insertButtonClient->Text = L"INSERT";
			this->insertButtonClient->UseVisualStyleBackColor = true;
			this->insertButtonClient->Click += gcnew System::EventHandler(this, &MyForm::insertButtonClient_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->comboBoxVilleClientFacUpdate);
			this->tabPage6->Controls->Add(this->comboBoxVilleClientLivUpdate);
			this->tabPage6->Controls->Add(this->label35);
			this->tabPage6->Controls->Add(this->label31);
			this->tabPage6->Controls->Add(this->label34);
			this->tabPage6->Controls->Add(this->label30);
			this->tabPage6->Controls->Add(this->textBoxAdresseClientFacUpdate);
			this->tabPage6->Controls->Add(this->textBoxAdresseClientLivUpdate);
			this->tabPage6->Controls->Add(this->label33);
			this->tabPage6->Controls->Add(this->label29);
			this->tabPage6->Controls->Add(this->numericUpDownClientFacUpdate);
			this->tabPage6->Controls->Add(this->numericUpDownClientLivUpdate);
			this->tabPage6->Controls->Add(this->label32);
			this->tabPage6->Controls->Add(this->label24);
			this->tabPage6->Controls->Add(this->label21);
			this->tabPage6->Controls->Add(this->textBoxIDClientUpdate);
			this->tabPage6->Controls->Add(this->label23);
			this->tabPage6->Controls->Add(this->textBoxDateNaissanceClientUpdate);
			this->tabPage6->Controls->Add(this->textBoxPrenomClientUpdate);
			this->tabPage6->Controls->Add(this->textBoxNomClientUpdate);
			this->tabPage6->Controls->Add(this->label25);
			this->tabPage6->Controls->Add(this->updateButtonClient);
			this->tabPage6->Controls->Add(this->label26);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(724, 322);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Update";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// comboBoxVilleClientFacUpdate
			// 
			this->comboBoxVilleClientFacUpdate->FormattingEnabled = true;
			this->comboBoxVilleClientFacUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->comboBoxVilleClientFacUpdate->Location = System::Drawing::Point(593, 210);
			this->comboBoxVilleClientFacUpdate->Name = L"comboBoxVilleClientFacUpdate";
			this->comboBoxVilleClientFacUpdate->Size = System::Drawing::Size(84, 24);
			this->comboBoxVilleClientFacUpdate->TabIndex = 76;
			// 
			// comboBoxVilleClientLivUpdate
			// 
			this->comboBoxVilleClientLivUpdate->FormattingEnabled = true;
			this->comboBoxVilleClientLivUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->comboBoxVilleClientLivUpdate->Location = System::Drawing::Point(593, 75);
			this->comboBoxVilleClientLivUpdate->Name = L"comboBoxVilleClientLivUpdate";
			this->comboBoxVilleClientLivUpdate->Size = System::Drawing::Size(84, 24);
			this->comboBoxVilleClientLivUpdate->TabIndex = 76;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(605, 187);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(34, 17);
			this->label35->TabIndex = 26;
			this->label35->Text = L"Ville";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(605, 51);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(34, 17);
			this->label31->TabIndex = 26;
			this->label31->Text = L"Ville";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(460, 189);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(60, 17);
			this->label34->TabIndex = 26;
			this->label34->Text = L"Adresse";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(460, 54);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(60, 17);
			this->label30->TabIndex = 26;
			this->label30->Text = L"Adresse";
			// 
			// textBoxAdresseClientFacUpdate
			// 
			this->textBoxAdresseClientFacUpdate->Location = System::Drawing::Point(429, 211);
			this->textBoxAdresseClientFacUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseClientFacUpdate->Name = L"textBoxAdresseClientFacUpdate";
			this->textBoxAdresseClientFacUpdate->Size = System::Drawing::Size(133, 22);
			this->textBoxAdresseClientFacUpdate->TabIndex = 25;
			// 
			// textBoxAdresseClientLivUpdate
			// 
			this->textBoxAdresseClientLivUpdate->Location = System::Drawing::Point(429, 75);
			this->textBoxAdresseClientLivUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseClientLivUpdate->Name = L"textBoxAdresseClientLivUpdate";
			this->textBoxAdresseClientLivUpdate->Size = System::Drawing::Size(133, 22);
			this->textBoxAdresseClientLivUpdate->TabIndex = 25;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(349, 189);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 17);
			this->label33->TabIndex = 24;
			this->label33->Text = L"N°";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(349, 54);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 17);
			this->label29->TabIndex = 24;
			this->label29->Text = L"N°";
			// 
			// numericUpDownClientFacUpdate
			// 
			this->numericUpDownClientFacUpdate->Location = System::Drawing::Point(331, 211);
			this->numericUpDownClientFacUpdate->Name = L"numericUpDownClientFacUpdate";
			this->numericUpDownClientFacUpdate->Size = System::Drawing::Size(69, 22);
			this->numericUpDownClientFacUpdate->TabIndex = 23;
			// 
			// numericUpDownClientLivUpdate
			// 
			this->numericUpDownClientLivUpdate->Location = System::Drawing::Point(331, 75);
			this->numericUpDownClientLivUpdate->Name = L"numericUpDownClientLivUpdate";
			this->numericUpDownClientLivUpdate->Size = System::Drawing::Size(69, 22);
			this->numericUpDownClientLivUpdate->TabIndex = 23;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(381, 154);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(173, 17);
			this->label32->TabIndex = 22;
			this->label32->Text = L"Adresse de facturation";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(381, 19);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(156, 17);
			this->label24->TabIndex = 22;
			this->label24->Text = L"Adresse de livraison";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(5, 195);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(278, 17);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Date de naissance (Format : AAAA-MM-JJ)";
			// 
			// textBoxIDClientUpdate
			// 
			this->textBoxIDClientUpdate->Location = System::Drawing::Point(9, 51);
			this->textBoxIDClientUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIDClientUpdate->Name = L"textBoxIDClientUpdate";
			this->textBoxIDClientUpdate->Size = System::Drawing::Size(217, 22);
			this->textBoxIDClientUpdate->TabIndex = 5;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(5, 29);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(21, 17);
			this->label23->TabIndex = 8;
			this->label23->Text = L"ID";
			// 
			// textBoxDateNaissanceClientUpdate
			// 
			this->textBoxDateNaissanceClientUpdate->Location = System::Drawing::Point(7, 216);
			this->textBoxDateNaissanceClientUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDateNaissanceClientUpdate->Name = L"textBoxDateNaissanceClientUpdate";
			this->textBoxDateNaissanceClientUpdate->Size = System::Drawing::Size(220, 22);
			this->textBoxDateNaissanceClientUpdate->TabIndex = 7;
			// 
			// textBoxPrenomClientUpdate
			// 
			this->textBoxPrenomClientUpdate->Location = System::Drawing::Point(7, 154);
			this->textBoxPrenomClientUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomClientUpdate->Name = L"textBoxPrenomClientUpdate";
			this->textBoxPrenomClientUpdate->Size = System::Drawing::Size(220, 22);
			this->textBoxPrenomClientUpdate->TabIndex = 7;
			// 
			// textBoxNomClientUpdate
			// 
			this->textBoxNomClientUpdate->Location = System::Drawing::Point(8, 99);
			this->textBoxNomClientUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomClientUpdate->Name = L"textBoxNomClientUpdate";
			this->textBoxNomClientUpdate->Size = System::Drawing::Size(219, 22);
			this->textBoxNomClientUpdate->TabIndex = 6;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(5, 77);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(37, 17);
			this->label25->TabIndex = 8;
			this->label25->Text = L"Nom";
			// 
			// updateButtonClient
			// 
			this->updateButtonClient->Location = System::Drawing::Point(556, 269);
			this->updateButtonClient->Margin = System::Windows::Forms::Padding(4);
			this->updateButtonClient->Name = L"updateButtonClient";
			this->updateButtonClient->Size = System::Drawing::Size(164, 45);
			this->updateButtonClient->TabIndex = 4;
			this->updateButtonClient->Text = L"UPDATE";
			this->updateButtonClient->UseVisualStyleBackColor = true;
			this->updateButtonClient->Click += gcnew System::EventHandler(this, &MyForm::updateButtonClient_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(5, 131);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(57, 17);
			this->label26->TabIndex = 8;
			this->label26->Text = L"Prenom";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->textBoxIDClientDelete);
			this->tabPage7->Controls->Add(this->label27);
			this->tabPage7->Controls->Add(this->deleteButtonClient);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(724, 322);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Delete";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// textBoxIDClientDelete
			// 
			this->textBoxIDClientDelete->Location = System::Drawing::Point(157, 141);
			this->textBoxIDClientDelete->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIDClientDelete->Name = L"textBoxIDClientDelete";
			this->textBoxIDClientDelete->Size = System::Drawing::Size(391, 22);
			this->textBoxIDClientDelete->TabIndex = 9;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(344, 88);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(21, 17);
			this->label27->TabIndex = 10;
			this->label27->Text = L"ID";
			// 
			// deleteButtonClient
			// 
			this->deleteButtonClient->Location = System::Drawing::Point(553, 269);
			this->deleteButtonClient->Margin = System::Windows::Forms::Padding(4);
			this->deleteButtonClient->Name = L"deleteButtonClient";
			this->deleteButtonClient->Size = System::Drawing::Size(164, 45);
			this->deleteButtonClient->TabIndex = 3;
			this->deleteButtonClient->Text = L"DELETE";
			this->deleteButtonClient->UseVisualStyleBackColor = true;
			this->deleteButtonClient->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonClient_Click);
			// 
			// dgv_enr_client
			// 
			this->dgv_enr_client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_client->Location = System::Drawing::Point(5, 0);
			this->dgv_enr_client->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr_client->Name = L"dgv_enr_client";
			this->dgv_enr_client->RowHeadersWidth = 51;
			this->dgv_enr_client->Size = System::Drawing::Size(727, 341);
			this->dgv_enr_client->TabIndex = 11;
			// 
			// btn_load_client
			// 
			this->btn_load_client->Location = System::Drawing::Point(5, 356);
			this->btn_load_client->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_client->Name = L"btn_load_client";
			this->btn_load_client->Size = System::Drawing::Size(727, 65);
			this->btn_load_client->TabIndex = 12;
			this->btn_load_client->Text = L"Charger la base de données";
			this->btn_load_client->UseVisualStyleBackColor = true;
			this->btn_load_client->Click += gcnew System::EventHandler(this, &MyForm::btn_load_client_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl1);
			this->tabPage2->Controls->Add(this->dgv_enr_personnel);
			this->tabPage2->Controls->Add(this->btn_load_personnel);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(744, 1022);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->InsertTabClient);
			this->tabControl1->Controls->Add(this->UpdateTabClient);
			this->tabControl1->Controls->Add(this->DeleteTabClient);
			this->tabControl1->Location = System::Drawing::Point(5, 436);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(732, 351);
			this->tabControl1->TabIndex = 11;
			// 
			// InsertTabClient
			// 
			this->InsertTabClient->Controls->Add(this->comboBoxVillePersoInsert);
			this->InsertTabClient->Controls->Add(this->label6);
			this->InsertTabClient->Controls->Add(this->label7);
			this->InsertTabClient->Controls->Add(this->textBoxAdressePersoInsert);
			this->InsertTabClient->Controls->Add(this->label8);
			this->InsertTabClient->Controls->Add(this->numericUpDownPersoInsert);
			this->InsertTabClient->Controls->Add(this->label10);
			this->InsertTabClient->Controls->Add(this->textBoxIDSupPersoInsert);
			this->InsertTabClient->Controls->Add(this->label42);
			this->InsertTabClient->Controls->Add(this->textBoxDateEmbauchePersoInsert);
			this->InsertTabClient->Controls->Add(this->textBoxPrenomPersoInsert);
			this->InsertTabClient->Controls->Add(this->textBoxNomPersoInsert);
			this->InsertTabClient->Controls->Add(this->label46);
			this->InsertTabClient->Controls->Add(this->label47);
			this->InsertTabClient->Controls->Add(this->label48);
			this->InsertTabClient->Controls->Add(this->insertButtonPerso);
			this->InsertTabClient->Location = System::Drawing::Point(4, 25);
			this->InsertTabClient->Name = L"InsertTabClient";
			this->InsertTabClient->Padding = System::Windows::Forms::Padding(3);
			this->InsertTabClient->Size = System::Drawing::Size(724, 322);
			this->InsertTabClient->TabIndex = 0;
			this->InsertTabClient->Text = L"Insert";
			this->InsertTabClient->UseVisualStyleBackColor = true;
			// 
			// comboBoxVillePersoInsert
			// 
			this->comboBoxVillePersoInsert->FormattingEnabled = true;
			this->comboBoxVillePersoInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon", L"Rouen",
					L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->comboBoxVillePersoInsert->Location = System::Drawing::Point(617, 144);
			this->comboBoxVillePersoInsert->Name = L"comboBoxVillePersoInsert";
			this->comboBoxVillePersoInsert->Size = System::Drawing::Size(84, 24);
			this->comboBoxVillePersoInsert->TabIndex = 73;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(635, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 71;
			this->label6->Text = L"Ville";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(491, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 17);
			this->label7->TabIndex = 70;
			this->label7->Text = L"Adresse";
			// 
			// textBoxAdressePersoInsert
			// 
			this->textBoxAdressePersoInsert->Location = System::Drawing::Point(459, 144);
			this->textBoxAdressePersoInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdressePersoInsert->Name = L"textBoxAdressePersoInsert";
			this->textBoxAdressePersoInsert->Size = System::Drawing::Size(133, 22);
			this->textBoxAdressePersoInsert->TabIndex = 69;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(380, 123);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 17);
			this->label8->TabIndex = 68;
			this->label8->Text = L"N°";
			// 
			// numericUpDownPersoInsert
			// 
			this->numericUpDownPersoInsert->Location = System::Drawing::Point(360, 144);
			this->numericUpDownPersoInsert->Name = L"numericUpDownPersoInsert";
			this->numericUpDownPersoInsert->Size = System::Drawing::Size(69, 22);
			this->numericUpDownPersoInsert->TabIndex = 67;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(469, 76);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 17);
			this->label10->TabIndex = 66;
			this->label10->Text = L"Adresse";
			// 
			// textBoxIDSupPersoInsert
			// 
			this->textBoxIDSupPersoInsert->Location = System::Drawing::Point(23, 236);
			this->textBoxIDSupPersoInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIDSupPersoInsert->Name = L"textBoxIDSupPersoInsert";
			this->textBoxIDSupPersoInsert->Size = System::Drawing::Size(288, 22);
			this->textBoxIDSupPersoInsert->TabIndex = 57;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(20, 216);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(85, 17);
			this->label42->TabIndex = 61;
			this->label42->Text = L"ID supérieur";
			// 
			// textBoxDateEmbauchePersoInsert
			// 
			this->textBoxDateEmbauchePersoInsert->Location = System::Drawing::Point(21, 180);
			this->textBoxDateEmbauchePersoInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDateEmbauchePersoInsert->Name = L"textBoxDateEmbauchePersoInsert";
			this->textBoxDateEmbauchePersoInsert->Size = System::Drawing::Size(289, 22);
			this->textBoxDateEmbauchePersoInsert->TabIndex = 60;
			// 
			// textBoxPrenomPersoInsert
			// 
			this->textBoxPrenomPersoInsert->Location = System::Drawing::Point(21, 118);
			this->textBoxPrenomPersoInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomPersoInsert->Name = L"textBoxPrenomPersoInsert";
			this->textBoxPrenomPersoInsert->Size = System::Drawing::Size(289, 22);
			this->textBoxPrenomPersoInsert->TabIndex = 59;
			// 
			// textBoxNomPersoInsert
			// 
			this->textBoxNomPersoInsert->Location = System::Drawing::Point(21, 61);
			this->textBoxNomPersoInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomPersoInsert->Name = L"textBoxNomPersoInsert";
			this->textBoxNomPersoInsert->Size = System::Drawing::Size(289, 22);
			this->textBoxNomPersoInsert->TabIndex = 58;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(19, 159);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(271, 17);
			this->label46->TabIndex = 62;
			this->label46->Text = L"Date d\'embauche (Format : AAAA-MM-JJ)";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(20, 40);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(37, 17);
			this->label47->TabIndex = 65;
			this->label47->Text = L"Nom";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(19, 93);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(57, 17);
			this->label48->TabIndex = 64;
			this->label48->Text = L"Prenom";
			// 
			// insertButtonPerso
			// 
			this->insertButtonPerso->Location = System::Drawing::Point(553, 269);
			this->insertButtonPerso->Margin = System::Windows::Forms::Padding(4);
			this->insertButtonPerso->Name = L"insertButtonPerso";
			this->insertButtonPerso->Size = System::Drawing::Size(164, 45);
			this->insertButtonPerso->TabIndex = 2;
			this->insertButtonPerso->Text = L"INSERT";
			this->insertButtonPerso->UseVisualStyleBackColor = true;
			this->insertButtonPerso->Click += gcnew System::EventHandler(this, &MyForm::insertButtonPerso_Click);
			// 
			// UpdateTabClient
			// 
			this->UpdateTabClient->Controls->Add(this->comboBoxVillePersoUpdate);
			this->UpdateTabClient->Controls->Add(this->label1);
			this->UpdateTabClient->Controls->Add(this->label2);
			this->UpdateTabClient->Controls->Add(this->updateButtonPerso);
			this->UpdateTabClient->Controls->Add(this->textBoxAdressePersoUpdate);
			this->UpdateTabClient->Controls->Add(this->label3);
			this->UpdateTabClient->Controls->Add(this->numericUpDownPersoUpdate);
			this->UpdateTabClient->Controls->Add(this->label4);
			this->UpdateTabClient->Controls->Add(this->textBoxIDSupPersoUpdate);
			this->UpdateTabClient->Controls->Add(this->label5);
			this->UpdateTabClient->Controls->Add(this->textBoxIDPersoUpdate);
			this->UpdateTabClient->Controls->Add(this->label9);
			this->UpdateTabClient->Controls->Add(this->textBoxDateEmbauchePersoUpdate);
			this->UpdateTabClient->Controls->Add(this->textBoxPrenomPersoUpdate);
			this->UpdateTabClient->Controls->Add(this->textBoxNomPersoUpdate);
			this->UpdateTabClient->Controls->Add(this->label18);
			this->UpdateTabClient->Controls->Add(this->label16);
			this->UpdateTabClient->Controls->Add(this->label17);
			this->UpdateTabClient->Location = System::Drawing::Point(4, 25);
			this->UpdateTabClient->Name = L"UpdateTabClient";
			this->UpdateTabClient->Padding = System::Windows::Forms::Padding(3);
			this->UpdateTabClient->Size = System::Drawing::Size(724, 322);
			this->UpdateTabClient->TabIndex = 1;
			this->UpdateTabClient->Text = L"Update";
			this->UpdateTabClient->UseVisualStyleBackColor = true;
			// 
			// comboBoxVillePersoUpdate
			// 
			this->comboBoxVillePersoUpdate->FormattingEnabled = true;
			this->comboBoxVillePersoUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon", L"Rouen",
					L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->comboBoxVillePersoUpdate->Location = System::Drawing::Point(607, 141);
			this->comboBoxVillePersoUpdate->Name = L"comboBoxVillePersoUpdate";
			this->comboBoxVillePersoUpdate->Size = System::Drawing::Size(84, 24);
			this->comboBoxVillePersoUpdate->TabIndex = 74;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(627, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 17);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Ville";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(483, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 17);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Adresse";
			// 
			// updateButtonPerso
			// 
			this->updateButtonPerso->Location = System::Drawing::Point(553, 269);
			this->updateButtonPerso->Margin = System::Windows::Forms::Padding(4);
			this->updateButtonPerso->Name = L"updateButtonPerso";
			this->updateButtonPerso->Size = System::Drawing::Size(164, 45);
			this->updateButtonPerso->TabIndex = 4;
			this->updateButtonPerso->Text = L"UPDATE";
			this->updateButtonPerso->UseVisualStyleBackColor = true;
			this->updateButtonPerso->Click += gcnew System::EventHandler(this, &MyForm::updateButtonPerso_Click);
			// 
			// textBoxAdressePersoUpdate
			// 
			this->textBoxAdressePersoUpdate->Location = System::Drawing::Point(451, 141);
			this->textBoxAdressePersoUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdressePersoUpdate->Name = L"textBoxAdressePersoUpdate";
			this->textBoxAdressePersoUpdate->Size = System::Drawing::Size(133, 22);
			this->textBoxAdressePersoUpdate->TabIndex = 52;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(372, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 51;
			this->label3->Text = L"N°";
			// 
			// numericUpDownPersoUpdate
			// 
			this->numericUpDownPersoUpdate->Location = System::Drawing::Point(352, 141);
			this->numericUpDownPersoUpdate->Name = L"numericUpDownPersoUpdate";
			this->numericUpDownPersoUpdate->Size = System::Drawing::Size(69, 22);
			this->numericUpDownPersoUpdate->TabIndex = 50;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(461, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 17);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Adresse";
			// 
			// textBoxIDSupPersoUpdate
			// 
			this->textBoxIDSupPersoUpdate->Location = System::Drawing::Point(9, 269);
			this->textBoxIDSupPersoUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIDSupPersoUpdate->Name = L"textBoxIDSupPersoUpdate";
			this->textBoxIDSupPersoUpdate->Size = System::Drawing::Size(288, 22);
			this->textBoxIDSupPersoUpdate->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ID supérieur";
			// 
			// textBoxIDPersoUpdate
			// 
			this->textBoxIDPersoUpdate->Location = System::Drawing::Point(9, 48);
			this->textBoxIDPersoUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIDPersoUpdate->Name = L"textBoxIDPersoUpdate";
			this->textBoxIDPersoUpdate->Size = System::Drawing::Size(288, 22);
			this->textBoxIDPersoUpdate->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(5, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"ID";
			// 
			// textBoxDateEmbauchePersoUpdate
			// 
			this->textBoxDateEmbauchePersoUpdate->Location = System::Drawing::Point(7, 213);
			this->textBoxDateEmbauchePersoUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDateEmbauchePersoUpdate->Name = L"textBoxDateEmbauchePersoUpdate";
			this->textBoxDateEmbauchePersoUpdate->Size = System::Drawing::Size(289, 22);
			this->textBoxDateEmbauchePersoUpdate->TabIndex = 7;
			// 
			// textBoxPrenomPersoUpdate
			// 
			this->textBoxPrenomPersoUpdate->Location = System::Drawing::Point(7, 152);
			this->textBoxPrenomPersoUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomPersoUpdate->Name = L"textBoxPrenomPersoUpdate";
			this->textBoxPrenomPersoUpdate->Size = System::Drawing::Size(289, 22);
			this->textBoxPrenomPersoUpdate->TabIndex = 7;
			// 
			// textBoxNomPersoUpdate
			// 
			this->textBoxNomPersoUpdate->Location = System::Drawing::Point(8, 95);
			this->textBoxNomPersoUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomPersoUpdate->Name = L"textBoxNomPersoUpdate";
			this->textBoxNomPersoUpdate->Size = System::Drawing::Size(289, 22);
			this->textBoxNomPersoUpdate->TabIndex = 6;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(4, 192);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(271, 17);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Date d\'embauche (Format : AAAA-MM-JJ)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 74);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 17);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Nom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(5, 127);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 17);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Prenom";
			// 
			// DeleteTabClient
			// 
			this->DeleteTabClient->Controls->Add(this->textBoxIDPersoDelete);
			this->DeleteTabClient->Controls->Add(this->label19);
			this->DeleteTabClient->Controls->Add(this->deleteButtonPerso);
			this->DeleteTabClient->Location = System::Drawing::Point(4, 25);
			this->DeleteTabClient->Name = L"DeleteTabClient";
			this->DeleteTabClient->Padding = System::Windows::Forms::Padding(3);
			this->DeleteTabClient->Size = System::Drawing::Size(724, 322);
			this->DeleteTabClient->TabIndex = 2;
			this->DeleteTabClient->Text = L"Delete";
			this->DeleteTabClient->UseVisualStyleBackColor = true;
			// 
			// textBoxIDPersoDelete
			// 
			this->textBoxIDPersoDelete->Location = System::Drawing::Point(175, 159);
			this->textBoxIDPersoDelete->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIDPersoDelete->Name = L"textBoxIDPersoDelete";
			this->textBoxIDPersoDelete->Size = System::Drawing::Size(391, 22);
			this->textBoxIDPersoDelete->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(361, 115);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(21, 17);
			this->label19->TabIndex = 10;
			this->label19->Text = L"ID";
			// 
			// deleteButtonPerso
			// 
			this->deleteButtonPerso->Location = System::Drawing::Point(553, 269);
			this->deleteButtonPerso->Margin = System::Windows::Forms::Padding(4);
			this->deleteButtonPerso->Name = L"deleteButtonPerso";
			this->deleteButtonPerso->Size = System::Drawing::Size(164, 45);
			this->deleteButtonPerso->TabIndex = 3;
			this->deleteButtonPerso->Text = L"DELETE";
			this->deleteButtonPerso->UseVisualStyleBackColor = true;
			this->deleteButtonPerso->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonPerso_Click);
			// 
			// dgv_enr_personnel
			// 
			this->dgv_enr_personnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_personnel->Location = System::Drawing::Point(5, 8);
			this->dgv_enr_personnel->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr_personnel->Name = L"dgv_enr_personnel";
			this->dgv_enr_personnel->RowHeadersWidth = 51;
			this->dgv_enr_personnel->Size = System::Drawing::Size(727, 341);
			this->dgv_enr_personnel->TabIndex = 0;
			// 
			// btn_load_personnel
			// 
			this->btn_load_personnel->Location = System::Drawing::Point(5, 356);
			this->btn_load_personnel->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_personnel->Name = L"btn_load_personnel";
			this->btn_load_personnel->Size = System::Drawing::Size(727, 65);
			this->btn_load_personnel->TabIndex = 1;
			this->btn_load_personnel->Text = L"Charger la base de données";
			this->btn_load_personnel->UseVisualStyleBackColor = true;
			this->btn_load_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_load_personnel_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl3);
			this->tabPage3->Controls->Add(this->dgv_enr_stock);
			this->tabPage3->Controls->Add(this->btn_load_stock);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(744, 869);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Stock";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Location = System::Drawing::Point(8, 426);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(732, 351);
			this->tabControl3->TabIndex = 28;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->label59);
			this->tabPage9->Controls->Add(this->textBoxPrixAchatStockInsert);
			this->tabPage9->Controls->Add(this->label52);
			this->tabPage9->Controls->Add(this->label66);
			this->tabPage9->Controls->Add(this->label53);
			this->tabPage9->Controls->Add(this->textBoxPrixProStockInsert);
			this->tabPage9->Controls->Add(this->textBoxQuantSStockInsert);
			this->tabPage9->Controls->Add(this->textBoxSeuilReapStockInsert);
			this->tabPage9->Controls->Add(this->textBoxNomStockInsert);
			this->tabPage9->Controls->Add(this->label54);
			this->tabPage9->Controls->Add(this->insertButtonStock);
			this->tabPage9->Location = System::Drawing::Point(4, 25);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(724, 322);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"Insert";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(207, 232);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(81, 17);
			this->label59->TabIndex = 66;
			this->label59->Text = L"Prix d\'achat";
			// 
			// textBoxPrixAchatStockInsert
			// 
			this->textBoxPrixAchatStockInsert->Location = System::Drawing::Point(211, 252);
			this->textBoxPrixAchatStockInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrixAchatStockInsert->Name = L"textBoxPrixAchatStockInsert";
			this->textBoxPrixAchatStockInsert->Size = System::Drawing::Size(289, 22);
			this->textBoxPrixAchatStockInsert->TabIndex = 67;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(207, 177);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(196, 17);
			this->label52->TabIndex = 29;
			this->label52->Text = L"Seuil de réapprovisionnement";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(207, 123);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(99, 17);
			this->label66->TabIndex = 29;
			this->label66->Text = L"Prix du produit";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(207, 72);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(99, 17);
			this->label53->TabIndex = 29;
			this->label53->Text = L"Quantité stock";
			// 
			// textBoxPrixProStockInsert
			// 
			this->textBoxPrixProStockInsert->Location = System::Drawing::Point(211, 143);
			this->textBoxPrixProStockInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrixProStockInsert->Name = L"textBoxPrixProStockInsert";
			this->textBoxPrixProStockInsert->Size = System::Drawing::Size(288, 22);
			this->textBoxPrixProStockInsert->TabIndex = 57;
			// 
			// textBoxQuantSStockInsert
			// 
			this->textBoxQuantSStockInsert->Location = System::Drawing::Point(211, 92);
			this->textBoxQuantSStockInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxQuantSStockInsert->Name = L"textBoxQuantSStockInsert";
			this->textBoxQuantSStockInsert->Size = System::Drawing::Size(289, 22);
			this->textBoxQuantSStockInsert->TabIndex = 60;
			// 
			// textBoxSeuilReapStockInsert
			// 
			this->textBoxSeuilReapStockInsert->Location = System::Drawing::Point(211, 197);
			this->textBoxSeuilReapStockInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxSeuilReapStockInsert->Name = L"textBoxSeuilReapStockInsert";
			this->textBoxSeuilReapStockInsert->Size = System::Drawing::Size(289, 22);
			this->textBoxSeuilReapStockInsert->TabIndex = 59;
			// 
			// textBoxNomStockInsert
			// 
			this->textBoxNomStockInsert->Location = System::Drawing::Point(211, 37);
			this->textBoxNomStockInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomStockInsert->Name = L"textBoxNomStockInsert";
			this->textBoxNomStockInsert->Size = System::Drawing::Size(289, 22);
			this->textBoxNomStockInsert->TabIndex = 58;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(207, 10);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(37, 17);
			this->label54->TabIndex = 65;
			this->label54->Text = L"Nom";
			// 
			// insertButtonStock
			// 
			this->insertButtonStock->Location = System::Drawing::Point(551, 269);
			this->insertButtonStock->Margin = System::Windows::Forms::Padding(4);
			this->insertButtonStock->Name = L"insertButtonStock";
			this->insertButtonStock->Size = System::Drawing::Size(164, 45);
			this->insertButtonStock->TabIndex = 2;
			this->insertButtonStock->Text = L"INSERT";
			this->insertButtonStock->UseVisualStyleBackColor = true;
			this->insertButtonStock->Click += gcnew System::EventHandler(this, &MyForm::insertButtonStock_Click);
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->label61);
			this->tabPage10->Controls->Add(this->textBoxPrixAchatStockUpdate);
			this->tabPage10->Controls->Add(this->textBoxRefStockUpdate);
			this->tabPage10->Controls->Add(this->label55);
			this->tabPage10->Controls->Add(this->updateButtonStock);
			this->tabPage10->Controls->Add(this->label45);
			this->tabPage10->Controls->Add(this->label49);
			this->tabPage10->Controls->Add(this->label50);
			this->tabPage10->Controls->Add(this->textBoxPrixProStockUpdate);
			this->tabPage10->Controls->Add(this->textBoxQuantSStockUpdate);
			this->tabPage10->Controls->Add(this->textBoxSeuilReapStockUpdate);
			this->tabPage10->Location = System::Drawing::Point(4, 25);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(724, 322);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Update";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(187, 237);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(81, 17);
			this->label61->TabIndex = 75;
			this->label61->Text = L"Prix d\'achat";
			// 
			// textBoxPrixAchatStockUpdate
			// 
			this->textBoxPrixAchatStockUpdate->Location = System::Drawing::Point(191, 257);
			this->textBoxPrixAchatStockUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrixAchatStockUpdate->Name = L"textBoxPrixAchatStockUpdate";
			this->textBoxPrixAchatStockUpdate->Size = System::Drawing::Size(289, 22);
			this->textBoxPrixAchatStockUpdate->TabIndex = 76;
			// 
			// textBoxRefStockUpdate
			// 
			this->textBoxRefStockUpdate->Location = System::Drawing::Point(191, 23);
			this->textBoxRefStockUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxRefStockUpdate->Name = L"textBoxRefStockUpdate";
			this->textBoxRefStockUpdate->Size = System::Drawing::Size(289, 22);
			this->textBoxRefStockUpdate->TabIndex = 29;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(187, 3);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(74, 17);
			this->label55->TabIndex = 30;
			this->label55->Text = L"Référence";
			// 
			// updateButtonStock
			// 
			this->updateButtonStock->Location = System::Drawing::Point(551, 267);
			this->updateButtonStock->Margin = System::Windows::Forms::Padding(4);
			this->updateButtonStock->Name = L"updateButtonStock";
			this->updateButtonStock->Size = System::Drawing::Size(164, 45);
			this->updateButtonStock->TabIndex = 74;
			this->updateButtonStock->Text = L"UPDATE";
			this->updateButtonStock->UseVisualStyleBackColor = true;
			this->updateButtonStock->Click += gcnew System::EventHandler(this, &MyForm::updateButtonStock_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(187, 177);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(196, 17);
			this->label45->TabIndex = 66;
			this->label45->Text = L"Seuil de réapprovisionnement";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(187, 113);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(99, 17);
			this->label49->TabIndex = 67;
			this->label49->Text = L"Prix du produit";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(187, 55);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(99, 17);
			this->label50->TabIndex = 68;
			this->label50->Text = L"Quantité stock";
			// 
			// textBoxPrixProStockUpdate
			// 
			this->textBoxPrixProStockUpdate->Location = System::Drawing::Point(191, 141);
			this->textBoxPrixProStockUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrixProStockUpdate->Name = L"textBoxPrixProStockUpdate";
			this->textBoxPrixProStockUpdate->Size = System::Drawing::Size(288, 22);
			this->textBoxPrixProStockUpdate->TabIndex = 69;
			// 
			// textBoxQuantSStockUpdate
			// 
			this->textBoxQuantSStockUpdate->Location = System::Drawing::Point(191, 75);
			this->textBoxQuantSStockUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxQuantSStockUpdate->Name = L"textBoxQuantSStockUpdate";
			this->textBoxQuantSStockUpdate->Size = System::Drawing::Size(289, 22);
			this->textBoxQuantSStockUpdate->TabIndex = 72;
			// 
			// textBoxSeuilReapStockUpdate
			// 
			this->textBoxSeuilReapStockUpdate->Location = System::Drawing::Point(191, 204);
			this->textBoxSeuilReapStockUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxSeuilReapStockUpdate->Name = L"textBoxSeuilReapStockUpdate";
			this->textBoxSeuilReapStockUpdate->Size = System::Drawing::Size(289, 22);
			this->textBoxSeuilReapStockUpdate->TabIndex = 71;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->textBoxIDStockDelete);
			this->tabPage11->Controls->Add(this->label65);
			this->tabPage11->Controls->Add(this->deleteButtonStock);
			this->tabPage11->Location = System::Drawing::Point(4, 25);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(724, 322);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Delete";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// textBoxIDStockDelete
			// 
			this->textBoxIDStockDelete->Location = System::Drawing::Point(175, 159);
			this->textBoxIDStockDelete->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIDStockDelete->Name = L"textBoxIDStockDelete";
			this->textBoxIDStockDelete->Size = System::Drawing::Size(391, 22);
			this->textBoxIDStockDelete->TabIndex = 9;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(322, 126);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(74, 17);
			this->label65->TabIndex = 10;
			this->label65->Text = L"Reference\r\n";
			// 
			// deleteButtonStock
			// 
			this->deleteButtonStock->Location = System::Drawing::Point(553, 269);
			this->deleteButtonStock->Margin = System::Windows::Forms::Padding(4);
			this->deleteButtonStock->Name = L"deleteButtonStock";
			this->deleteButtonStock->Size = System::Drawing::Size(164, 45);
			this->deleteButtonStock->TabIndex = 3;
			this->deleteButtonStock->Text = L"DELETE";
			this->deleteButtonStock->UseVisualStyleBackColor = true;
			this->deleteButtonStock->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonStock_Click);
			// 
			// dgv_enr_stock
			// 
			this->dgv_enr_stock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_stock->Location = System::Drawing::Point(9, 6);
			this->dgv_enr_stock->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr_stock->Name = L"dgv_enr_stock";
			this->dgv_enr_stock->RowHeadersWidth = 51;
			this->dgv_enr_stock->Size = System::Drawing::Size(727, 341);
			this->dgv_enr_stock->TabIndex = 11;
			// 
			// btn_load_stock
			// 
			this->btn_load_stock->Location = System::Drawing::Point(8, 355);
			this->btn_load_stock->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_stock->Name = L"btn_load_stock";
			this->btn_load_stock->Size = System::Drawing::Size(727, 65);
			this->btn_load_stock->TabIndex = 12;
			this->btn_load_stock->Text = L"Charger la base de données";
			this->btn_load_stock->UseVisualStyleBackColor = true;
			this->btn_load_stock->Click += gcnew System::EventHandler(this, &MyForm::btn_load_stock_Click);
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->label11);
			this->tabPage8->Controls->Add(this->textBoxIDClientCommande);
			this->tabPage8->Controls->Add(this->tabControl4);
			this->tabPage8->Controls->Add(this->dgv_enr_commande);
			this->tabPage8->Controls->Add(this->btn_load_commande);
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(744, 869);
			this->tabPage8->TabIndex = 4;
			this->tabPage8->Text = L"Commande";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(223, 276);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 17);
			this->label11->TabIndex = 32;
			this->label11->Text = L"IDClient";
			// 
			// textBoxIDClientCommande
			// 
			this->textBoxIDClientCommande->Location = System::Drawing::Point(226, 303);
			this->textBoxIDClientCommande->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIDClientCommande->Name = L"textBoxIDClientCommande";
			this->textBoxIDClientCommande->Size = System::Drawing::Size(220, 22);
			this->textBoxIDClientCommande->TabIndex = 31;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage12);
			this->tabControl4->Controls->Add(this->tabPage13);
			this->tabControl4->Controls->Add(this->tabPage14);
			this->tabControl4->Controls->Add(this->tabPage15);
			this->tabControl4->Location = System::Drawing::Point(6, 404);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(738, 439);
			this->tabControl4->TabIndex = 29;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->label58);
			this->tabPage12->Controls->Add(this->textBoxDateLivComInsert);
			this->tabPage12->Controls->Add(this->textBoxIDComInsert);
			this->tabPage12->Controls->Add(this->label60);
			this->tabPage12->Controls->Add(this->insertButtonCommande);
			this->tabPage12->Location = System::Drawing::Point(4, 25);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(724, 591);
			this->tabPage12->TabIndex = 0;
			this->tabPage12->Text = L"Insert";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(230, 104);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(56, 17);
			this->label58->TabIndex = 32;
			this->label58->Text = L"IDClient";
			// 
			// textBoxDateLivComInsert
			// 
			this->textBoxDateLivComInsert->Location = System::Drawing::Point(232, 211);
			this->textBoxDateLivComInsert->Name = L"textBoxDateLivComInsert";
			this->textBoxDateLivComInsert->Size = System::Drawing::Size(177, 22);
			this->textBoxDateLivComInsert->TabIndex = 30;
			// 
			// textBoxIDComInsert
			// 
			this->textBoxIDComInsert->Location = System::Drawing::Point(232, 121);
			this->textBoxIDComInsert->Name = L"textBoxIDComInsert";
			this->textBoxIDComInsert->Size = System::Drawing::Size(177, 22);
			this->textBoxIDComInsert->TabIndex = 31;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(229, 191);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(266, 17);
			this->label60->TabIndex = 32;
			this->label60->Text = L"Date de livraison (Format : AAAA-MM-JJ)";
			// 
			// insertButtonCommande
			// 
			this->insertButtonCommande->Location = System::Drawing::Point(553, 269);
			this->insertButtonCommande->Margin = System::Windows::Forms::Padding(4);
			this->insertButtonCommande->Name = L"insertButtonCommande";
			this->insertButtonCommande->Size = System::Drawing::Size(164, 45);
			this->insertButtonCommande->TabIndex = 2;
			this->insertButtonCommande->Text = L"INSERT";
			this->insertButtonCommande->UseVisualStyleBackColor = true;
			this->insertButtonCommande->Click += gcnew System::EventHandler(this, &MyForm::insertButtonCommande_Click);
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->textBoxRefComUpdate);
			this->tabPage13->Controls->Add(this->label72);
			this->tabPage13->Controls->Add(this->textBoxDateLivrComUpdate);
			this->tabPage13->Controls->Add(this->updateButtonCommande);
			this->tabPage13->Controls->Add(this->label74);
			this->tabPage13->Location = System::Drawing::Point(4, 25);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(724, 591);
			this->tabPage13->TabIndex = 1;
			this->tabPage13->Text = L"Update";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// textBoxRefComUpdate
			// 
			this->textBoxRefComUpdate->Location = System::Drawing::Point(244, 95);
			this->textBoxRefComUpdate->Name = L"textBoxRefComUpdate";
			this->textBoxRefComUpdate->Size = System::Drawing::Size(220, 22);
			this->textBoxRefComUpdate->TabIndex = 5;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(243, 75);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(147, 17);
			this->label72->TabIndex = 8;
			this->label72->Text = L"Reference commande\r\n";
			// 
			// textBoxDateLivrComUpdate
			// 
			this->textBoxDateLivrComUpdate->Location = System::Drawing::Point(244, 198);
			this->textBoxDateLivrComUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDateLivrComUpdate->Name = L"textBoxDateLivrComUpdate";
			this->textBoxDateLivrComUpdate->Size = System::Drawing::Size(220, 22);
			this->textBoxDateLivrComUpdate->TabIndex = 7;
			// 
			// updateButtonCommande
			// 
			this->updateButtonCommande->Location = System::Drawing::Point(553, 270);
			this->updateButtonCommande->Margin = System::Windows::Forms::Padding(4);
			this->updateButtonCommande->Name = L"updateButtonCommande";
			this->updateButtonCommande->Size = System::Drawing::Size(164, 45);
			this->updateButtonCommande->TabIndex = 4;
			this->updateButtonCommande->Text = L"UPDATE";
			this->updateButtonCommande->UseVisualStyleBackColor = true;
			this->updateButtonCommande->Click += gcnew System::EventHandler(this, &MyForm::updateButtonCommande_Click);
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(241, 177);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(266, 17);
			this->label74->TabIndex = 8;
			this->label74->Text = L"Date de livraison (Format : AAAA-MM-JJ)";
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->textBoxRefComDelete);
			this->tabPage14->Controls->Add(this->label75);
			this->tabPage14->Controls->Add(this->deleteButtonCommande);
			this->tabPage14->Location = System::Drawing::Point(4, 25);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(724, 591);
			this->tabPage14->TabIndex = 2;
			this->tabPage14->Text = L"Delete";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// textBoxRefComDelete
			// 
			this->textBoxRefComDelete->Location = System::Drawing::Point(230, 179);
			this->textBoxRefComDelete->Name = L"textBoxRefComDelete";
			this->textBoxRefComDelete->Size = System::Drawing::Size(262, 22);
			this->textBoxRefComDelete->TabIndex = 9;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(290, 142);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(147, 17);
			this->label75->TabIndex = 10;
			this->label75->Text = L"Reference commande";
			// 
			// deleteButtonCommande
			// 
			this->deleteButtonCommande->Location = System::Drawing::Point(553, 269);
			this->deleteButtonCommande->Margin = System::Windows::Forms::Padding(4);
			this->deleteButtonCommande->Name = L"deleteButtonCommande";
			this->deleteButtonCommande->Size = System::Drawing::Size(164, 45);
			this->deleteButtonCommande->TabIndex = 3;
			this->deleteButtonCommande->Text = L"DELETE";
			this->deleteButtonCommande->UseVisualStyleBackColor = true;
			this->deleteButtonCommande->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonCommande_Click);
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->label68);
			this->tabPage15->Controls->Add(this->textBoxRefArtPanier);
			this->tabPage15->Controls->Add(this->label63);
			this->tabPage15->Controls->Add(this->buttonSupprimerPanier);
			this->tabPage15->Controls->Add(this->textBoxCouleurPanier);
			this->tabPage15->Controls->Add(this->label69);
			this->tabPage15->Controls->Add(this->textBoxRefComPanier);
			this->tabPage15->Controls->Add(this->comboBoxArticlePanier);
			this->tabPage15->Controls->Add(this->label64);
			this->tabPage15->Controls->Add(this->label70);
			this->tabPage15->Controls->Add(this->label62);
			this->tabPage15->Controls->Add(this->buttonAjouterPanier);
			this->tabPage15->Controls->Add(this->numericUpDownQuantitePanier);
			this->tabPage15->Controls->Add(this->label67);
			this->tabPage15->Location = System::Drawing::Point(4, 25);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(730, 410);
			this->tabPage15->TabIndex = 3;
			this->tabPage15->Text = L"Panier";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// textBoxRefComPanier
			// 
			this->textBoxRefComPanier->Location = System::Drawing::Point(258, 57);
			this->textBoxRefComPanier->Name = L"textBoxRefComPanier";
			this->textBoxRefComPanier->Size = System::Drawing::Size(220, 22);
			this->textBoxRefComPanier->TabIndex = 9;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(274, 22);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(188, 17);
			this->label70->TabIndex = 67;
			this->label70->Text = L"Référence de commande";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(47, 149);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(133, 17);
			this->label63->TabIndex = 67;
			this->label63->Text = L"Ajouter un article";
			// 
			// textBoxCouleurPanier
			// 
			this->textBoxCouleurPanier->Location = System::Drawing::Point(276, 232);
			this->textBoxCouleurPanier->Name = L"textBoxCouleurPanier";
			this->textBoxCouleurPanier->Size = System::Drawing::Size(88, 22);
			this->textBoxCouleurPanier->TabIndex = 74;
			// 
			// comboBoxArticlePanier
			// 
			this->comboBoxArticlePanier->FormattingEnabled = true;
			this->comboBoxArticlePanier->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Résistance (10)", L"Condensateur (40)",
					L"Diode (30)", L"Transistor (4)", L"Microprocesseur", L"Capteur BME280", L"LED (20)", L"Fusible", L"Capteur de pression", L"Capteur optique",
					L"Interrupteur (10)", L"Potentiomètre", L"Plaquette (2)", L"Afficheur LCD", L"Arduino UNO"
			});
			this->comboBoxArticlePanier->Location = System::Drawing::Point(50, 230);
			this->comboBoxArticlePanier->Name = L"comboBoxArticlePanier";
			this->comboBoxArticlePanier->Size = System::Drawing::Size(130, 24);
			this->comboBoxArticlePanier->TabIndex = 68;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(47, 210);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(47, 17);
			this->label64->TabIndex = 69;
			this->label64->Text = L"Article";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(273, 212);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(57, 17);
			this->label62->TabIndex = 73;
			this->label62->Text = L"Couleur";
			// 
			// numericUpDownQuantitePanier
			// 
			this->numericUpDownQuantitePanier->Location = System::Drawing::Point(195, 232);
			this->numericUpDownQuantitePanier->Name = L"numericUpDownQuantitePanier";
			this->numericUpDownQuantitePanier->Size = System::Drawing::Size(44, 22);
			this->numericUpDownQuantitePanier->TabIndex = 70;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(192, 212);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(62, 17);
			this->label67->TabIndex = 71;
			this->label67->Text = L"Quantité";
			// 
			// buttonAjouterPanier
			// 
			this->buttonAjouterPanier->Location = System::Drawing::Point(50, 299);
			this->buttonAjouterPanier->Name = L"buttonAjouterPanier";
			this->buttonAjouterPanier->Size = System::Drawing::Size(314, 46);
			this->buttonAjouterPanier->TabIndex = 72;
			this->buttonAjouterPanier->Text = L"Ajouter au panier";
			this->buttonAjouterPanier->UseVisualStyleBackColor = true;
			this->buttonAjouterPanier->Click += gcnew System::EventHandler(this, &MyForm::buttonAjouterPanier_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(471, 149);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(131, 17);
			this->label68->TabIndex = 67;
			this->label68->Text = L"Retirer un article";
			// 
			// textBoxRefArtPanier
			// 
			this->textBoxRefArtPanier->Location = System::Drawing::Point(474, 229);
			this->textBoxRefArtPanier->Name = L"textBoxRefArtPanier";
			this->textBoxRefArtPanier->Size = System::Drawing::Size(169, 22);
			this->textBoxRefArtPanier->TabIndex = 74;
			// 
			// buttonSupprimerPanier
			// 
			this->buttonSupprimerPanier->Location = System::Drawing::Point(471, 299);
			this->buttonSupprimerPanier->Name = L"buttonSupprimerPanier";
			this->buttonSupprimerPanier->Size = System::Drawing::Size(241, 46);
			this->buttonSupprimerPanier->TabIndex = 72;
			this->buttonSupprimerPanier->Text = L"Supprimer du panier";
			this->buttonSupprimerPanier->UseVisualStyleBackColor = true;
			this->buttonSupprimerPanier->Click += gcnew System::EventHandler(this, &MyForm::buttonSupprimerPanier_Click);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(471, 210);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(116, 17);
			this->label69->TabIndex = 73;
			this->label69->Text = L"Référence article";
			// 
			// dgv_enr_commande
			// 
			this->dgv_enr_commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_commande->Location = System::Drawing::Point(6, 12);
			this->dgv_enr_commande->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr_commande->Name = L"dgv_enr_commande";
			this->dgv_enr_commande->RowHeadersWidth = 51;
			this->dgv_enr_commande->Size = System::Drawing::Size(727, 248);
			this->dgv_enr_commande->TabIndex = 27;
			// 
			// btn_load_commande
			// 
			this->btn_load_commande->Location = System::Drawing::Point(5, 333);
			this->btn_load_commande->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_commande->Name = L"btn_load_commande";
			this->btn_load_commande->Size = System::Drawing::Size(727, 54);
			this->btn_load_commande->TabIndex = 28;
			this->btn_load_commande->Text = L"Charger la base de données";
			this->btn_load_commande->UseVisualStyleBackColor = true;
			this->btn_load_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_load_commande_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label57);
			this->tabPage4->Controls->Add(this->label56);
			this->tabPage4->Controls->Add(this->label51);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->textBoxIDStat);
			this->tabPage4->Controls->Add(this->numericUpDownRemiseStat);
			this->tabPage4->Controls->Add(this->numericUpDownDemarqueStat);
			this->tabPage4->Controls->Add(this->numericUpDownMargeStat);
			this->tabPage4->Controls->Add(this->numericUpDownTVAStat);
			this->tabPage4->Controls->Add(this->numericUpDownMoisStat);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->articlePlusVendusButton);
			this->tabPage4->Controls->Add(this->articleMoinsVendusButton);
			this->tabPage4->Controls->Add(this->simulationButton);
			this->tabPage4->Controls->Add(this->seuilButton);
			this->tabPage4->Controls->Add(this->achatButton);
			this->tabPage4->Controls->Add(this->valeurAchatStockButton);
			this->tabPage4->Controls->Add(this->valeurComStockButton);
			this->tabPage4->Controls->Add(this->CAButton);
			this->tabPage4->Controls->Add(this->panierMoyenButton);
			this->tabPage4->Controls->Add(this->dgv_enr_stat);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(744, 1022);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Gestion des STATS";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(591, 625);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(55, 17);
			this->label57->TabIndex = 68;
			this->label57->Text = L"Remise";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(434, 625);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(74, 17);
			this->label56->TabIndex = 68;
			this->label56->Text = L"Démarque";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(254, 625);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(131, 17);
			this->label51->TabIndex = 68;
			this->label51->Text = L"Marge commerciale";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(126, 625);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 17);
			this->label15->TabIndex = 68;
			this->label15->Text = L"TVA";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(328, 576);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 17);
			this->label14->TabIndex = 67;
			this->label14->Text = L"Simulation";
			// 
			// textBoxIDStat
			// 
			this->textBoxIDStat->Location = System::Drawing::Point(490, 484);
			this->textBoxIDStat->Name = L"textBoxIDStat";
			this->textBoxIDStat->Size = System::Drawing::Size(81, 22);
			this->textBoxIDStat->TabIndex = 23;
			// 
			// numericUpDownRemiseStat
			// 
			this->numericUpDownRemiseStat->DecimalPlaces = 2;
			this->numericUpDownRemiseStat->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDownRemiseStat->Location = System::Drawing::Point(594, 662);
			this->numericUpDownRemiseStat->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDownRemiseStat->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDownRemiseStat->Name = L"numericUpDownRemiseStat";
			this->numericUpDownRemiseStat->Size = System::Drawing::Size(68, 22);
			this->numericUpDownRemiseStat->TabIndex = 22;
			// 
			// numericUpDownDemarqueStat
			// 
			this->numericUpDownDemarqueStat->DecimalPlaces = 2;
			this->numericUpDownDemarqueStat->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDownDemarqueStat->Location = System::Drawing::Point(437, 662);
			this->numericUpDownDemarqueStat->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDownDemarqueStat->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDownDemarqueStat->Name = L"numericUpDownDemarqueStat";
			this->numericUpDownDemarqueStat->Size = System::Drawing::Size(68, 22);
			this->numericUpDownDemarqueStat->TabIndex = 22;
			// 
			// numericUpDownMargeStat
			// 
			this->numericUpDownMargeStat->DecimalPlaces = 2;
			this->numericUpDownMargeStat->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDownMargeStat->Location = System::Drawing::Point(264, 662);
			this->numericUpDownMargeStat->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMargeStat->Name = L"numericUpDownMargeStat";
			this->numericUpDownMargeStat->Size = System::Drawing::Size(68, 22);
			this->numericUpDownMargeStat->TabIndex = 22;
			// 
			// numericUpDownTVAStat
			// 
			this->numericUpDownTVAStat->DecimalPlaces = 2;
			this->numericUpDownTVAStat->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDownTVAStat->Location = System::Drawing::Point(110, 662);
			this->numericUpDownTVAStat->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTVAStat->Name = L"numericUpDownTVAStat";
			this->numericUpDownTVAStat->Size = System::Drawing::Size(68, 22);
			this->numericUpDownTVAStat->TabIndex = 22;
			// 
			// numericUpDownMoisStat
			// 
			this->numericUpDownMoisStat->Location = System::Drawing::Point(493, 408);
			this->numericUpDownMoisStat->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numericUpDownMoisStat->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMoisStat->Name = L"numericUpDownMoisStat";
			this->numericUpDownMoisStat->Size = System::Drawing::Size(78, 22);
			this->numericUpDownMoisStat->TabIndex = 22;
			this->numericUpDownMoisStat->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(434, 484);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 17);
			this->label13->TabIndex = 21;
			this->label13->Text = L"ID";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(434, 410);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 17);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Mois";
			// 
			// articlePlusVendusButton
			// 
			this->articlePlusVendusButton->Location = System::Drawing::Point(434, 91);
			this->articlePlusVendusButton->Name = L"articlePlusVendusButton";
			this->articlePlusVendusButton->Size = System::Drawing::Size(302, 35);
			this->articlePlusVendusButton->TabIndex = 20;
			this->articlePlusVendusButton->Text = L"Identifier les 10 articles les plus vendus";
			this->articlePlusVendusButton->UseVisualStyleBackColor = true;
			this->articlePlusVendusButton->Click += gcnew System::EventHandler(this, &MyForm::articlePlusVendusButton_Click);
			// 
			// articleMoinsVendusButton
			// 
			this->articleMoinsVendusButton->Location = System::Drawing::Point(434, 157);
			this->articleMoinsVendusButton->Name = L"articleMoinsVendusButton";
			this->articleMoinsVendusButton->Size = System::Drawing::Size(302, 37);
			this->articleMoinsVendusButton->TabIndex = 19;
			this->articleMoinsVendusButton->Text = L"Identifier les 10 articles les moins vendus";
			this->articleMoinsVendusButton->UseVisualStyleBackColor = true;
			this->articleMoinsVendusButton->Click += gcnew System::EventHandler(this, &MyForm::articleMoinsVendusButton_Click);
			// 
			// simulationButton
			// 
			this->simulationButton->Location = System::Drawing::Point(110, 724);
			this->simulationButton->Name = L"simulationButton";
			this->simulationButton->Size = System::Drawing::Size(552, 48);
			this->simulationButton->TabIndex = 18;
			this->simulationButton->Text = L" Simuler des variations de valeurs commerciales pour en déduire la valeur du stoc"
				L"k";
			this->simulationButton->UseVisualStyleBackColor = true;
			this->simulationButton->Click += gcnew System::EventHandler(this, &MyForm::simulationButton_Click);
			// 
			// seuilButton
			// 
			this->seuilButton->Location = System::Drawing::Point(434, 7);
			this->seuilButton->Name = L"seuilButton";
			this->seuilButton->Size = System::Drawing::Size(302, 50);
			this->seuilButton->TabIndex = 17;
			this->seuilButton->Text = L"Identifier les produits sous le seuil de réaprovisionnement";
			this->seuilButton->UseVisualStyleBackColor = true;
			this->seuilButton->Click += gcnew System::EventHandler(this, &MyForm::seuilButton_Click);
			// 
			// achatButton
			// 
			this->achatButton->Location = System::Drawing::Point(8, 469);
			this->achatButton->Name = L"achatButton";
			this->achatButton->Size = System::Drawing::Size(419, 53);
			this->achatButton->TabIndex = 16;
			this->achatButton->Text = L"Calcul du montant des achats pour un client";
			this->achatButton->UseVisualStyleBackColor = true;
			this->achatButton->Click += gcnew System::EventHandler(this, &MyForm::achatButton_Click);
			// 
			// valeurAchatStockButton
			// 
			this->valeurAchatStockButton->Location = System::Drawing::Point(434, 274);
			this->valeurAchatStockButton->Name = L"valeurAchatStockButton";
			this->valeurAchatStockButton->Size = System::Drawing::Size(302, 38);
			this->valeurAchatStockButton->TabIndex = 15;
			this->valeurAchatStockButton->Text = L"Calculer la valeur d\'achat du stock";
			this->valeurAchatStockButton->UseVisualStyleBackColor = true;
			this->valeurAchatStockButton->Click += gcnew System::EventHandler(this, &MyForm::valeurAchatStockButton_Click);
			// 
			// valeurComStockButton
			// 
			this->valeurComStockButton->Location = System::Drawing::Point(434, 217);
			this->valeurComStockButton->Name = L"valeurComStockButton";
			this->valeurComStockButton->Size = System::Drawing::Size(302, 38);
			this->valeurComStockButton->TabIndex = 15;
			this->valeurComStockButton->Text = L"Calculer la valeur commerciale du stock";
			this->valeurComStockButton->UseVisualStyleBackColor = true;
			this->valeurComStockButton->Click += gcnew System::EventHandler(this, &MyForm::valeurStockButton_Click);
			// 
			// CAButton
			// 
			this->CAButton->Location = System::Drawing::Point(8, 392);
			this->CAButton->Name = L"CAButton";
			this->CAButton->Size = System::Drawing::Size(419, 52);
			this->CAButton->TabIndex = 14;
			this->CAButton->Text = L"Calculer le chiffre d\'affaire sur un mois en particulier";
			this->CAButton->UseVisualStyleBackColor = true;
			this->CAButton->Click += gcnew System::EventHandler(this, &MyForm::CAButton_Click);
			// 
			// panierMoyenButton
			// 
			this->panierMoyenButton->Location = System::Drawing::Point(434, 330);
			this->panierMoyenButton->Name = L"panierMoyenButton";
			this->panierMoyenButton->Size = System::Drawing::Size(302, 42);
			this->panierMoyenButton->TabIndex = 13;
			this->panierMoyenButton->Text = L"Calculer le panier moyen après remise";
			this->panierMoyenButton->UseVisualStyleBackColor = true;
			this->panierMoyenButton->Click += gcnew System::EventHandler(this, &MyForm::panierMoyenButton_Click);
			// 
			// dgv_enr_stat
			// 
			this->dgv_enr_stat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_stat->Location = System::Drawing::Point(4, 7);
			this->dgv_enr_stat->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr_stat->Name = L"dgv_enr_stat";
			this->dgv_enr_stat->RowHeadersWidth = 51;
			this->dgv_enr_stat->Size = System::Drawing::Size(423, 365);
			this->dgv_enr_stat->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(752, 898);
			this->Controls->Add(ClientTabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Location = System::Drawing::Point(236, 220);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Application C++/CLI";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			ClientTabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientFacInsert))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientLivInsert))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientFacUpdate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientLivUpdate))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_client))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->InsertTabClient->ResumeLayout(false);
			this->InsertTabClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPersoInsert))->EndInit();
			this->UpdateTabClient->ResumeLayout(false);
			this->UpdateTabClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPersoUpdate))->EndInit();
			this->DeleteTabClient->ResumeLayout(false);
			this->DeleteTabClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_personnel))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_stock))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabControl4->ResumeLayout(false);
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			this->tabPage14->ResumeLayout(false);
			this->tabPage14->PerformLayout();
			this->tabPage15->ResumeLayout(false);
			this->tabPage15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownQuantitePanier))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_commande))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRemiseStat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDemarqueStat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMargeStat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTVAStat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMoisStat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_stat))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();

		FuncVersionDisplay^ versionMessage = gcnew FuncVersionDisplay(this, &MyForm::displayVersion);

		versionMessage->Invoke("Version 1.0 Projet POO CESI");
	}

	private: void displayVersion(String^ message) {
		MessageBox::Show(message);
	}

	private:void resetInput() {
		this->textBoxNomClientInsert->Text = "";
		this->textBoxPrenomClientInsert->Text = "";
		this->textBoxDateNaissanceClientInsert->Text = "";

		this->textBoxIDClientDelete->Text = "";						//ACTUALISER AVEC TOUT LES INPUTS

		this->textBoxIDClientUpdate->Text = "";
		this->textBoxNomClientUpdate->Text = "";
		this->textBoxPrenomClientUpdate->Text = "";
		this->textBoxDateNaissanceClientUpdate->Text = "";
	}

	private: System::Void btn_load_client_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr_client->Refresh();
		this->oDs = this->oSvc->selectionnerClient("A");
		this->dgv_enr_client->DataSource = this->oDs;
		this->dgv_enr_client->DataMember = "A";
	}

	private: System::Void btn_load_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr_personnel->Refresh();
		this->oDs = this->oSvc->selectionnerPersonnel("B");
		this->dgv_enr_personnel->DataSource = this->oDs;
		this->dgv_enr_personnel->DataMember = "B";
	}

	private: System::Void insertButtonClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterClient(this->textBoxNomClientInsert->Text,
			this->textBoxPrenomClientInsert->Text,
			this->textBoxDateNaissanceClientInsert->Text,
			this->numericUpDownClientFacInsert->Text,
			this->textBoxAdresseClientFacInsert->Text,
			this->comboBoxVilleClientFacInsert->Text,
			this->numericUpDownClientLivInsert->Text,
			this->textBoxAdresseClientLivInsert->Text,
			this->comboBoxVilleClientLivInsert->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}

	private: System::Void deleteButtonClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerClient(this->textBoxIDClientDelete->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}

	private: System::Void updateButtonClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierClient(this->textBoxIDClientUpdate->Text,
			this->textBoxNomClientUpdate->Text,
			this->textBoxPrenomClientUpdate->Text,
			this->textBoxDateNaissanceClientUpdate->Text,
			this->numericUpDownClientFacUpdate->Text,
			this->textBoxAdresseClientFacUpdate->Text,
			this->comboBoxVilleClientFacUpdate->Text,
			this->numericUpDownClientLivUpdate->Text,
			this->textBoxAdresseClientLivUpdate->Text,
			this->comboBoxVilleClientLivUpdate->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}

	private: System::Void insertButtonPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterPersonnel(this->textBoxNomPersoInsert->Text,
			this->textBoxPrenomPersoInsert->Text,
			this->textBoxDateEmbauchePersoInsert->Text,
			this->numericUpDownPersoInsert->Text,
			this->textBoxAdressePersoInsert->Text,
			this->comboBoxVillePersoInsert->Text,
			this->textBoxIDSupPersoInsert->Text);
		btn_load_personnel_Click(sender, e);
		resetInput();
	}

	private: System::Void deleteButtonPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerPersonnel(this->textBoxIDPersoDelete->Text);
		btn_load_personnel_Click(sender, e);
		resetInput();
	}

	private: System::Void updateButtonPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierPersonnel(this->textBoxIDPersoUpdate->Text,
			this->textBoxNomPersoUpdate->Text,
			this->textBoxPrenomPersoUpdate->Text,
			this->textBoxDateEmbauchePersoUpdate->Text,
			this->numericUpDownPersoUpdate->Text,
			this->textBoxAdressePersoUpdate->Text,
			this->comboBoxVillePersoUpdate->Text,
			this->textBoxIDSupPersoUpdate->Text);
		btn_load_personnel_Click(sender, e);
		resetInput();
	}

	private: System::Void btn_load_stock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr_stock->Refresh();
		this->oDs = this->oSvc->selectionnerstock("C");
		this->dgv_enr_stock->DataSource = this->oDs;
		this->dgv_enr_stock->DataMember = "C";
	}
	private: System::Void btn_load_commande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr_commande->Refresh();
		this->oDs = this->oSvc->selectionnerCommande("Z", textBoxIDClientCommande->Text);
		this->dgv_enr_commande->DataSource = this->oDs;
		this->dgv_enr_commande->DataMember = "Z";
	}
	private: System::Void insertButtonStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterstock(
			this->textBoxNomStockInsert->Text,
			this->textBoxQuantSStockInsert->Text,
			this->textBoxPrixProStockInsert->Text,
			this->textBoxSeuilReapStockInsert->Text,
			this->textBoxPrixAchatStockInsert->Text);

		btn_load_stock_Click(sender, e);
		resetInput();
	}
	private: System::Void updateButtonStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierstock(this->textBoxRefStockUpdate->Text,
			this->textBoxQuantSStockUpdate->Text,
			this->textBoxPrixProStockUpdate->Text,
			this->textBoxSeuilReapStockUpdate->Text,
			this->textBoxPrixAchatStockUpdate->Text);

		btn_load_stock_Click(sender, e);
		resetInput();
	}

	private: Void resetDataGridStat() {
		this->dgv_enr_stat->CancelEdit();
		this->dgv_enr_stat->DataSource = nullptr;
		this->dgv_enr_stat->Rows->Clear();
		this->dgv_enr_stat->Columns->Clear();
		this->dgv_enr_stat->DataSource = nullptr;
	}

	private: System::Void seuilButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->articleSousSeuil("A");
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "A";
	}

	private: System::Void articlePlusVendusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->articlePlusVendus("B");
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "B";
	}

	private: System::Void articleMoinsVendusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->articleMoinsVendus("C");
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "C";
	}

	private: System::Void valeurStockButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->calculerValeurCommercialStock("D");
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "D";
	}

	private: System::Void panierMoyenButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->calculerPanierMoyen("E");
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "E";
	}

	private: System::Void CAButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->calculerCAParMois("F", this->numericUpDownMoisStat->Text);
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "F";
	}

	private: System::Void achatButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->calculerMontantTotalClient("G", this->textBoxIDStat->Text);
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "G";
	}

	private: System::Void simulationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->simulerValeurCommerciale("H", numericUpDownTVAStat->Text,
			numericUpDownMargeStat->Text,
			numericUpDownDemarqueStat->Text,
			numericUpDownRemiseStat->Text);
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "H";
	}

	private: System::Void deleteButtonStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerstock(this->textBoxIDStockDelete->Text);
		btn_load_stock_Click(sender, e);
		resetInput();
	}
	private: System::Void valeurAchatStockButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resetDataGridStat();
		this->dgv_enr_stat->Refresh();
		this->oDs = this->oSvc->calculerValeurAchatStock("I");
		this->dgv_enr_stat->DataSource = this->oDs;
		this->dgv_enr_stat->DataMember = "I";
	}
	private: System::Void insertButtonCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterCommande(
			this->textBoxIDComInsert->Text,
			this->textBoxDateLivComInsert->Text);

		this->textBoxIDClientCommande->Text = textBoxIDComInsert->Text;

		btn_load_commande_Click(sender, e);
		resetInput();
	}
	private: System::Void deleteButtonCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerCommande(this->textBoxRefComDelete->Text);
		btn_load_commande_Click(sender, e);
		resetInput();
	}
	private: System::Void updateButtonCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierCommande(textBoxRefComUpdate->Text,
			textBoxDateLivrComUpdate->Text);

		btn_load_commande_Click(sender, e);
		resetInput();
	}

		   /*private: System::Void initComboBoxPanier() {
			   DataGridView^ dgv_recup_article = gcnew DataGridView();

			   dgv_recup_article->Refresh();
			   this->oDs = this->oSvc->selectionnerNomArticle("AA");

			   //System::Windows::Forms::MessageBox::Show(oDs->Tables->ToString().);

			   dgv_recup_article->DataSource = this->oDs;
			   dgv_recup_article->DataMember = "AA";

			   int nb = int::Parse(dgv_recup_article->Rows->Count.ToString());

			   System::Windows::Forms::MessageBox::Show(nb.ToString());

			   for (int i = 0; i < nb; i++)
			   {
				   String^ data = dgv_recup_article->Rows[i]->Cells["Nom"]->Value->ToString();
				   comboBoxArticlePanier->Items->Add(data);
			   }
			   comboBoxArticlePanier->Items->Add("Hé salut !");
		   }*/
	private: System::Void buttonAjouterPanier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterPanier(
			this->textBoxRefComPanier->Text,
			this->comboBoxArticlePanier->Text,
			this->numericUpDownQuantitePanier->Text,
			this->textBoxCouleurPanier->Text);

		btn_load_commande_Click(sender, e);
		resetInput();
	}
	private: System::Void buttonSupprimerPanier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerPanier(
			this->textBoxRefComPanier->Text,
			this->textBoxRefArtPanier->Text);

		btn_load_commande_Click(sender, e);
		resetInput();
	}
	};
}