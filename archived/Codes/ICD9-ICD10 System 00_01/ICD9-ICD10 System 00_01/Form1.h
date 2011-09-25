#pragma once

namespace prototype00_01 {

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
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::CheckBox^  Both;
	private: System::Windows::Forms::CheckBox^  ICD9;
	private: System::Windows::Forms::CheckBox^  ICD10;
	private: System::Windows::Forms::Button^  Search;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  Reset;
	private: System::Windows::Forms::Button^  button1;







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
			this->Both = (gcnew System::Windows::Forms::CheckBox());
			this->ICD9 = (gcnew System::Windows::Forms::CheckBox());
			this->ICD10 = (gcnew System::Windows::Forms::CheckBox());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BodyParts
			// 
			this->BodyParts->AllowDrop = true;
			this->BodyParts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BodyParts->FormattingEnabled = true;
			this->BodyParts->Items->AddRange(gcnew cli::array< System::Object^  >(11) {L"  ", L"Head", L"Neck", L"Sholder", L"Arm", L"Back", 
				L"Chest", L"Stomic", L"Knee", L"Leg", L"Foot"});
			this->BodyParts->Location = System::Drawing::Point(12, 12);
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
			this->HeadParts->Location = System::Drawing::Point(12, 39);
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
			this->FootParts->Location = System::Drawing::Point(12, 39);
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
			this->Mouth->Location = System::Drawing::Point(12, 66);
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
			this->Jaw->Location = System::Drawing::Point(12, 93);
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
			this->Version->Text = L"V 00.01";
			// 
			// Both
			// 
			this->Both->AutoSize = true;
			this->Both->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Both->Location = System::Drawing::Point(12, 380);
			this->Both->Name = L"Both";
			this->Both->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Both->Size = System::Drawing::Size(62, 24);
			this->Both->TabIndex = 10;
			this->Both->Text = L"Both";
			this->Both->UseVisualStyleBackColor = true;
			this->Both->CheckedChanged += gcnew System::EventHandler(this, &Form1::Both_CheckedChanged);
			// 
			// ICD9
			// 
			this->ICD9->AutoSize = true;
			this->ICD9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ICD9->Location = System::Drawing::Point(160, 380);
			this->ICD9->Name = L"ICD9";
			this->ICD9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ICD9->Size = System::Drawing::Size(65, 24);
			this->ICD9->TabIndex = 11;
			this->ICD9->Text = L"ICD9";
			this->ICD9->UseVisualStyleBackColor = true;
			this->ICD9->CheckedChanged += gcnew System::EventHandler(this, &Form1::ICD9_CheckedChanged);
			// 
			// ICD10
			// 
			this->ICD10->AutoSize = true;
			this->ICD10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ICD10->Location = System::Drawing::Point(80, 380);
			this->ICD10->Name = L"ICD10";
			this->ICD10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ICD10->Size = System::Drawing::Size(74, 24);
			this->ICD10->TabIndex = 12;
			this->ICD10->Text = L"ICD10";
			this->ICD10->UseVisualStyleBackColor = true;
			this->ICD10->CheckedChanged += gcnew System::EventHandler(this, &Form1::ICD10_CheckedChanged);
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(231, 376);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(75, 23);
			this->Search->TabIndex = 13;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Codes and Discriptions will appear here.", L"Click on the line for the right code"});
			this->listBox1->Location = System::Drawing::Point(184, 20);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(347, 251);
			this->listBox1->TabIndex = 14;
			// 
			// Reset
			// 
			this->Reset->Location = System::Drawing::Point(312, 376);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(75, 23);
			this->Reset->TabIndex = 15;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &Form1::Reset_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(394, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 408);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->ICD10);
			this->Controls->Add(this->ICD9);
			this->Controls->Add(this->Both);
			this->Controls->Add(this->Version);
			this->Controls->Add(this->Jaw);
			this->Controls->Add(this->Mouth);
			this->Controls->Add(this->FootParts);
			this->Controls->Add(this->HeadParts);
			this->Controls->Add(this->BodyParts);
			this->Name = L"Form1";
			this->Text = L"ICD9/ICD10 System";
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
private: System::Void Both_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(Both->Checked == true)
			 {
				ICD9->Checked = false;
				ICD10->Checked = false;
			 }
			
		 }
private: System::Void ICD10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(ICD10->Checked == true)
			 {
				ICD9->Checked = false;
				Both->Checked = false;
			 }
		 }
private: System::Void ICD9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(ICD9->Checked == true)
			 {
				ICD10->Checked = false;
				Both->Checked = false;
			 }
		 }
private: System::Void Reset_Click(System::Object^  sender, System::EventArgs^  e) {
			 BodyParts->SelectedIndex = 0;
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}

