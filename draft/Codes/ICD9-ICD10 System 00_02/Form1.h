#pragma once
#include "AboutWin.h"

namespace prototype00_01
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		AboutWin ^info;

	public:
		Form1(void)
		{
			InitializeComponent();
			info = gcnew AboutWin;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  BodyParts;
	private: System::Windows::Forms::ComboBox^  HeadParts;
	private: System::Windows::Forms::ComboBox^  FootParts;
	private: System::Windows::Forms::ComboBox^  Mouth;
	private: System::Windows::Forms::ComboBox^  Jaw;
	private: System::Windows::Forms::Label^  Version;



	private: System::Windows::Forms::Button^  Search;

	private: System::Windows::Forms::Button^  Reset;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ICD9g;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ICD10g;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Discript;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
















	protected: 


	protected: 

	protected: 


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BodyParts = (gcnew System::Windows::Forms::ComboBox());
			this->HeadParts = (gcnew System::Windows::Forms::ComboBox());
			this->FootParts = (gcnew System::Windows::Forms::ComboBox());
			this->Mouth = (gcnew System::Windows::Forms::ComboBox());
			this->Jaw = (gcnew System::Windows::Forms::ComboBox());
			this->Version = (gcnew System::Windows::Forms::Label());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ICD9g = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ICD10g = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Discript = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// BodyParts
			// 
			this->BodyParts->AllowDrop = true;
			this->BodyParts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BodyParts->FormattingEnabled = true;
			this->BodyParts->Items->AddRange(gcnew cli::array< System::Object^  >(11) {L"  ", L"Head", L"Neck", L"Sholder", L"Arm", L"Back", 
				L"Chest", L"Stomic", L"Knee", L"Leg", L"Foot"});
			this->BodyParts->Location = System::Drawing::Point(12, 56);
			this->BodyParts->Name = L"BodyParts";
			this->BodyParts->Size = System::Drawing::Size(121, 21);
			this->BodyParts->TabIndex = 0;
			this->BodyParts->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// HeadParts
			// 
			this->HeadParts->AllowDrop = true;
			this->HeadParts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->HeadParts->FormattingEnabled = true;
			this->HeadParts->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"  ", L"Forehead", L"Eye", L"Ear", L"Nose", L"Mouth"});
			this->HeadParts->Location = System::Drawing::Point(12, 83);
			this->HeadParts->Name = L"HeadParts";
			this->HeadParts->Size = System::Drawing::Size(121, 21);
			this->HeadParts->TabIndex = 1;
			this->HeadParts->Visible = false;
			this->HeadParts->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::HeadParts_SelectedIndexChanged);
			// 
			// FootParts
			// 
			this->FootParts->AllowDrop = true;
			this->FootParts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FootParts->FormattingEnabled = true;
			this->FootParts->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Toe", L"Ankle", L"Heal"});
			this->FootParts->Location = System::Drawing::Point(12, 83);
			this->FootParts->Name = L"FootParts";
			this->FootParts->Size = System::Drawing::Size(121, 21);
			this->FootParts->TabIndex = 2;
			this->FootParts->Visible = false;
			// 
			// Mouth
			// 
			this->Mouth->AllowDrop = true;
			this->Mouth->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Mouth->FormattingEnabled = true;
			this->Mouth->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Teeth", L"Jaw", L"Toung", L"Throat"});
			this->Mouth->Location = System::Drawing::Point(12, 110);
			this->Mouth->Name = L"Mouth";
			this->Mouth->Size = System::Drawing::Size(121, 21);
			this->Mouth->TabIndex = 3;
			this->Mouth->Visible = false;
			this->Mouth->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Mouth_SelectedIndexChanged_1);
			// 
			// Jaw
			// 
			this->Jaw->AllowDrop = true;
			this->Jaw->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Jaw->FormattingEnabled = true;
			this->Jaw->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Soar", L"Bacteria"});
			this->Jaw->Location = System::Drawing::Point(12, 137);
			this->Jaw->Name = L"Jaw";
			this->Jaw->Size = System::Drawing::Size(121, 21);
			this->Jaw->TabIndex = 4;
			this->Jaw->Visible = false;
			// 
			// Version
			// 
			this->Version->AutoSize = true;
			this->Version->Location = System::Drawing::Point(488, 386);
			this->Version->Name = L"Version";
			this->Version->Size = System::Drawing::Size(44, 13);
			this->Version->TabIndex = 6;
			this->Version->Text = L"V 00.02";
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(12, 373);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(75, 23);
			this->Search->TabIndex = 13;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = true;
			// 
			// Reset
			// 
			this->Reset->Location = System::Drawing::Point(93, 373);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(75, 23);
			this->Reset->TabIndex = 15;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &Form1::Reset_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->ICD9g, 
				this->ICD10g, this->Discript});
			this->dataGridView1->Location = System::Drawing::Point(139, 56);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(393, 311);
			this->dataGridView1->TabIndex = 17;
			// 
			// ICD9g
			// 
			this->ICD9g->HeaderText = L"ICD9";
			this->ICD9g->Name = L"ICD9g";
			// 
			// ICD10g
			// 
			this->ICD10g->HeaderText = L"ICD10";
			this->ICD10g->Name = L"ICD10g";
			// 
			// Discript
			// 
			this->Discript->HeaderText = L"Discription";
			this->Discript->Name = L"Discript";
			this->Discript->Width = 150;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(544, 24);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->AutoSize = false;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"&Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"About...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 408);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->Version);
			this->Controls->Add(this->Jaw);
			this->Controls->Add(this->Mouth);
			this->Controls->Add(this->FootParts);
			this->Controls->Add(this->HeadParts);
			this->Controls->Add(this->BodyParts);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"ICD9/ICD10 System";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				  if (BodyParts->SelectedItem == "Head")
				 {
					 HeadParts->Visible = true;
				 }
				 else
				 {
					 HeadParts->Visible = false;
					 HeadParts->SelectedIndex = 0;

				 }
				   if (BodyParts->SelectedItem == "Foot")
				 {
					 FootParts->Visible = true;
				 }
				 else
				 {
					 FootParts->Visible = false;
				 }
			 }
	private: System::Void HeadParts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				   if (HeadParts->SelectedItem == "Mouth")
				 {
					 Mouth->Visible = true;
				 }
				 else
				 {
					 Mouth->Visible = false;
					 Mouth->SelectedIndex = 0;
				 }
			 }
	
	private: System::Void Mouth_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
				  if (Mouth->SelectedIndex == 1)
				 {
					 Jaw->Visible = true;
				 }
				 else
				 {
					 Jaw->Visible = false;
					 Jaw->SelectedIndex = 0;
				 }
				 
			 }

private: System::Void Reset_Click(System::Object^  sender, System::EventArgs^  e) {
			 BodyParts->SelectedIndex = 0;
		 }

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 info->Visible=true;

		 }

};
}

