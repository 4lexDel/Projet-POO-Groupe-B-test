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

	protected:



	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::TabControl^ ClientTabControl;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dgv_enr_personnel;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btn_load_personnel;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::Label^ searchCustomer;
	private: System::Windows::Forms::Button^ btn_load_client;

	private: System::Windows::Forms::TextBox^ searchTextBox;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_dateNaissance;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox6;
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
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TabPage^ DeleteTabClient;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TabControl^ tabControl2;
private: System::Windows::Forms::TabPage^ tabPage5;

private: System::Windows::Forms::Button^ button1;





private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBoxIDClientUpdate;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBoxDateNaissanceClientUpdate;

private: System::Windows::Forms::TextBox^ textBoxPrenomClientUpdate;

private: System::Windows::Forms::TextBox^ textBoxNomClientUpdate;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ updateButton;


private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::ListBox^ villeListBoxClientLivUpdate;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBoxAdresseClientLivUpdate;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::NumericUpDown^ numericUpDownClientLivUpdate;
private: System::Windows::Forms::ListBox^ villeListBoxClientFacUpdate;

private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ textBoxAdresseClientFacUpdate;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::NumericUpDown^ numericUpDownClientFacUpdate;

private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Button^ btn_update;








	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ClientTabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDClientUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateNaissanceClientUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomClientUpdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomClientUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->dgv_enr_client = (gcnew System::Windows::Forms::DataGridView());
			this->searchCustomer = (gcnew System::Windows::Forms::Label());
			this->btn_load_client = (gcnew System::Windows::Forms::Button());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateNaissance = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->InsertTabClient = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->UpdateTabClient = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->DeleteTabClient = (gcnew System::Windows::Forms::TabPage());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dgv_enr_personnel = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_load_personnel = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
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
			this->numericUpDownClientLivUpdate = (gcnew System::Windows::Forms::NumericUpDown());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseClientLivUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->villeListBoxClientLivUpdate = (gcnew System::Windows::Forms::ListBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownClientFacUpdate = (gcnew System::Windows::Forms::NumericUpDown());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseClientFacUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->villeListBoxClientFacUpdate = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->ClientTabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_client))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->InsertTabClient->SuspendLayout();
			this->UpdateTabClient->SuspendLayout();
			this->DeleteTabClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_personnel))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientLivUpdate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientFacUpdate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
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
			this->tabPage1->Controls->Add(this->searchCustomer);
			this->tabPage1->Controls->Add(this->btn_load_client);
			this->tabPage1->Controls->Add(this->searchTextBox);
			this->tabPage1->Controls->Add(this->btn_insert);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->btn_delete);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->btn_update);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->txt_id);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->txt_nom);
			this->tabPage1->Controls->Add(this->txt_dateNaissance);
			this->tabPage1->Controls->Add(this->txt_prenom);
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
			this->tabControl2->Location = System::Drawing::Point(9, 581);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(732, 351);
			this->tabControl2->TabIndex = 26;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listBox1);
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->label28);
			this->tabPage5->Controls->Add(this->label36);
			this->tabPage5->Controls->Add(this->textBox16);
			this->tabPage5->Controls->Add(this->textBox17);
			this->tabPage5->Controls->Add(this->label37);
			this->tabPage5->Controls->Add(this->label38);
			this->tabPage5->Controls->Add(this->numericUpDown1);
			this->tabPage5->Controls->Add(this->numericUpDown2);
			this->tabPage5->Controls->Add(this->label39);
			this->tabPage5->Controls->Add(this->label40);
			this->tabPage5->Controls->Add(this->label41);
			this->tabPage5->Controls->Add(this->textBox19);
			this->tabPage5->Controls->Add(this->textBox20);
			this->tabPage5->Controls->Add(this->textBox21);
			this->tabPage5->Controls->Add(this->label43);
			this->tabPage5->Controls->Add(this->label44);
			this->tabPage5->Controls->Add(this->button1);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(724, 322);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Insert";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(553, 269);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"INSERT";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->villeListBoxClientFacUpdate);
			this->tabPage6->Controls->Add(this->villeListBoxClientLivUpdate);
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
			this->tabPage6->Controls->Add(this->updateButton);
			this->tabPage6->Controls->Add(this->label26);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(724, 322);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Update";
			this->tabPage6->UseVisualStyleBackColor = true;
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
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
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
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(556, 269);
			this->updateButton->Margin = System::Windows::Forms::Padding(4);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(164, 46);
			this->updateButton->TabIndex = 4;
			this->updateButton->Text = L"UPDATE";
			this->updateButton->UseVisualStyleBackColor = true;
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
			this->tabPage7->Controls->Add(this->textBox23);
			this->tabPage7->Controls->Add(this->label27);
			this->tabPage7->Controls->Add(this->button18);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(724, 322);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Delete";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(157, 141);
			this->textBox23->Margin = System::Windows::Forms::Padding(4);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(391, 22);
			this->textBox23->TabIndex = 9;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(344, 73);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(21, 17);
			this->label27->TabIndex = 10;
			this->label27->Text = L"ID";
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(553, 269);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(164, 46);
			this->button18->TabIndex = 3;
			this->button18->Text = L"DELETE";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// dgv_enr_client
			// 
			this->dgv_enr_client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr_client->Location = System::Drawing::Point(9, 57);
			this->dgv_enr_client->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr_client->Name = L"dgv_enr_client";
			this->dgv_enr_client->RowHeadersWidth = 51;
			this->dgv_enr_client->Size = System::Drawing::Size(726, 288);
			this->dgv_enr_client->TabIndex = 11;
			// 
			// searchCustomer
			// 
			this->searchCustomer->AutoSize = true;
			this->searchCustomer->Location = System::Drawing::Point(6, 17);
			this->searchCustomer->Name = L"searchCustomer";
			this->searchCustomer->Size = System::Drawing::Size(139, 17);
			this->searchCustomer->TabIndex = 25;
			this->searchCustomer->Text = L"Rechercher un client";
			// 
			// btn_load_client
			// 
			this->btn_load_client->Location = System::Drawing::Point(6, 356);
			this->btn_load_client->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_client->Name = L"btn_load_client";
			this->btn_load_client->Size = System::Drawing::Size(156, 218);
			this->btn_load_client->TabIndex = 12;
			this->btn_load_client->Text = L"Charger la base de données";
			this->btn_load_client->UseVisualStyleBackColor = true;
			this->btn_load_client->Click += gcnew System::EventHandler(this, &MyForm::btn_load_client_Click);
			// 
			// searchTextBox
			// 
			this->searchTextBox->Location = System::Drawing::Point(151, 17);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(583, 22);
			this->searchTextBox->TabIndex = 24;
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(170, 356);
			this->btn_insert->Margin = System::Windows::Forms::Padding(4);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(164, 46);
			this->btn_insert->TabIndex = 13;
			this->btn_insert->Text = L"INSERT";
			this->btn_insert->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(339, 531);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(278, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Date de naissance (Format : AAAA-MM-JJ)";
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(170, 528);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(164, 46);
			this->btn_delete->TabIndex = 14;
			this->btn_delete->Text = L"DELETE";
			this->btn_delete->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(340, 466);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Prenom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(341, 413);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Nom";
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(344, 377);
			this->txt_id->Margin = System::Windows::Forms::Padding(4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(391, 22);
			this->txt_id->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(341, 356);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 23;
			this->label1->Text = L"ID";
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(343, 434);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(392, 22);
			this->txt_nom->TabIndex = 17;
			// 
			// txt_dateNaissance
			// 
			this->txt_dateNaissance->Location = System::Drawing::Point(342, 552);
			this->txt_dateNaissance->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateNaissance->Name = L"txt_dateNaissance";
			this->txt_dateNaissance->Size = System::Drawing::Size(392, 22);
			this->txt_dateNaissance->TabIndex = 18;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(342, 490);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(392, 22);
			this->txt_prenom->TabIndex = 19;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl1);
			this->tabPage2->Controls->Add(this->dgv_enr_personnel);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->btn_load_personnel);
			this->tabPage2->Controls->Add(this->textBox1);
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
			this->InsertTabClient->Controls->Add(this->button2);
			this->InsertTabClient->Controls->Add(this->textBox4);
			this->InsertTabClient->Controls->Add(this->textBox5);
			this->InsertTabClient->Controls->Add(this->textBox3);
			this->InsertTabClient->Controls->Add(this->label8);
			this->InsertTabClient->Controls->Add(this->label6);
			this->InsertTabClient->Controls->Add(this->label7);
			this->InsertTabClient->Location = System::Drawing::Point(4, 25);
			this->InsertTabClient->Name = L"InsertTabClient";
			this->InsertTabClient->Padding = System::Windows::Forms::Padding(3);
			this->InsertTabClient->Size = System::Drawing::Size(724, 322);
			this->InsertTabClient->TabIndex = 0;
			this->InsertTabClient->Text = L"Insert";
			this->InsertTabClient->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(553, 269);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"INSERT";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 147);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(392, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 85);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(392, 22);
			this->textBox5->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(7, 29);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(392, 22);
			this->textBox3->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 8);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Nom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(271, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Date d\'embauche (Format : AAAA-MM-JJ)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Prenom";
			// 
			// UpdateTabClient
			// 
			this->UpdateTabClient->Controls->Add(this->textBox2);
			this->UpdateTabClient->Controls->Add(this->label9);
			this->UpdateTabClient->Controls->Add(this->textBox13);
			this->UpdateTabClient->Controls->Add(this->textBox12);
			this->UpdateTabClient->Controls->Add(this->textBox14);
			this->UpdateTabClient->Controls->Add(this->label18);
			this->UpdateTabClient->Controls->Add(this->label16);
			this->UpdateTabClient->Controls->Add(this->button4);
			this->UpdateTabClient->Controls->Add(this->label17);
			this->UpdateTabClient->Location = System::Drawing::Point(4, 25);
			this->UpdateTabClient->Name = L"UpdateTabClient";
			this->UpdateTabClient->Padding = System::Windows::Forms::Padding(3);
			this->UpdateTabClient->Size = System::Drawing::Size(724, 322);
			this->UpdateTabClient->TabIndex = 1;
			this->UpdateTabClient->Text = L"Update";
			this->UpdateTabClient->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 48);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(391, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"ID";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(7, 213);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(392, 22);
			this->textBox13->TabIndex = 7;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(7, 151);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(392, 22);
			this->textBox12->TabIndex = 7;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(8, 95);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(392, 22);
			this->textBox14->TabIndex = 6;
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
			// button4
			// 
			this->button4->Location = System::Drawing::Point(556, 269);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 46);
			this->button4->TabIndex = 4;
			this->button4->Text = L"UPDATE";
			this->button4->UseVisualStyleBackColor = true;
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
			this->DeleteTabClient->Controls->Add(this->textBox15);
			this->DeleteTabClient->Controls->Add(this->label19);
			this->DeleteTabClient->Controls->Add(this->button3);
			this->DeleteTabClient->Location = System::Drawing::Point(4, 25);
			this->DeleteTabClient->Name = L"DeleteTabClient";
			this->DeleteTabClient->Padding = System::Windows::Forms::Padding(3);
			this->DeleteTabClient->Size = System::Drawing::Size(724, 322);
			this->DeleteTabClient->TabIndex = 2;
			this->DeleteTabClient->Text = L"Delete";
			this->DeleteTabClient->UseVisualStyleBackColor = true;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(7, 39);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(391, 22);
			this->textBox15->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(34, 18);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(21, 17);
			this->label19->TabIndex = 10;
			this->label19->Text = L"ID";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(553, 269);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 46);
			this->button3->TabIndex = 3;
			this->button3->Text = L"DELETE";
			this->button3->UseVisualStyleBackColor = true;
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Rechercher un personnel";
			// 
			// btn_load_personnel
			// 
			this->btn_load_personnel->Location = System::Drawing::Point(6, 347);
			this->btn_load_personnel->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_personnel->Name = L"btn_load_personnel";
			this->btn_load_personnel->Size = System::Drawing::Size(727, 65);
			this->btn_load_personnel->TabIndex = 1;
			this->btn_load_personnel->Text = L"Charger la base de données";
			this->btn_load_personnel->UseVisualStyleBackColor = true;
			this->btn_load_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_load_personnel_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(184, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(553, 22);
			this->textBox1->TabIndex = 9;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->textBox6);
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
			this->label15->Text = L"Seuil de réapprovisionnement";
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(144, 17);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Rechercher un article";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 356);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 218);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Charger la base de données";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(151, 17);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(583, 22);
			this->textBox6->TabIndex = 24;
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
			this->label12->Text = L"Quantité stock";
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
			this->label14->Text = L"Référence";
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
			this->button14->Text = L" Simuler des variations de valeurs commerciales pour en déduire la valeur du stoc"
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
			this->button13->Text = L"Identifier les produitds sous le seuim de réaprovisionnement";
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
			this->button9->Text = L"Calculer le panier moyen après remise";
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
			// numericUpDownClientLivUpdate
			// 
			this->numericUpDownClientLivUpdate->Location = System::Drawing::Point(330, 75);
			this->numericUpDownClientLivUpdate->Name = L"numericUpDownClientLivUpdate";
			this->numericUpDownClientLivUpdate->Size = System::Drawing::Size(69, 22);
			this->numericUpDownClientLivUpdate->TabIndex = 23;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(350, 54);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 17);
			this->label29->TabIndex = 24;
			this->label29->Text = L"N°";
			// 
			// textBoxAdresseClientLivUpdate
			// 
			this->textBoxAdresseClientLivUpdate->Location = System::Drawing::Point(429, 75);
			this->textBoxAdresseClientLivUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseClientLivUpdate->Name = L"textBoxAdresseClientLivUpdate";
			this->textBoxAdresseClientLivUpdate->Size = System::Drawing::Size(133, 22);
			this->textBoxAdresseClientLivUpdate->TabIndex = 25;
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
			// villeListBoxClientLivUpdate
			// 
			this->villeListBoxClientLivUpdate->FormattingEnabled = true;
			this->villeListBoxClientLivUpdate->ItemHeight = 16;
			this->villeListBoxClientLivUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->villeListBoxClientLivUpdate->Location = System::Drawing::Point(593, 75);
			this->villeListBoxClientLivUpdate->Name = L"villeListBoxClientLivUpdate";
			this->villeListBoxClientLivUpdate->Size = System::Drawing::Size(90, 20);
			this->villeListBoxClientLivUpdate->TabIndex = 27;
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
			this->label32->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// numericUpDownClientFacUpdate
			// 
			this->numericUpDownClientFacUpdate->Location = System::Drawing::Point(330, 211);
			this->numericUpDownClientFacUpdate->Name = L"numericUpDownClientFacUpdate";
			this->numericUpDownClientFacUpdate->Size = System::Drawing::Size(69, 22);
			this->numericUpDownClientFacUpdate->TabIndex = 23;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(350, 190);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 17);
			this->label33->TabIndex = 24;
			this->label33->Text = L"N°";
			// 
			// textBoxAdresseClientFacUpdate
			// 
			this->textBoxAdresseClientFacUpdate->Location = System::Drawing::Point(429, 211);
			this->textBoxAdresseClientFacUpdate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseClientFacUpdate->Name = L"textBoxAdresseClientFacUpdate";
			this->textBoxAdresseClientFacUpdate->Size = System::Drawing::Size(133, 22);
			this->textBoxAdresseClientFacUpdate->TabIndex = 25;
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
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(605, 187);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(34, 17);
			this->label35->TabIndex = 26;
			this->label35->Text = L"Ville";
			// 
			// villeListBoxClientFacUpdate
			// 
			this->villeListBoxClientFacUpdate->FormattingEnabled = true;
			this->villeListBoxClientFacUpdate->ItemHeight = 16;
			this->villeListBoxClientFacUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon",
					L"Rouen", L"St-Nazaire", L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->villeListBoxClientFacUpdate->Location = System::Drawing::Point(593, 211);
			this->villeListBoxClientFacUpdate->Name = L"villeListBoxClientFacUpdate";
			this->villeListBoxClientFacUpdate->Size = System::Drawing::Size(90, 20);
			this->villeListBoxClientFacUpdate->TabIndex = 27;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon", L"Rouen", L"St-Nazaire",
					L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->listBox1->Location = System::Drawing::Point(595, 222);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(90, 20);
			this->listBox1->TabIndex = 49;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Nantes", L"Paris", L"Lyon", L"Rouen", L"St-Nazaire",
					L"Marseille", L"Toulouse", L"Fontainebleau", L"Calais", L"Berck-sur-mer", L"Brest", L"Angers"
			});
			this->listBox2->Location = System::Drawing::Point(595, 86);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(90, 20);
			this->listBox2->TabIndex = 48;
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
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(431, 222);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(133, 22);
			this->textBox16->TabIndex = 43;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(431, 86);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(133, 22);
			this->textBox17->TabIndex = 42;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(352, 201);
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
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(332, 222);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(69, 22);
			this->numericUpDown1->TabIndex = 39;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(332, 86);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(69, 22);
			this->numericUpDown2->TabIndex = 38;
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
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(26, 202);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(220, 22);
			this->textBox19->TabIndex = 31;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(26, 140);
			this->textBox20->Margin = System::Windows::Forms::Padding(4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(220, 22);
			this->textBox20->TabIndex = 30;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(27, 84);
			this->textBox21->Margin = System::Windows::Forms::Padding(4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(219, 22);
			this->textBox21->TabIndex = 29;
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
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(169, 442);
			this->btn_update->Margin = System::Windows::Forms::Padding(4);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(164, 46);
			this->btn_update->TabIndex = 15;
			this->btn_update->Text = L"UPDATE";
			this->btn_update->UseVisualStyleBackColor = true;
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
			this->tabPage1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_client))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->InsertTabClient->ResumeLayout(false);
			this->InsertTabClient->PerformLayout();
			this->UpdateTabClient->ResumeLayout(false);
			this->UpdateTabClient->PerformLayout();
			this->DeleteTabClient->ResumeLayout(false);
			this->DeleteTabClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr_personnel))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientLivUpdate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownClientFacUpdate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:void resetInput() {
		this->txt_id->Text = "";
		this->txt_nom->Text = "";
		this->txt_prenom->Text = "";
		this->txt_dateNaissance->Text = "";
	}

	private: System::Void btn_load_client_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr_client->Refresh();
		this->oDs = this->oSvc->selectionnerClient("A");
		this->dgv_enr_client->DataSource = this->oDs;
		this->dgv_enr_client->DataMember = "A";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterClient(this->txt_nom->Text, this->txt_prenom->Text, this->txt_dateNaissance->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc->supprimerClient(this->txt_id->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}
	private: System::Void searchTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ restriction = this->searchTextBox->Text;

		/*this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl", restriction);
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";*/
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierClient(this->txt_id->Text, this->txt_nom->Text, this->txt_prenom->Text, this->txt_dateNaissance->Text);
		btn_load_client_Click(sender, e);
		resetInput();
	}

private: System::Void btn_load_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr_personnel->Refresh();
	this->oDs = this->oSvc->selectionnerPersonnel("B");
	this->dgv_enr_personnel->DataSource = this->oDs;
	this->dgv_enr_personnel->DataMember = "B";
}

private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}