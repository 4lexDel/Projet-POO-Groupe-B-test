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
	/// Description r�sum�e de MyForm
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
		/// Nettoyage des ressources utilis�es.
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






























	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
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

	private: System::Windows::Forms::ListBox^ ListBoxVilleClientLivUpdate;


	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBoxAdresseClientLivUpdate;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownClientLivUpdate;
	private: System::Windows::Forms::ListBox^ ListBoxVilleClientFacUpdate;


	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBoxAdresseClientFacUpdate;

	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownClientFacUpdate;

	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::ListBox^ ListBoxVilleClientFacInsert;

	private: System::Windows::Forms::ListBox^ ListBoxVilleClientLivInsert;

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
	private: System::Windows::Forms::ListBox^ listBoxVillePersoUpdate;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxAdressePersoUpdate;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPersoUpdate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxIDSupPersoUpdate;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBoxVillePersoInsert;

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
private: System::Windows::Forms::TabControl^ tabControl3;
private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::TextBox^ textBoxQuantSStockInsert;











private: System::Windows::Forms::TextBox^ textBoxPrixProStockInsert;

private: System::Windows::Forms::TextBox^ textBoxNomStockInsert;


private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Button^ insertButtonStock;



private: System::Windows::Forms::TabPage^ tabPage9;



private: System::Windows::Forms::Button^ updateButtonStock;
private: System::Windows::Forms::TextBox^ textBoxSeuilReaStockUpdate;






private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::TextBox^ textBoxIDStockUpdate;

private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::TextBox^ textBoxQuantSStockUpdate;

private: System::Windows::Forms::TextBox^ textBoxPrixProStockUpdate;

private: System::Windows::Forms::TextBox^ textBoxNomStockUpdate;

private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::TabPage^ tabPage10;
private: System::Windows::Forms::TextBox^ textBoxIDStockDelete;


private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Button^ deleteButtonStock;

private: System::Windows::Forms::DataGridView^ dgv_enr_stock;

private: System::Windows::Forms::Button^ btn_load_stock;

