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

	private: System::Windows::Forms::TabControl^ ClientTabControl;
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













	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label15;
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
			this->ClientTabControl = (gcnew System::Windows::Forms::TabControl());
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
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
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
			this->ClientTabControl->SuspendLayout();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// ClientTabControl
			// 
			this->ClientTabControl->Controls->Add(this->tabPage1);
			this->ClientTabControl->Controls->Add(this->tabPage2);
			this->ClientTabControl->Controls->Add(this->tabPage3);
			this->ClientTabControl->Controls->Add(this->tabPage4);
			this->ClientTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientTabControl->Location = System::Drawing::Point(0, 0);
			this->ClientTabControl->Name = L"ClientTabControl";
			this->ClientTabControl->SelectedIndex = 0;
			this->ClientTabControl->Size = System::Drawing::Size(752, 958);
			this->ClientTabControl->TabIndex = 11;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->dgv_enr_client);
			this->tabPage1->Controls->Add(this->btn_load_client);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(744, 929);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(6, 435);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(732, 351);
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
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(724, 322);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Insert";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// ListBoxVilleClientFacInsert
			// 
			this->ListBoxVilleClientFacInsert->FormattingEnabled = true;
			this->ListBoxVilleClientFacInsert->ItemHeight = 16;
			this->ListBoxVilleClientFacInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->ListBoxVilleClientFacInsert->Location = System::Drawing::Point(595, 222);
			this->ListBoxVilleClientFacInsert->Name = L"ListBoxVilleClientFacInsert";
			this->ListBoxVilleClientFacInsert->Size = System::Drawing::Size(90, 20);
			this->ListBoxVilleClientFacInsert->TabIndex = 49;
			// 
			// ListBoxVilleClientLivInsert
			// 
			this->ListBoxVilleClientLivInsert->FormattingEnabled = true;
			this->ListBoxVilleClientLivInsert->ItemHeight = 16;
			this->ListBoxVilleClientLivInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->ListBoxVilleClientLivInsert->Location = System::Drawing::Point(595, 86);
			this->ListBoxVilleClientLivInsert->Name = L"ListBoxVilleClientLivInsert";
			this->ListBoxVilleClientLivInsert->Size = System::Drawing::Size(90, 20);
			this->ListBoxVilleClientLivInsert->TabIndex = 48;
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
			this->label22->Location = System::Drawing::Point(607, 62);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(34, 17);
			this->label22->TabIndex = 46;
			this->label22->Text = L"Ville";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(462, 201);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(60, 17);
			this->label28->TabIndex = 45;
			this->label28->Text = L"Adresse";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(462, 65);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(60, 17);
			this->label36->TabIndex = 44;
			this->label36->Text = L"Adresse";
			// 
			// textBoxAdresseClientFacInsert
			// 
			this->textBoxAdresseClientFacInsert->Location = System::Drawing::Point(431, 222);
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
			this->label37->Location = System::Drawing::Point(352, 201);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(24, 17);
			this->label37->TabIndex = 40;
			this->label37->Text = L"N�";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(352, 65);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(24, 17);
			this->label38->TabIndex = 41;
			this->label38->Text = L"N�";
			// 
			// numericUpDownClientFacInsert
			// 
			this->numericUpDownClientFacInsert->Location = System::Drawing::Point(332, 222);
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
			this->textBoxDateNaissanceClientInsert->Location = System::Drawing::Point(26, 202);
			this->textBoxDateNaissanceClientInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDateNaissanceClientInsert->Name = L"textBoxDateNaissanceClientInsert";
			this->textBoxDateNaissanceClientInsert->Size = System::Drawing::Size(220, 22);
			this->textBoxDateNaissanceClientInsert->TabIndex = 31;
			// 
			// textBoxPrenomClientInsert
			// 
			this->textBoxPrenomClientInsert->Location = System::Drawing::Point(26, 140);
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
			// insertButtonClient
			// 
			this->insertButtonClient->Location = System::Drawing::Point(553, 269);
			this->insertButtonClient->Margin = System::Windows::Forms::Padding(4);
			this->insertButtonClient->Name = L"insertButtonClient";
			this->insertButtonClient->Size = System::Drawing::Size(164, 46);
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
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(724, 322);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Update";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// ListBoxVilleClientFacUpdate
			// 
			this->ListBoxVilleClientFacUpdate->FormattingEnabled = true;
			this->ListBoxVilleClientFacUpdate->ItemHeight = 16;
			this->ListBoxVilleClientFacUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->ListBoxVilleClientFacUpdate->Location = System::Drawing::Point(593, 211);
			this->ListBoxVilleClientFacUpdate->Name = L"ListBoxVilleClientFacUpdate";
			this->ListBoxVilleClientFacUpdate->Size = System::Drawing::Size(90, 20);
			this->ListBoxVilleClientFacUpdate->TabIndex = 27;
			// 
			// ListBoxVilleClientLivUpdate
			// 
			this->ListBoxVilleClientLivUpdate->FormattingEnabled = true;
			this->ListBoxVilleClientLivUpdate->ItemHeight = 16;
			this->ListBoxVilleClientLivUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->ListBoxVilleClientLivUpdate->Location = System::Drawing::Point(593, 75);
			this->ListBoxVilleClientLivUpdate->Name = L"ListBoxVilleClientLivUpdate";
			this->ListBoxVilleClientLivUpdate->Size = System::Drawing::Size(90, 20);
			this->ListBoxVilleClientLivUpdate->TabIndex = 27;
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
			this->label34->Location = System::Drawing::Point(460, 190);
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
			this->label33->Location = System::Drawing::Point(350, 190);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 17);
			this->label33->TabIndex = 24;
			this->label33->Text = L"N�";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(350, 54);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 17);
			this->label29->TabIndex = 24;
			this->label29->Text = L"N�";
			// 
			// numericUpDownClientFacUpdate
			// 
			this->numericUpDownClientFacUpdate->Location = System::Drawing::Point(330, 211);
			this->numericUpDownClientFacUpdate->Name = L"numericUpDownClientFacUpdate";
			this->numericUpDownClientFacUpdate->Size = System::Drawing::Size(69, 22);
			this->numericUpDownClientFacUpdate->TabIndex = 23;
			// 
			// numericUpDownClientLivUpdate
			// 
			this->numericUpDownClientLivUpdate->Location = System::Drawing::Point(330, 75);
			this->numericUpDownClientLivUpdate->Name = L"numericUpDownClientLivUpdate";
			this->numericUpDownClientLivUpdate->Size = System::Drawing::Size(69, 22);
			this->numericUpDownClientLivUpdate->TabIndex = 23;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(382, 154);
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
			this->label24->Location = System::Drawing::Point(382, 18);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(156, 17);
			this->label24->TabIndex = 22;
			this->label24->Text = L"Adresse de livraison";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 195);
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
			this->textBoxIDClientUpdate->Size = System::Drawing::Size(218, 22);
			this->textBoxIDClientUpdate->TabIndex = 5;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(6, 30);
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
			this->textBoxNomClientUpdate->Location = System::Drawing::Point(8, 98);
			this->textBoxNomClientUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomClientUpdate->Name = L"textBoxNomClientUpdate";
			this->textBoxNomClientUpdate->Size = System::Drawing::Size(219, 22);
			this->textBoxNomClientUpdate->TabIndex = 6;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 77);
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
			this->updateButtonClient->Size = System::Drawing::Size(164, 46);
			this->updateButtonClient->TabIndex = 4;
			this->updateButtonClient->Text = L"UPDATE";
			this->updateButtonClient->UseVisualStyleBackColor = true;
			this->updateButtonClient->Click += gcnew System::EventHandler(this, &MyForm::updateButtonClient_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(5, 130);
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
			this->label27->Location = System::Drawing::Point(344, 87);
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
			this->deleteButtonClient->Size = System::Drawing::Size(164, 46);
			this->deleteButtonClient->TabIndex = 3;
			this->deleteButtonClient->Text = L"DELETE";
			this->deleteButtonClient->UseVisualStyleBackColor = true;
			this->deleteButtonClient->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonClient_Click);
			// 
			// dgv_enr_client
			// 
			this->dgv_enr_client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_client->Location = System::Drawing::Point(6, 7);
			this->dgv_enr_client->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr_client->Name = L"dgv_enr_client";
			this->dgv_enr_client->RowHeadersWidth = 51;
			this->dgv_enr_client->Size = System::Drawing::Size(726, 341);
			this->dgv_enr_client->TabIndex = 11;
			// 
			// btn_load_client
			// 
			this->btn_load_client->Location = System::Drawing::Point(6, 356);
			this->btn_load_client->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_client->Name = L"btn_load_client";
			this->btn_load_client->Size = System::Drawing::Size(729, 72);
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
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(744, 929);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->InsertTabClient);
			this->tabControl1->Controls->Add(this->UpdateTabClient);
			this->tabControl1->Controls->Add(this->DeleteTabClient);
			this->tabControl1->Location = System::Drawing::Point(6, 436);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(732, 351);
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
			this->InsertTabClient->Location = System::Drawing::Point(4, 25);
			this->InsertTabClient->Name = L"InsertTabClient";
			this->InsertTabClient->Padding = System::Windows::Forms::Padding(3);
			this->InsertTabClient->Size = System::Drawing::Size(724, 322);
			this->InsertTabClient->TabIndex = 0;
			this->InsertTabClient->Text = L"Insert";
			this->InsertTabClient->UseVisualStyleBackColor = true;
			// 
			// listBoxVillePersoInsert
			// 
			this->listBoxVillePersoInsert->FormattingEnabled = true;
			this->listBoxVillePersoInsert->ItemHeight = 16;
			this->listBoxVillePersoInsert->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon", L"Rouen",
					L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->listBoxVillePersoInsert->Location = System::Drawing::Point(623, 144);
			this->listBoxVillePersoInsert->Name = L"listBoxVillePersoInsert";
			this->listBoxVillePersoInsert->Size = System::Drawing::Size(90, 20);
			this->listBoxVillePersoInsert->TabIndex = 72;
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
			this->label7->Location = System::Drawing::Point(490, 123);
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
			this->label8->Text = L"N�";
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
			this->label10->Location = System::Drawing::Point(470, 76);
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
			this->label42->Location = System::Drawing::Point(20, 215);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(85, 17);
			this->label42->TabIndex = 61;
			this->label42->Text = L"ID sup�rieur";
			// 
			// textBoxDateEmbauchePersoInsert
			// 
			this->textBoxDateEmbauchePersoInsert->Location = System::Drawing::Point(21, 180);
			this->textBoxDateEmbauchePersoInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDateEmbauchePersoInsert->Name = L"textBoxDateEmbauchePersoInsert";
			this->textBoxDateEmbauchePersoInsert->Size = System::Drawing::Size(290, 22);
			this->textBoxDateEmbauchePersoInsert->TabIndex = 60;
			// 
			// textBoxPrenomPersoInsert
			// 
			this->textBoxPrenomPersoInsert->Location = System::Drawing::Point(21, 118);
			this->textBoxPrenomPersoInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomPersoInsert->Name = L"textBoxPrenomPersoInsert";
			this->textBoxPrenomPersoInsert->Size = System::Drawing::Size(290, 22);
			this->textBoxPrenomPersoInsert->TabIndex = 59;
			// 
			// textBoxNomPersoInsert
			// 
			this->textBoxNomPersoInsert->Location = System::Drawing::Point(22, 62);
			this->textBoxNomPersoInsert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomPersoInsert->Name = L"textBoxNomPersoInsert";
			this->textBoxNomPersoInsert->Size = System::Drawing::Size(289, 22);
			this->textBoxNomPersoInsert->TabIndex = 58;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(18, 159);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(271, 17);
			this->label46->TabIndex = 62;
			this->label46->Text = L"Date d\'embauche (Format : AAAA-MM-JJ)";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(20, 41);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(37, 17);
			this->label47->TabIndex = 65;
			this->label47->Text = L"Nom";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(19, 94);
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
			this->insertButtonPerso->Size = System::Drawing::Size(164, 46);
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
			this->UpdateTabClient->Location = System::Drawing::Point(4, 25);
			this->UpdateTabClient->Name = L"UpdateTabClient";
			this->UpdateTabClient->Padding = System::Windows::Forms::Padding(3);
			this->UpdateTabClient->Size = System::Drawing::Size(724, 322);
			this->UpdateTabClient->TabIndex = 1;
			this->UpdateTabClient->Text = L"Update";
			this->UpdateTabClient->UseVisualStyleBackColor = true;
			// 
			// listBoxVillePersoUpdate
			// 
			this->listBoxVillePersoUpdate->FormattingEnabled = true;
			this->listBoxVillePersoUpdate->ItemHeight = 16;
			this->listBoxVillePersoUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon", L"Rouen",
					L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->listBoxVillePersoUpdate->Location = System::Drawing::Point(615, 142);
			this->listBoxVillePersoUpdate->Name = L"listBoxVillePersoUpdate";
			this->listBoxVillePersoUpdate->Size = System::Drawing::Size(90, 20);
			this->listBoxVillePersoUpdate->TabIndex = 55;
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
			this->label2->Location = System::Drawing::Point(482, 121);
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
			this->updateButtonPerso->Size = System::Drawing::Size(164, 46);
			this->updateButtonPerso->TabIndex = 4;
			this->updateButtonPerso->Text = L"UPDATE";
			this->updateButtonPerso->UseVisualStyleBackColor = true;
			this->updateButtonPerso->Click += gcnew System::EventHandler(this, &MyForm::updateButtonPerso_Click);
			// 
			// textBoxAdressePersoUpdate
			// 
			this->textBoxAdressePersoUpdate->Location = System::Drawing::Point(451, 142);
			this->textBoxAdressePersoUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdressePersoUpdate->Name = L"textBoxAdressePersoUpdate";
			this->textBoxAdressePersoUpdate->Size = System::Drawing::Size(133, 22);
			this->textBoxAdressePersoUpdate->TabIndex = 52;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(372, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 51;
			this->label3->Text = L"N�";
			// 
			// numericUpDownPersoUpdate
			// 
			this->numericUpDownPersoUpdate->Location = System::Drawing::Point(352, 142);
			this->numericUpDownPersoUpdate->Name = L"numericUpDownPersoUpdate";
			this->numericUpDownPersoUpdate->Size = System::Drawing::Size(69, 22);
			this->numericUpDownPersoUpdate->TabIndex = 50;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(462, 74);
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
			this->label5->Location = System::Drawing::Point(6, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ID sup�rieur";
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
			this->label9->Location = System::Drawing::Point(6, 27);
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
			this->textBoxDateEmbauchePersoUpdate->Size = System::Drawing::Size(290, 22);
			this->textBoxDateEmbauchePersoUpdate->TabIndex = 7;
			// 
			// textBoxPrenomPersoUpdate
			// 
			this->textBoxPrenomPersoUpdate->Location = System::Drawing::Point(7, 151);
			this->textBoxPrenomPersoUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomPersoUpdate->Name = L"textBoxPrenomPersoUpdate";
			this->textBoxPrenomPersoUpdate->Size = System::Drawing::Size(290, 22);
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
			this->label16->Location = System::Drawing::Point(6, 74);
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
			this->deleteButtonPerso->Size = System::Drawing::Size(164, 46);
			this->deleteButtonPerso->TabIndex = 3;
			this->deleteButtonPerso->Text = L"DELETE";
			this->deleteButtonPerso->UseVisualStyleBackColor = true;
			this->deleteButtonPerso->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonPerso_Click);
			// 
			// dgv_enr_personnel
			// 
			this->dgv_enr_personnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_personnel->Location = System::Drawing::Point(9, 51);
			this->dgv_enr_personnel->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr_personnel->Name = L"dgv_enr_personnel";
			this->dgv_enr_personnel->RowHeadersWidth = 51;
			this->dgv_enr_personnel->Size = System::Drawing::Size(747, 288);
			this->dgv_enr_personnel->TabIndex = 0;
			// 
			// btn_load_personnel
			// 
			this->btn_load_personnel->Location = System::Drawing::Point(6, 347);
			this->btn_load_personnel->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_personnel->Name = L"btn_load_personnel";
			this->btn_load_personnel->Size = System::Drawing::Size(727, 65);
			this->btn_load_personnel->TabIndex = 1;
			this->btn_load_personnel->Text = L"Charger la base de donn�es";
			this->btn_load_personnel->UseVisualStyleBackColor = true;
			this->btn_load_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_load_personnel_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(744, 929);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Stock";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(345, 554);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(389, 22);
			this->textBox11->TabIndex = 27;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(343, 536);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(196, 17);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Seuil de r�approvisionnement";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(9, 57);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(726, 262);
			this->dataGridView2->TabIndex = 11;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 356);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 218);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Charger la base de donn�es";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(170, 356);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(164, 46);
			this->button6->TabIndex = 13;
			this->button6->Text = L"INSERT";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(341, 482);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 17);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Prix du produit";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(170, 528);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(164, 46);
			this->button7->TabIndex = 14;
			this->button7->Text = L"DELETE";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(341, 423);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 17);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Quantit� stock";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(169, 442);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(164, 46);
			this->button8->TabIndex = 15;
			this->button8->Text = L"UPDATE";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(341, 372);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 17);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Nom";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(346, 349);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(391, 22);
			this->textBox7->TabIndex = 16;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(341, 329);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(74, 17);
			this->label14->TabIndex = 23;
			this->label14->Text = L"R�f�rence";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(345, 392);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(392, 22);
			this->textBox8->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(345, 502);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(392, 22);
			this->textBox9->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(345, 443);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(392, 22);
			this->textBox10->TabIndex = 19;
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
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(2);
			this->tabPage4->Size = System::Drawing::Size(744, 929);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Gestion des STATS";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(584, 157);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(145, 81);
			this->button16->TabIndex = 20;
			this->button16->Text = L"Identifier les 10 articles les plus vendus";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(584, 271);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(145, 52);
			this->button15->TabIndex = 19;
			this->button15->Text = L"Identifier les 10 articles les moins vendus";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(552, 350);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(177, 203);
			this->button14->TabIndex = 18;
			this->button14->Text = L" Simuler des variations de valeurs commerciales pour en d�duire la valeur du stoc"
				L"k";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(584, 36);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(145, 81);
			this->button13->TabIndex = 17;
			this->button13->Text = L"Identifier les produitds sous le seuim de r�aprovisionnement";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(262, 350);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(190, 83);
			this->button12->TabIndex = 16;
			this->button12->Text = L"Calcul du montant des achats ppour un client";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(262, 471);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(190, 82);
			this->button11->TabIndex = 15;
			this->button11->Text = L"Calculer la valeur commerciale du stock";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(11, 471);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(173, 82);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Calculer le chiffre d\'affaire sur un mois en particulier";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(11, 350);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(173, 83);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Calculer le panier moyen apr�s remise";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(11, 42);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(541, 288);
			this->dataGridView3->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 958);
			this->Controls->Add(this->ClientTabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recherche client";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ClientTabControl->ResumeLayout(false);
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
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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