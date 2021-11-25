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
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;


	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ searchTextBox;

	private: System::Windows::Forms::Label^ searchCustomer;
	private: System::Windows::Forms::TextBox^ txt_dateNaissance;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabControl^ ClientTabControl;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
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
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchCustomer = (gcnew System::Windows::Forms::Label());
			this->txt_dateNaissance = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ClientTabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->ClientTabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(9, 48);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(726, 288);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(6, 347);
			this->btn_load->Margin = System::Windows::Forms::Padding(4);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(156, 218);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Charger la base de données";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(170, 347);
			this->btn_insert->Margin = System::Windows::Forms::Padding(4);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(164, 46);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INSERT";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(170, 519);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(164, 46);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DELETE";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(169, 433);
			this->btn_update->Margin = System::Windows::Forms::Padding(4);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(164, 46);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"UPDATE";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(344, 368);
			this->txt_id->Margin = System::Windows::Forms::Padding(4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(391, 22);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(343, 425);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(392, 22);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(342, 481);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(392, 22);
			this->txt_prenom->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(341, 347);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(341, 404);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(340, 457);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Prenom";
			// 
			// searchTextBox
			// 
			this->searchTextBox->Location = System::Drawing::Point(151, 8);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(583, 22);
			this->searchTextBox->TabIndex = 9;
			this->searchTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::searchTextBox_TextChanged);
			// 
			// searchCustomer
			// 
			this->searchCustomer->AutoSize = true;
			this->searchCustomer->Location = System::Drawing::Point(6, 8);
			this->searchCustomer->Name = L"searchCustomer";
			this->searchCustomer->Size = System::Drawing::Size(139, 17);
			this->searchCustomer->TabIndex = 10;
			this->searchCustomer->Text = L"Rechercher un client";
			// 
			// txt_dateNaissance
			// 
			this->txt_dateNaissance->Location = System::Drawing::Point(342, 543);
			this->txt_dateNaissance->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateNaissance->Name = L"txt_dateNaissance";
			this->txt_dateNaissance->Size = System::Drawing::Size(392, 22);
			this->txt_dateNaissance->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(339, 522);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Date de naissance";
			// 
			// ClientTabControl
			// 
			this->ClientTabControl->Controls->Add(this->tabPage1);
			this->ClientTabControl->Controls->Add(this->tabPage2);
			this->ClientTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientTabControl->Location = System::Drawing::Point(0, 0);
			this->ClientTabControl->Name = L"ClientTabControl";
			this->ClientTabControl->SelectedIndex = 0;
			this->ClientTabControl->Size = System::Drawing::Size(752, 600);
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
			this->tabPage1->Name = L"Client";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(744, 571);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(752, 575);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 600);
			this->Controls->Add(this->ClientTabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recherche clients";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ClientTabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
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