private: System::Windows::Forms::TextBox^ textBoxSeuilReaStockInsert;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TabPage^ tabPage11;


	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TabControl^ ClientTabControl;
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->ListBoxVilleClientFacInsert = (gcnew System::Windows::Forms::ListBox());
			this->ListBoxVilleClientLivInsert = (gcnew System::Windows::Forms::ListBox());
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
			this->insertButtonClient = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->ListBoxVilleClientFacUpdate = (gcnew System::Windows::Forms::ListBox());
			this->ListBoxVilleClientLivUpdate = (gcnew System::Windows::Forms::ListBox());
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
			this->listBoxVillePersoInsert = (gcnew System::Windows::Forms::ListBox());
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
			this->listBoxVillePersoUpdate = (gcnew System::Windows::Forms::ListBox());
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
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxSeuilReaStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxQuantSStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrixProStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomStockInsert = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->insertButtonStock = (gcnew System::Windows::Forms::Button());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->updateButtonStock = (gcnew System::Windows::Forms::Button());
			this->textBoxSeuilReaStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBoxQuantSStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrixProStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomStockUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxIDStockDelete = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->deleteButtonStock = (gcnew System::Windows::Forms::Button());
			this->dgv_enr_stock = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load_stock = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_stock))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// ClientTabControl
			// 
			ClientTabControl->Controls->Add(this->tabPage1);
			ClientTabControl->Controls->Add(this->tabPage2);
			ClientTabControl->Controls->Add(this->tabPage3);
			ClientTabControl->Controls->Add(this->tabPage4);
			ClientTabControl->Controls->Add(this->tabPage11);
			ClientTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			ClientTabControl->Location = System::Drawing::Point(0, 0);
			ClientTabControl->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			ClientTabControl->Name = L"ClientTabControl";
			ClientTabControl->SelectedIndex = 0;
			ClientTabControl->Size = System::Drawing::Size(1128, 1497);
			ClientTabControl->TabIndex = 11;
			ClientTabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::PersonnelTabControl_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->dgv_enr_client);
			this->tabPage1->Controls->Add(this->btn_load_client);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Size = System::Drawing::Size(1112, 1450);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(9, 680);
			this->tabControl2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1098, 548);
			this->tabControl2->TabIndex = 26;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->ListBoxVilleClientFacInsert);
			this->tabPage5->Controls->Add(this->ListBoxVilleClientLivInsert);
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
			this->tabPage5->Controls->Add(this->insertButtonClient);
			this->tabPage5->Location = System::Drawing::Point(8, 39);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage5->Size = System::Drawing::Size(1082, 501);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Insert";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// ListBoxVilleClientFacInsert
			// 
			this->ListBoxVilleClientFacInsert->FormattingEnabled = true;
			this->ListBoxVilleClientFacInsert->ItemHeight = 25;
			this->ListBoxVilleClientFacInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->ListBoxVilleClientFacInsert->Location = System::Drawing::Point(892, 347);
			this->ListBoxVilleClientFacInsert->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ListBoxVilleClientFacInsert->Name = L"ListBoxVilleClientFacInsert";
			this->ListBoxVilleClientFacInsert->Size = System::Drawing::Size(133, 29);
			this->ListBoxVilleClientFacInsert->TabIndex = 49;
			// 
			// ListBoxVilleClientLivInsert
			// 
			this->ListBoxVilleClientLivInsert->FormattingEnabled = true;
			this->ListBoxVilleClientLivInsert->ItemHeight = 25;
			this->ListBoxVilleClientLivInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->ListBoxVilleClientLivInsert->Location = System::Drawing::Point(892, 134);
			this->ListBoxVilleClientLivInsert->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ListBoxVilleClientLivInsert->Name = L"ListBoxVilleClientLivInsert";
			this->ListBoxVilleClientLivInsert->Size = System::Drawing::Size(133, 29);
			this->ListBoxVilleClientLivInsert->TabIndex = 48;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(910, 309);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(53, 25);
			this->label20->TabIndex = 47;
			this->label20->Text = L"Ville";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(910, 97);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(53, 25);
			this->label22->TabIndex = 46;
			this->label22->Text = L"Ville";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(693, 314);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(91, 25);
			this->label28->TabIndex = 45;
			this->label28->Text = L"Adresse";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(693, 102);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(91, 25);
			this->label36->TabIndex = 44;
			this->label36->Text = L"Adresse";
			// 
			// textBoxAdresseClientFacInsert
			// 
			this->textBoxAdresseClientFacInsert->Location = System::Drawing::Point(646, 347);
			this->textBoxAdresseClientFacInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxAdresseClientFacInsert->Name = L"textBoxAdresseClientFacInsert";
			this->textBoxAdresseClientFacInsert->Size = System::Drawing::Size(198, 31);
			this->textBoxAdresseClientFacInsert->TabIndex = 43;
			// 
			// textBoxAdresseClientLivInsert
			// 
			this->textBoxAdresseClientLivInsert->Location = System::Drawing::Point(646, 134);
			this->textBoxAdresseClientLivInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxAdresseClientLivInsert->Name = L"textBoxAdresseClientLivInsert";
			this->textBoxAdresseClientLivInsert->Size = System::Drawing::Size(198, 31);
			this->textBoxAdresseClientLivInsert->TabIndex = 42;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(528, 314);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(35, 25);
			this->label37->TabIndex = 40;
			this->label37->Text = L"N�";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(528, 102);
			this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(35, 25);
			this->label38->TabIndex = 41;
			this->label38->Text = L"N�";
			// 
			// numericUpDownClientFacInsert
			// 
			this->numericUpDownClientFacInsert->Location = System::Drawing::Point(498, 347);
			this->numericUpDownClientFacInsert->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numericUpDownClientFacInsert->Name = L"numericUpDownClientFacInsert";
			this->numericUpDownClientFacInsert->Size = System::Drawing::Size(104, 31);
			this->numericUpDownClientFacInsert->TabIndex = 39;
			// 
			// numericUpDownClientLivInsert
			// 
			this->numericUpDownClientLivInsert->Location = System::Drawing::Point(498, 134);
			this->numericUpDownClientLivInsert->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numericUpDownClientLivInsert->Name = L"numericUpDownClientLivInsert";
			this->numericUpDownClientLivInsert->Size = System::Drawing::Size(104, 31);
			this->numericUpDownClientLivInsert->TabIndex = 38;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(576, 258);
			this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(250, 25);
			this->label39->TabIndex = 37;
			this->label39->Text = L"Adresse de facturation";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(576, 45);
			this->label40->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(227, 25);
			this->label40->TabIndex = 36;
			this->label40->Text = L"Adresse de livraison";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(38, 283);
			this->label41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(424, 25);
			this->label41->TabIndex = 35;
			this->label41->Text = L"Date de naissance (Format : AAAA-MM-JJ)";
			// 
			// textBoxDateNaissanceClientInsert
			// 
			this->textBoxDateNaissanceClientInsert->Location = System::Drawing::Point(39, 316);
			this->textBoxDateNaissanceClientInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxDateNaissanceClientInsert->Name = L"textBoxDateNaissanceClientInsert";
			this->textBoxDateNaissanceClientInsert->Size = System::Drawing::Size(328, 31);
			this->textBoxDateNaissanceClientInsert->TabIndex = 31;
			// 
			// textBoxPrenomClientInsert
			// 
			this->textBoxPrenomClientInsert->Location = System::Drawing::Point(39, 219);
			this->textBoxPrenomClientInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxPrenomClientInsert->Name = L"textBoxPrenomClientInsert";
			this->textBoxPrenomClientInsert->Size = System::Drawing::Size(328, 31);
			this->textBoxPrenomClientInsert->TabIndex = 30;
			// 
			// textBoxNomClientInsert
			// 
			this->textBoxNomClientInsert->Location = System::Drawing::Point(40, 131);
			this->textBoxNomClientInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxNomClientInsert->Name = L"textBoxNomClientInsert";
			this->textBoxNomClientInsert->Size = System::Drawing::Size(326, 31);
			this->textBoxNomClientInsert->TabIndex = 29;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(38, 98);
			this->label43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(56, 25);
			this->label43->TabIndex = 34;
			this->label43->Text = L"Nom";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(36, 181);
			this->label44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(86, 25);
			this->label44->TabIndex = 32;
			this->label44->Text = L"Prenom";
			// 
			// insertButtonClient
			// 
			this->insertButtonClient->Location = System::Drawing::Point(830, 420);
			this->insertButtonClient->Margin = System::Windows::Forms::Padding(6);
			this->insertButtonClient->Name = L"insertButtonClient";
			this->insertButtonClient->Size = System::Drawing::Size(246, 72);
			this->insertButtonClient->TabIndex = 2;
			this->insertButtonClient->Text = L"INSERT";
			this->insertButtonClient->UseVisualStyleBackColor = true;
			this->insertButtonClient->Click += gcnew System::EventHandler(this, &MyForm::insertButtonClient_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->ListBoxVilleClientFacUpdate);
			this->tabPage6->Controls->Add(this->ListBoxVilleClientLivUpdate);
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
			this->tabPage6->Location = System::Drawing::Point(8, 39);
			this->tabPage6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage6->Size = System::Drawing::Size(1082, 501);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Update";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// ListBoxVilleClientFacUpdate
			// 
			this->ListBoxVilleClientFacUpdate->FormattingEnabled = true;
			this->ListBoxVilleClientFacUpdate->ItemHeight = 25;
			this->ListBoxVilleClientFacUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->ListBoxVilleClientFacUpdate->Location = System::Drawing::Point(890, 330);
			this->ListBoxVilleClientFacUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ListBoxVilleClientFacUpdate->Name = L"ListBoxVilleClientFacUpdate";
			this->ListBoxVilleClientFacUpdate->Size = System::Drawing::Size(133, 29);
			this->ListBoxVilleClientFacUpdate->TabIndex = 27;
			// 
			// ListBoxVilleClientLivUpdate
			// 
			this->ListBoxVilleClientLivUpdate->FormattingEnabled = true;
			this->ListBoxVilleClientLivUpdate->ItemHeight = 25;
			this->ListBoxVilleClientLivUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->ListBoxVilleClientLivUpdate->Location = System::Drawing::Point(890, 117);
			this->ListBoxVilleClientLivUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ListBoxVilleClientLivUpdate->Name = L"ListBoxVilleClientLivUpdate";
			this->ListBoxVilleClientLivUpdate->Size = System::Drawing::Size(133, 29);
			this->ListBoxVilleClientLivUpdate->TabIndex = 27;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(908, 292);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(53, 25);
			this->label35->TabIndex = 26;
			this->label35->Text = L"Ville";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(908, 80);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(53, 25);
			this->label31->TabIndex = 26;
			this->label31->Text = L"Ville";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(690, 297);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(91, 25);
			this->label34->TabIndex = 26;
			this->label34->Text = L"Adresse";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(690, 84);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(91, 25);
			this->label30->TabIndex = 26;
			this->label30->Text = L"Adresse";
			// 
			// textBoxAdresseClientFacUpdate
			// 
			this->textBoxAdresseClientFacUpdate->Location = System::Drawing::Point(644, 330);
			this->textBoxAdresseClientFacUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxAdresseClientFacUpdate->Name = L"textBoxAdresseClientFacUpdate";
			this->textBoxAdresseClientFacUpdate->Size = System::Drawing::Size(198, 31);
			this->textBoxAdresseClientFacUpdate->TabIndex = 25;
			// 
			// textBoxAdresseClientLivUpdate
			// 
			this->textBoxAdresseClientLivUpdate->Location = System::Drawing::Point(644, 117);
			this->textBoxAdresseClientLivUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxAdresseClientLivUpdate->Name = L"textBoxAdresseClientLivUpdate";
			this->textBoxAdresseClientLivUpdate->Size = System::Drawing::Size(198, 31);
			this->textBoxAdresseClientLivUpdate->TabIndex = 25;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(525, 297);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(35, 25);
			this->label33->TabIndex = 24;
			this->label33->Text = L"N�";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(525, 84);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(35, 25);
			this->label29->TabIndex = 24;
			this->label29->Text = L"N�";
			// 
			// numericUpDownClientFacUpdate
			// 
			this->numericUpDownClientFacUpdate->Location = System::Drawing::Point(495, 330);
			this->numericUpDownClientFacUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numericUpDownClientFacUpdate->Name = L"numericUpDownClientFacUpdate";
			this->numericUpDownClientFacUpdate->Size = System::Drawing::Size(104, 31);
			this->numericUpDownClientFacUpdate->TabIndex = 23;
			// 
			// numericUpDownClientLivUpdate
			// 
			this->numericUpDownClientLivUpdate->Location = System::Drawing::Point(495, 117);
			this->numericUpDownClientLivUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numericUpDownClientLivUpdate->Name = L"numericUpDownClientLivUpdate";
			this->numericUpDownClientLivUpdate->Size = System::Drawing::Size(104, 31);
			this->numericUpDownClientLivUpdate->TabIndex = 23;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(573, 241);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(250, 25);
			this->label32->TabIndex = 22;
			this->label32->Text = L"Adresse de facturation";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(573, 28);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(227, 25);
			this->label24->TabIndex = 22;
			this->label24->Text = L"Adresse de livraison";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(9, 305);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(424, 25);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Date de naissance (Format : AAAA-MM-JJ)";
			// 
			// textBoxIDClientUpdate
			// 
			this->textBoxIDClientUpdate->Location = System::Drawing::Point(14, 80);
			this->textBoxIDClientUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIDClientUpdate->Name = L"textBoxIDClientUpdate";
			this->textBoxIDClientUpdate->Size = System::Drawing::Size(325, 31);
			this->textBoxIDClientUpdate->TabIndex = 5;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(9, 47);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(32, 25);
			this->label23->TabIndex = 8;
			this->label23->Text = L"ID";
			// 
			// textBoxDateNaissanceClientUpdate
			// 
			this->textBoxDateNaissanceClientUpdate->Location = System::Drawing::Point(10, 338);
			this->textBoxDateNaissanceClientUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxDateNaissanceClientUpdate->Name = L"textBoxDateNaissanceClientUpdate";
			this->textBoxDateNaissanceClientUpdate->Size = System::Drawing::Size(328, 31);
			this->textBoxDateNaissanceClientUpdate->TabIndex = 7;
			// 
			// textBoxPrenomClientUpdate
			// 
			this->textBoxPrenomClientUpdate->Location = System::Drawing::Point(10, 241);
			this->textBoxPrenomClientUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxPrenomClientUpdate->Name = L"textBoxPrenomClientUpdate";
			this->textBoxPrenomClientUpdate->Size = System::Drawing::Size(328, 31);
			this->textBoxPrenomClientUpdate->TabIndex = 7;
			// 
			// textBoxNomClientUpdate
			// 
			this->textBoxNomClientUpdate->Location = System::Drawing::Point(12, 153);
			this->textBoxNomClientUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxNomClientUpdate->Name = L"textBoxNomClientUpdate";
			this->textBoxNomClientUpdate->Size = System::Drawing::Size(326, 31);
			this->textBoxNomClientUpdate->TabIndex = 6;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(9, 120);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(56, 25);
			this->label25->TabIndex = 8;
			this->label25->Text = L"Nom";
			// 
			// updateButtonClient
			// 
			this->updateButtonClient->Location = System::Drawing::Point(834, 420);
			this->updateButtonClient->Margin = System::Windows::Forms::Padding(6);
			this->updateButtonClient->Name = L"updateButtonClient";
			this->updateButtonClient->Size = System::Drawing::Size(246, 72);
			this->updateButtonClient->TabIndex = 4;
			this->updateButtonClient->Text = L"UPDATE";
			this->updateButtonClient->UseVisualStyleBackColor = true;
			this->updateButtonClient->Click += gcnew System::EventHandler(this, &MyForm::updateButtonClient_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(8, 203);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(86, 25);
			this->label26->TabIndex = 8;
			this->label26->Text = L"Prenom";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->textBoxIDClientDelete);
			this->tabPage7->Controls->Add(this->label27);
			this->tabPage7->Controls->Add(this->deleteButtonClient);
			this->tabPage7->Location = System::Drawing::Point(8, 39);
			this->tabPage7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage7->Size = System::Drawing::Size(1082, 501);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Delete";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// textBoxIDClientDelete
			// 
			this->textBoxIDClientDelete->Location = System::Drawing::Point(236, 220);
			this->textBoxIDClientDelete->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIDClientDelete->Name = L"textBoxIDClientDelete";
			this->textBoxIDClientDelete->Size = System::Drawing::Size(584, 31);
			this->textBoxIDClientDelete->TabIndex = 9;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(516, 136);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(32, 25);
			this->label27->TabIndex = 10;
			this->label27->Text = L"ID";
			// 
			// deleteButtonClient
			// 
			this->deleteButtonClient->Location = System::Drawing::Point(830, 418);
			this->deleteButtonClient->Margin = System::Windows::Forms::Padding(6);
			this->deleteButtonClient->Name = L"deleteButtonClient";
			this->deleteButtonClient->Size = System::Drawing::Size(246, 72);
			this->deleteButtonClient->TabIndex = 3;
			this->deleteButtonClient->Text = L"DELETE";
			this->deleteButtonClient->UseVisualStyleBackColor = true;
			this->deleteButtonClient->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonClient_Click);
			// 
			// dgv_enr_client
			// 
			this->dgv_enr_client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_client->Location = System::Drawing::Point(9, 11);
			this->dgv_enr_client->Margin = System::Windows::Forms::Padding(6);
			this->dgv_enr_client->Name = L"dgv_enr_client";
			this->dgv_enr_client->RowHeadersWidth = 51;
			this->dgv_enr_client->Size = System::Drawing::Size(1089, 533);
			this->dgv_enr_client->TabIndex = 11;
			// 
			// btn_load_client
			// 
			this->btn_load_client->Location = System::Drawing::Point(9, 556);
			this->btn_load_client->Margin = System::Windows::Forms::Padding(6);
			this->btn_load_client->Name = L"btn_load_client";
			this->btn_load_client->Size = System::Drawing::Size(1094, 112);
			this->btn_load_client->TabIndex = 12;
			this->btn_load_client->Text = L"Charger la base de donn�es";
			this->btn_load_client->UseVisualStyleBackColor = true;
			this->btn_load_client->Click += gcnew System::EventHandler(this, &MyForm::btn_load_client_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl1);
			this->tabPage2->Controls->Add(this->dgv_enr_personnel);
			this->tabPage2->Controls->Add(this->btn_load_personnel);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Size = System::Drawing::Size(1112, 1450);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->InsertTabClient);
			this->tabControl1->Controls->Add(this->UpdateTabClient);
			this->tabControl1->Controls->Add(this->DeleteTabClient);
			this->tabControl1->Location = System::Drawing::Point(9, 681);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1098, 548);
			this->tabControl1->TabIndex = 11;
			// 
			// InsertTabClient
			// 
			this->InsertTabClient->Controls->Add(this->listBoxVillePersoInsert);
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
			this->InsertTabClient->Location = System::Drawing::Point(8, 39);
			this->InsertTabClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->InsertTabClient->Name = L"InsertTabClient";
			this->InsertTabClient->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->InsertTabClient->Size = System::Drawing::Size(1082, 501);
			this->InsertTabClient->TabIndex = 0;
			this->InsertTabClient->Text = L"Insert";
			this->InsertTabClient->UseVisualStyleBackColor = true;
			// 
			// listBoxVillePersoInsert
			// 
			this->listBoxVillePersoInsert->FormattingEnabled = true;
			this->listBoxVillePersoInsert->ItemHeight = 25;
			this->listBoxVillePersoInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon", L"Rouen",
					L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->listBoxVillePersoInsert->Location = System::Drawing::Point(934, 225);
			this->listBoxVillePersoInsert->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBoxVillePersoInsert->Name = L"listBoxVillePersoInsert";
			this->listBoxVillePersoInsert->Size = System::Drawing::Size(133, 29);
			this->listBoxVillePersoInsert->TabIndex = 72;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(952, 188);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 25);
			this->label6->TabIndex = 71;
			this->label6->Text = L"Ville";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(735, 192);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 25);
			this->label7->TabIndex = 70;
			this->label7->Text = L"Adresse";
			// 
			// textBoxAdressePersoInsert
			// 
			this->textBoxAdressePersoInsert->Location = System::Drawing::Point(688, 225);
			this->textBoxAdressePersoInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxAdressePersoInsert->Name = L"textBoxAdressePersoInsert";
			this->textBoxAdressePersoInsert->Size = System::Drawing::Size(198, 31);
			this->textBoxAdressePersoInsert->TabIndex = 69;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(570, 192);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 25);
			this->label8->TabIndex = 68;
			this->label8->Text = L"N�";
			// 
			// numericUpDownPersoInsert
			// 
			this->numericUpDownPersoInsert->Location = System::Drawing::Point(540, 225);
			this->numericUpDownPersoInsert->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numericUpDownPersoInsert->Name = L"numericUpDownPersoInsert";
			this->numericUpDownPersoInsert->Size = System::Drawing::Size(104, 31);
			this->numericUpDownPersoInsert->TabIndex = 67;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(705, 119);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(98, 25);
			this->label10->TabIndex = 66;
			this->label10->Text = L"Adresse";
			// 
			// textBoxIDSupPersoInsert
			// 
			this->textBoxIDSupPersoInsert->Location = System::Drawing::Point(34, 369);
			this->textBoxIDSupPersoInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIDSupPersoInsert->Name = L"textBoxIDSupPersoInsert";
			this->textBoxIDSupPersoInsert->Size = System::Drawing::Size(430, 31);
			this->textBoxIDSupPersoInsert->TabIndex = 57;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(30, 336);
			this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(128, 25);
			this->label42->TabIndex = 61;
			this->label42->Text = L"ID sup�rieur";
			// 
			// textBoxDateEmbauchePersoInsert
			// 
			this->textBoxDateEmbauchePersoInsert->Location = System::Drawing::Point(32, 281);
			this->textBoxDateEmbauchePersoInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxDateEmbauchePersoInsert->Name = L"textBoxDateEmbauchePersoInsert";
			this->textBoxDateEmbauchePersoInsert->Size = System::Drawing::Size(433, 31);
			this->textBoxDateEmbauchePersoInsert->TabIndex = 60;
			// 
			// textBoxPrenomPersoInsert
			// 
			this->textBoxPrenomPersoInsert->Location = System::Drawing::Point(32, 184);
			this->textBoxPrenomPersoInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxPrenomPersoInsert->Name = L"textBoxPrenomPersoInsert";
			this->textBoxPrenomPersoInsert->Size = System::Drawing::Size(433, 31);
			this->textBoxPrenomPersoInsert->TabIndex = 59;
			// 
			// textBoxNomPersoInsert
			// 
			this->textBoxNomPersoInsert->Location = System::Drawing::Point(33, 97);
			this->textBoxNomPersoInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxNomPersoInsert->Name = L"textBoxNomPersoInsert";
			this->textBoxNomPersoInsert->Size = System::Drawing::Size(432, 31);
			this->textBoxNomPersoInsert->TabIndex = 58;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(27, 248);
			this->label46->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(412, 25);
			this->label46->TabIndex = 62;
			this->label46->Text = L"Date d\'embauche (Format : AAAA-MM-JJ)";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(30, 64);
			this->label47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(56, 25);
			this->label47->TabIndex = 65;
			this->label47->Text = L"Nom";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(28, 147);
			this->label48->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(86, 25);
			this->label48->TabIndex = 64;
			this->label48->Text = L"Prenom";
			// 
			// insertButtonPerso
			// 
			this->insertButtonPerso->Location = System::Drawing::Point(830, 420);
			this->insertButtonPerso->Margin = System::Windows::Forms::Padding(6);
			this->insertButtonPerso->Name = L"insertButtonPerso";
			this->insertButtonPerso->Size = System::Drawing::Size(246, 72);
			this->insertButtonPerso->TabIndex = 2;
			this->insertButtonPerso->Text = L"INSERT";
			this->insertButtonPerso->UseVisualStyleBackColor = true;
			this->insertButtonPerso->Click += gcnew System::EventHandler(this, &MyForm::insertButtonPerso_Click);
			// 
			// UpdateTabClient
			// 
			this->UpdateTabClient->Controls->Add(this->listBoxVillePersoUpdate);
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
			this->UpdateTabClient->Location = System::Drawing::Point(8, 39);
			this->UpdateTabClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->UpdateTabClient->Name = L"UpdateTabClient";
			this->UpdateTabClient->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->UpdateTabClient->Size = System::Drawing::Size(1082, 501);
			this->UpdateTabClient->TabIndex = 1;
			this->UpdateTabClient->Text = L"Update";
			this->UpdateTabClient->UseVisualStyleBackColor = true;
			// 
			// listBoxVillePersoUpdate
			// 
			this->listBoxVillePersoUpdate->FormattingEnabled = true;
			this->listBoxVillePersoUpdate->ItemHeight = 25;
			this->listBoxVillePersoUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon", L"Rouen",
					L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->listBoxVillePersoUpdate->Location = System::Drawing::Point(922, 222);
			this->listBoxVillePersoUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBoxVillePersoUpdate->Name = L"listBoxVillePersoUpdate";
			this->listBoxVillePersoUpdate->Size = System::Drawing::Size(133, 29);
			this->listBoxVillePersoUpdate->TabIndex = 55;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(940, 184);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 25);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Ville";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(723, 189);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 25);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Adresse";
			// 
			// updateButtonPerso
			// 
			this->updateButtonPerso->Location = System::Drawing::Point(830, 420);
			this->updateButtonPerso->Margin = System::Windows::Forms::Padding(6);
			this->updateButtonPerso->Name = L"updateButtonPerso";
			this->updateButtonPerso->Size = System::Drawing::Size(246, 72);
			this->updateButtonPerso->TabIndex = 4;
			this->updateButtonPerso->Text = L"UPDATE";
			this->updateButtonPerso->UseVisualStyleBackColor = true;
			this->updateButtonPerso->Click += gcnew System::EventHandler(this, &MyForm::updateButtonPerso_Click);
			// 
			// textBoxAdressePersoUpdate
			// 
			this->textBoxAdressePersoUpdate->Location = System::Drawing::Point(676, 222);
			this->textBoxAdressePersoUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxAdressePersoUpdate->Name = L"textBoxAdressePersoUpdate";
			this->textBoxAdressePersoUpdate->Size = System::Drawing::Size(198, 31);
			this->textBoxAdressePersoUpdate->TabIndex = 52;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(558, 189);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 25);
			this->label3->TabIndex = 51;
			this->label3->Text = L"N�";
			// 
			// numericUpDownPersoUpdate
			// 
			this->numericUpDownPersoUpdate->Location = System::Drawing::Point(528, 222);
			this->numericUpDownPersoUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numericUpDownPersoUpdate->Name = L"numericUpDownPersoUpdate";
			this->numericUpDownPersoUpdate->Size = System::Drawing::Size(104, 31);
			this->numericUpDownPersoUpdate->TabIndex = 50;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(693, 116);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 25);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Adresse";
			// 
			// textBoxIDSupPersoUpdate
			// 
			this->textBoxIDSupPersoUpdate->Location = System::Drawing::Point(14, 420);
			this->textBoxIDSupPersoUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIDSupPersoUpdate->Name = L"textBoxIDSupPersoUpdate";
			this->textBoxIDSupPersoUpdate->Size = System::Drawing::Size(430, 31);
			this->textBoxIDSupPersoUpdate->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 388);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ID sup�rieur";
			// 
			// textBoxIDPersoUpdate
			// 
			this->textBoxIDPersoUpdate->Location = System::Drawing::Point(14, 75);
			this->textBoxIDPersoUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIDPersoUpdate->Name = L"textBoxIDPersoUpdate";
			this->textBoxIDPersoUpdate->Size = System::Drawing::Size(430, 31);
			this->textBoxIDPersoUpdate->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 42);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"ID";
			// 
			// textBoxDateEmbauchePersoUpdate
			// 
			this->textBoxDateEmbauchePersoUpdate->Location = System::Drawing::Point(10, 333);
			this->textBoxDateEmbauchePersoUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxDateEmbauchePersoUpdate->Name = L"textBoxDateEmbauchePersoUpdate";
			this->textBoxDateEmbauchePersoUpdate->Size = System::Drawing::Size(433, 31);
			this->textBoxDateEmbauchePersoUpdate->TabIndex = 7;
			// 
			// textBoxPrenomPersoUpdate
			// 
			this->textBoxPrenomPersoUpdate->Location = System::Drawing::Point(10, 236);
			this->textBoxPrenomPersoUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxPrenomPersoUpdate->Name = L"textBoxPrenomPersoUpdate";
			this->textBoxPrenomPersoUpdate->Size = System::Drawing::Size(433, 31);
			this->textBoxPrenomPersoUpdate->TabIndex = 7;
			// 
			// textBoxNomPersoUpdate
			// 
			this->textBoxNomPersoUpdate->Location = System::Drawing::Point(12, 148);
			this->textBoxNomPersoUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxNomPersoUpdate->Name = L"textBoxNomPersoUpdate";
			this->textBoxNomPersoUpdate->Size = System::Drawing::Size(432, 31);
			this->textBoxNomPersoUpdate->TabIndex = 6;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 300);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(412, 25);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Date d\'embauche (Format : AAAA-MM-JJ)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(9, 116);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(56, 25);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Nom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(8, 198);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(86, 25);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Prenom";
			// 
			// DeleteTabClient
			// 
			this->DeleteTabClient->Controls->Add(this->textBoxIDPersoDelete);
			this->DeleteTabClient->Controls->Add(this->label19);
			this->DeleteTabClient->Controls->Add(this->deleteButtonPerso);
			this->DeleteTabClient->Location = System::Drawing::Point(8, 39);
			this->DeleteTabClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->DeleteTabClient->Name = L"DeleteTabClient";
			this->DeleteTabClient->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->DeleteTabClient->Size = System::Drawing::Size(1082, 501);
			this->DeleteTabClient->TabIndex = 2;
			this->DeleteTabClient->Text = L"Delete";
			this->DeleteTabClient->UseVisualStyleBackColor = true;
			// 
			// textBoxIDPersoDelete
			// 
			this->textBoxIDPersoDelete->Location = System::Drawing::Point(262, 248);
			this->textBoxIDPersoDelete->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIDPersoDelete->Name = L"textBoxIDPersoDelete";
			this->textBoxIDPersoDelete->Size = System::Drawing::Size(584, 31);
			this->textBoxIDPersoDelete->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(542, 180);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 25);
			this->label19->TabIndex = 10;
			this->label19->Text = L"ID";
			// 
			// deleteButtonPerso
			// 
			this->deleteButtonPerso->Location = System::Drawing::Point(830, 420);
			this->deleteButtonPerso->Margin = System::Windows::Forms::Padding(6);
			this->deleteButtonPerso->Name = L"deleteButtonPerso";
			this->deleteButtonPerso->Size = System::Drawing::Size(246, 72);
			this->deleteButtonPerso->TabIndex = 3;
			this->deleteButtonPerso->Text = L"DELETE";
			this->deleteButtonPerso->UseVisualStyleBackColor = true;
			this->deleteButtonPerso->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonPerso_Click);
			// 
			// dgv_enr_personnel
			// 
			this->dgv_enr_personnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_personnel->Location = System::Drawing::Point(14, 80);
			this->dgv_enr_personnel->Margin = System::Windows::Forms::Padding(6);
			this->dgv_enr_personnel->Name = L"dgv_enr_personnel";
			this->dgv_enr_personnel->RowHeadersWidth = 51;
			this->dgv_enr_personnel->Size = System::Drawing::Size(1120, 450);
			this->dgv_enr_personnel->TabIndex = 0;
			// 
			// btn_load_personnel
			// 
			this->btn_load_personnel->Location = System::Drawing::Point(9, 542);
			this->btn_load_personnel->Margin = System::Windows::Forms::Padding(6);
			this->btn_load_personnel->Name = L"btn_load_personnel";
			this->btn_load_personnel->Size = System::Drawing::Size(1090, 102);
			this->btn_load_personnel->TabIndex = 1;
			this->btn_load_personnel->Text = L"Charger la base de donn�es";
			this->btn_load_personnel->UseVisualStyleBackColor = true;
			this->btn_load_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_load_personnel_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl3);
			this->tabPage3->Controls->Add(this->dgv_enr_stock);
			this->tabPage3->Controls->Add(this->btn_load_stock);
			this->tabPage3->Location = System::Drawing::Point(8, 39);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1112, 1450);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Stock";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Location = System::Drawing::Point(-13, 619);
			this->tabControl3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(1098, 548);
			this->tabControl3->TabIndex = 14;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->textBoxSeuilReaStockInsert);
			this->tabPage8->Controls->Add(this->label15);
			this->tabPage8->Controls->Add(this->textBoxQuantSStockInsert);
			this->tabPage8->Controls->Add(this->textBoxPrixProStockInsert);
			this->tabPage8->Controls->Add(this->textBoxNomStockInsert);
			this->tabPage8->Controls->Add(this->label45);
			this->tabPage8->Controls->Add(this->label49);
			this->tabPage8->Controls->Add(this->label50);
			this->tabPage8->Controls->Add(this->insertButtonStock);
			this->tabPage8->Location = System::Drawing::Point(8, 39);
			this->tabPage8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage8->Size = System::Drawing::Size(1082, 501);
			this->tabPage8->TabIndex = 0;
			this->tabPage8->Text = L"Insert";
			this->tabPage8->UseVisualStyleBackColor = true;
			this->tabPage8->Click += gcnew System::EventHandler(this, &MyForm::tabPage8_Click);
			// 
			// textBoxSeuilReaStockInsert
			// 
			this->textBoxSeuilReaStockInsert->Location = System::Drawing::Point(34, 369);
			this->textBoxSeuilReaStockInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxSeuilReaStockInsert->Name = L"textBoxSeuilReaStockInsert";
			this->textBoxSeuilReaStockInsert->Size = System::Drawing::Size(430, 31);
			this->textBoxSeuilReaStockInsert->TabIndex = 57;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(30, 336);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(285, 25);
			this->label15->TabIndex = 61;
			this->label15->Text = L"Seuil de reapprovisionnemnt";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// textBoxQuantSStockInsert
			// 
			this->textBoxQuantSStockInsert->Location = System::Drawing::Point(32, 281);
			this->textBoxQuantSStockInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxQuantSStockInsert->Name = L"textBoxQuantSStockInsert";
			this->textBoxQuantSStockInsert->Size = System::Drawing::Size(433, 31);
			this->textBoxQuantSStockInsert->TabIndex = 60;
			// 
			// textBoxPrixProStockInsert
			// 
			this->textBoxPrixProStockInsert->Location = System::Drawing::Point(32, 184);
			this->textBoxPrixProStockInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxPrixProStockInsert->Name = L"textBoxPrixProStockInsert";
			this->textBoxPrixProStockInsert->Size = System::Drawing::Size(433, 31);
			this->textBoxPrixProStockInsert->TabIndex = 59;
			// 
			// textBoxNomStockInsert
			// 
			this->textBoxNomStockInsert->Location = System::Drawing::Point(33, 97);
			this->textBoxNomStockInsert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxNomStockInsert->Name = L"textBoxNomStockInsert";
			this->textBoxNomStockInsert->Size = System::Drawing::Size(432, 31);
			this->textBoxNomStockInsert->TabIndex = 58;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(27, 248);
			this->label45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(150, 25);
			this->label45->TabIndex = 62;
			this->label45->Text = L"Quantit� stock";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(30, 64);
			this->label49->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(56, 25);
			this->label49->TabIndex = 65;
			this->label49->Text = L"Nom";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(28, 147);
			this->label50->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(123, 25);
			this->label50->TabIndex = 64;
			this->label50->Text = L"Prix Produit";
			// 
			// insertButtonStock
			// 
			this->insertButtonStock->Location = System::Drawing::Point(830, 420);
			this->insertButtonStock->Margin = System::Windows::Forms::Padding(6);
			this->insertButtonStock->Name = L"insertButtonStock";
			this->insertButtonStock->Size = System::Drawing::Size(246, 72);
			this->insertButtonStock->TabIndex = 2;
			this->insertButtonStock->Text = L"INSERT";
			this->insertButtonStock->UseVisualStyleBackColor = true;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->updateButtonStock);
			this->tabPage9->Controls->Add(this->textBoxSeuilReaStockUpdate);
			this->tabPage9->Controls->Add(this->label55);
			this->tabPage9->Controls->Add(this->textBoxIDStockUpdate);
			this->tabPage9->Controls->Add(this->label56);
			this->tabPage9->Controls->Add(this->textBoxQuantSStockUpdate);
			this->tabPage9->Controls->Add(this->textBoxPrixProStockUpdate);
			this->tabPage9->Controls->Add(this->textBoxNomStockUpdate);
			this->tabPage9->Controls->Add(this->label57);
			this->tabPage9->Controls->Add(this->label58);
			this->tabPage9->Controls->Add(this->label59);
			this->tabPage9->Location = System::Drawing::Point(8, 39);
			this->tabPage9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage9->Size = System::Drawing::Size(1082, 501);
			this->tabPage9->TabIndex = 1;
			this->tabPage9->Text = L"Update";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// updateButtonStock
			// 
			this->updateButtonStock->Location = System::Drawing::Point(830, 420);
			this->updateButtonStock->Margin = System::Windows::Forms::Padding(6);
			this->updateButtonStock->Name = L"updateButtonStock";
			this->updateButtonStock->Size = System::Drawing::Size(246, 72);
			this->updateButtonStock->TabIndex = 4;
			this->updateButtonStock->Text = L"UPDATE";
			this->updateButtonStock->UseVisualStyleBackColor = true;
			// 
			// textBoxSeuilReaStockUpdate
			// 
			this->textBoxSeuilReaStockUpdate->Location = System::Drawing::Point(14, 420);
			this->textBoxSeuilReaStockUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxSeuilReaStockUpdate->Name = L"textBoxSeuilReaStockUpdate";
			this->textBoxSeuilReaStockUpdate->Size = System::Drawing::Size(430, 31);
			this->textBoxSeuilReaStockUpdate->TabIndex = 5;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(9, 388);
			this->label55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(297, 25);
			this->label55->TabIndex = 8;
			this->label55->Text = L"Seuil de r�approvisionnement";
			this->label55->Click += gcnew System::EventHandler(this, &MyForm::label55_Click);
			// 
			// textBoxIDStockUpdate
			// 
			this->textBoxIDStockUpdate->Location = System::Drawing::Point(14, 75);
			this->textBoxIDStockUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIDStockUpdate->Name = L"textBoxIDStockUpdate";
			this->textBoxIDStockUpdate->Size = System::Drawing::Size(430, 31);
			this->textBoxIDStockUpdate->TabIndex = 5;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(9, 42);
			this->label56->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(32, 25);
			this->label56->TabIndex = 8;
			this->label56->Text = L"ID";
			// 
			// textBoxQuantSStockUpdate
			// 
			this->textBoxQuantSStockUpdate->Location = System::Drawing::Point(10, 333);
			this->textBoxQuantSStockUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxQuantSStockUpdate->Name = L"textBoxQuantSStockUpdate";
			this->textBoxQuantSStockUpdate->Size = System::Drawing::Size(433, 31);
			this->textBoxQuantSStockUpdate->TabIndex = 7;
			this->textBoxQuantSStockUpdate->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxQuantSStockUpdate_TextChanged);
			// 
			// textBoxPrixProStockUpdate
			// 
			this->textBoxPrixProStockUpdate->Location = System::Drawing::Point(10, 236);
			this->textBoxPrixProStockUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxPrixProStockUpdate->Name = L"textBoxPrixProStockUpdate";
			this->textBoxPrixProStockUpdate->Size = System::Drawing::Size(433, 31);
			this->textBoxPrixProStockUpdate->TabIndex = 7;
			// 
			// textBoxNomStockUpdate
			// 
			this->textBoxNomStockUpdate->Location = System::Drawing::Point(12, 148);
			this->textBoxNomStockUpdate->Margin = System::Windows::Forms::Padding(6);
			this->textBoxNomStockUpdate->Name = L"textBoxNomStockUpdate";
			this->textBoxNomStockUpdate->Size = System::Drawing::Size(432, 31);
			this->textBoxNomStockUpdate->TabIndex = 6;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(6, 300);
			this->label57->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(153, 25);
			this->label57->TabIndex = 8;
			this->label57->Text = L"Quantit� Stock";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(9, 116);
			this->label58->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(56, 25);
			this->label58->TabIndex = 8;
			this->label58->Text = L"Nom";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(8, 198);
			this->label59->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(123, 25);
			this->label59->TabIndex = 8;
			this->label59->Text = L"Prix Produit";
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->textBoxIDStockDelete);
			this->tabPage10->Controls->Add(this->label60);
			this->tabPage10->Controls->Add(this->deleteButtonStock);
			this->tabPage10->Location = System::Drawing::Point(8, 39);
			this->tabPage10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage10->Size = System::Drawing::Size(1082, 501);
			this->tabPage10->TabIndex = 2;
			this->tabPage10->Text = L"Delete";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// textBoxIDStockDelete
			// 
			this->textBoxIDStockDelete->Location = System::Drawing::Point(262, 248);
			this->textBoxIDStockDelete->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIDStockDelete->Name = L"textBoxIDStockDelete";
			this->textBoxIDStockDelete->Size = System::Drawing::Size(584, 31);
			this->textBoxIDStockDelete->TabIndex = 9;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(542, 180);
			this->label60->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(32, 25);
			this->label60->TabIndex = 10;
			this->label60->Text = L"ID";
			// 
			// deleteButtonStock
			// 
			this->deleteButtonStock->Location = System::Drawing::Point(830, 420);
			this->deleteButtonStock->Margin = System::Windows::Forms::Padding(6);
			this->deleteButtonStock->Name = L"deleteButtonStock";
			this->deleteButtonStock->Size = System::Drawing::Size(246, 72);
			this->deleteButtonStock->TabIndex = 3;
			this->deleteButtonStock->Text = L"DELETE";
			this->deleteButtonStock->UseVisualStyleBackColor = true;
			// 
			// dgv_enr_stock
			// 
			this->dgv_enr_stock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_stock->Location = System::Drawing::Point(-8, 18);
			this->dgv_enr_stock->Margin = System::Windows::Forms::Padding(6);
			this->dgv_enr_stock->Name = L"dgv_enr_stock";
			this->dgv_enr_stock->RowHeadersWidth = 51;
			this->dgv_enr_stock->Size = System::Drawing::Size(1120, 450);
			this->dgv_enr_stock->TabIndex = 12;
			// 
			// btn_load_stock
			// 
			this->btn_load_stock->Location = System::Drawing::Point(-13, 480);
			this->btn_load_stock->Margin = System::Windows::Forms::Padding(6);
			this->btn_load_stock->Name = L"btn_load_stock";
			this->btn_load_stock->Size = System::Drawing::Size(1090, 102);
			this->btn_load_stock->TabIndex = 13;
			this->btn_load_stock->Text = L"Charger la base de donn�es";
			this->btn_load_stock->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button16);
			this->tabPage4->Controls->Add(this->button15);
			this->tabPage4->Controls->Add(this->button14);
			this->tabPage4->Controls->Add(this->button13);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->button11);
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Controls->Add(this->button9);
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Location = System::Drawing::Point(8, 39);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1112, 1450);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Gestion des STATS";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(876, 245);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(218, 127);
			this->button16->TabIndex = 20;
			this->button16->Text = L"Identifier les 10 articles les plus vendus";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(876, 423);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(218, 81);
			this->button15->TabIndex = 19;
			this->button15->Text = L"Identifier les 10 articles les moins vendus";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(828, 547);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(266, 317);
			this->button14->TabIndex = 18;
			this->button14->Text = L" Simuler des variations de valeurs commerciales pour en d�duire la valeur du stoc"
				L"k";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(876, 56);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(218, 127);
			this->button13->TabIndex = 17;
			this->button13->Text = L"Identifier les produitds sous le seuim de r�aprovisionnement";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(393, 547);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(285, 130);
			this->button12->TabIndex = 16;
			this->button12->Text = L"Calcul du montant des achats ppour un client";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(393, 736);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(285, 128);
			this->button11->TabIndex = 15;
			this->button11->Text = L"Calculer la valeur commerciale du stock";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(16, 736);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(260, 128);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Calculer le chiffre d\'affaire sur un mois en particulier";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(16, 547);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(260, 130);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Calculer le panier moyen apr�s remise";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(16, 66);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(812, 450);
			this->dataGridView3->TabIndex = 12;
			// 
			// tabPage11
			// 
			this->tabPage11->Location = System::Drawing::Point(8, 39);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1112, 1450);
			this->tabPage11->TabIndex = 4;
			this->tabPage11->Text = L"Commande";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1128, 1497);
			this->Controls->Add(ClientTabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recherche client";
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
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_stock))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
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
			this->ListBoxVilleClientFacInsert->Text,
			this->numericUpDownClientLivInsert->Text,
			this->textBoxAdresseClientLivInsert->Text,
			this->ListBoxVilleClientLivInsert->Text);
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
			this->numericUpDownClientFacInsert->Text,
			this->textBoxAdresseClientFacInsert->Text,
			this->ListBoxVilleClientFacInsert->Text,
			this->numericUpDownClientLivInsert->Text,
			this->textBoxAdresseClientLivInsert->Text,
			this->ListBoxVilleClientLivInsert->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}

	private: System::Void insertButtonPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterPersonnel(this->textBoxNomPersoInsert->Text,
			this->textBoxPrenomPersoInsert->Text,
			this->textBoxDateNaissanceClientInsert->Text,
			this->numericUpDownClientFacInsert->Text,
			this->textBoxAdresseClientFacInsert->Text,
			this->ListBoxVilleClientFacInsert->Text,
			this->numericUpDownClientLivInsert->Text,
			this->textBoxAdresseClientLivInsert->Text,
			this->ListBoxVilleClientLivInsert->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}

	private: System::Void deleteButtonPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerClient(this->textBoxIDClientDelete->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}

	private: System::Void updateButtonPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierClient(this->textBoxIDClientUpdate->Text,
			this->textBoxNomClientUpdate->Text,
			this->textBoxPrenomClientUpdate->Text,
			this->textBoxDateNaissanceClientUpdate->Text,
			this->numericUpDownClientFacInsert->Text,
			this->textBoxAdresseClientFacInsert->Text,
			this->ListBoxVilleClientFacInsert->Text,
			this->numericUpDownClientLivInsert->Text,
			this->textBoxAdresseClientLivInsert->Text,
			this->ListBoxVilleClientLivInsert->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}
};
}