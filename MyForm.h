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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::Label^ searchCustomer;
	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::TextBox^ searchTextBox;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_update;
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
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->searchCustomer = (gcnew System::Windows::Forms::Label());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateNaissance = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
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
			this->ClientTabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->ClientTabControl->Size = System::Drawing::Size(752, 1051);
			this->ClientTabControl->TabIndex = 11;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dgv_enr);
			this->tabPage1->Controls->Add(this->searchCustomer);
			this->tabPage1->Controls->Add(this->btn_load);
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
			this->tabPage1->Size = System::Drawing::Size(744, 1022);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(9, 57);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(726, 288);
			this->dgv_enr->TabIndex = 11;
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
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(6, 356);
			this->btn_load->Margin = System::Windows::Forms::Padding(4);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(156, 218);
			this->btn_load->TabIndex = 12;
			this->btn_load->Text = L"Charger la base de données";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
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
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(744, 1022);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(30, 51);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(726, 288);
			this->dataGridView1->TabIndex = 0;
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 347);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 218);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Charger la base de données";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(184, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(553, 22);
			this->textBox1->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(170, 347);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"INSERT";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(339, 522);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(271, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Date d\'embauche (Format : AAAA-MM-JJ)";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(170, 519);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 46);
			this->button3->TabIndex = 3;
			this->button3->Text = L"DELETE";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(340, 457);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Prenom";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(169, 433);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 46);
			this->button4->TabIndex = 4;
			this->button4->Text = L"UPDATE";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(341, 404);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Nom";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(344, 368);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(391, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(341, 347);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"ID";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(343, 425);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(392, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(342, 543);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(392, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(342, 481);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(392, 22);
			this->textBox5->TabIndex = 7;
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
			this->tabPage3->Size = System::Drawing::Size(744, 1022);
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
			this->tabPage4->Size = System::Drawing::Size(744, 1022);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 1051);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:void resetInput() {
		this->txt_id->Text = "";
		this->txt_nom->Text = "";
		this->txt_prenom->Text = "";
		this->txt_dateNaissance->Text = "";
	}

	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerClient("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterClient(this->txt_nom->Text, this->txt_prenom->Text, this->txt_dateNaissance->Text);
		btn_load_Click(sender, e);
		resetInput();
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc->supprimerClient(this->txt_id->Text);
		btn_load_Click(sender, e);
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
		btn_load_Click(sender, e);
		resetInput();
	}

};
}