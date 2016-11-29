#pragma once
#include<cmath>
namespace projGUI1 {

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
	private: System::Windows::Forms::Button^  btnSeven;
	private: System::Windows::Forms::Button^  btnEight;
	protected: 


	private: System::Windows::Forms::Button^  btnNine;
	private: System::Windows::Forms::Button^  btnmais;
	private: System::Windows::Forms::Button^  btnCE;
	private: System::Windows::Forms::Button^  btnfat;
	protected: 







	private: System::Windows::Forms::Button^  btnMenos;

	private: System::Windows::Forms::Button^  btnSix;

	private: System::Windows::Forms::Button^  btnFive;

	private: System::Windows::Forms::Button^  btnFour;
	private: System::Windows::Forms::Button^  btnPot;


	private: System::Windows::Forms::Button^  btnMulti;

	private: System::Windows::Forms::Button^  btnTree;

	private: System::Windows::Forms::Button^  btnTwo;

	private: System::Windows::Forms::Button^  btnOne;
	private: System::Windows::Forms::Button^  btnIgual;
	private: System::Windows::Forms::Button^  btnDiv;



	private: System::Windows::Forms::Button^  btnMaisMenos;

	private: System::Windows::Forms::Button^  btnVirg;

	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  btnZero;

	private: System::Windows::Forms::Label^  lblDisplay;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnSeven = (gcnew System::Windows::Forms::Button());
			this->btnEight = (gcnew System::Windows::Forms::Button());
			this->btnNine = (gcnew System::Windows::Forms::Button());
			this->btnmais = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnfat = (gcnew System::Windows::Forms::Button());
			this->btnMenos = (gcnew System::Windows::Forms::Button());
			this->btnSix = (gcnew System::Windows::Forms::Button());
			this->btnFive = (gcnew System::Windows::Forms::Button());
			this->btnFour = (gcnew System::Windows::Forms::Button());
			this->btnPot = (gcnew System::Windows::Forms::Button());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btnTree = (gcnew System::Windows::Forms::Button());
			this->btnTwo = (gcnew System::Windows::Forms::Button());
			this->btnOne = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMaisMenos = (gcnew System::Windows::Forms::Button());
			this->btnVirg = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSeven
			// 
			this->btnSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSeven->Location = System::Drawing::Point(13, 77);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(45, 41);
			this->btnSeven->TabIndex = 0;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = true;
			this->btnSeven->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// btnEight
			// 
			this->btnEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEight->Location = System::Drawing::Point(75, 77);
			this->btnEight->Name = L"btnEight";
			this->btnEight->Size = System::Drawing::Size(47, 41);
			this->btnEight->TabIndex = 2;
			this->btnEight->Text = L"8";
			this->btnEight->UseVisualStyleBackColor = true;
			this->btnEight->Click += gcnew System::EventHandler(this, &Form1::btnEight_Click);
			// 
			// btnNine
			// 
			this->btnNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNine->Location = System::Drawing::Point(143, 77);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(48, 41);
			this->btnNine->TabIndex = 3;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = true;
			this->btnNine->Click += gcnew System::EventHandler(this, &Form1::btnNine_Click);
			// 
			// btnmais
			// 
			this->btnmais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmais->Location = System::Drawing::Point(203, 77);
			this->btnmais->Name = L"btnmais";
			this->btnmais->Size = System::Drawing::Size(47, 41);
			this->btnmais->TabIndex = 4;
			this->btnmais->Text = L"+";
			this->btnmais->UseVisualStyleBackColor = true;
			this->btnmais->Click += gcnew System::EventHandler(this, &Form1::btnmais_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(264, 77);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(48, 41);
			this->btnCE->TabIndex = 5;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &Form1::btnCE_Click);
			// 
			// btnfat
			// 
			this->btnfat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnfat->Location = System::Drawing::Point(264, 124);
			this->btnfat->Name = L"btnfat";
			this->btnfat->Size = System::Drawing::Size(48, 41);
			this->btnfat->TabIndex = 10;
			this->btnfat->Text = L"n!";
			this->btnfat->UseVisualStyleBackColor = true;
			this->btnfat->Click += gcnew System::EventHandler(this, &Form1::btnfat_Click);
			// 
			// btnMenos
			// 
			this->btnMenos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMenos->Location = System::Drawing::Point(203, 124);
			this->btnMenos->Name = L"btnMenos";
			this->btnMenos->Size = System::Drawing::Size(47, 41);
			this->btnMenos->TabIndex = 9;
			this->btnMenos->Text = L"-";
			this->btnMenos->UseVisualStyleBackColor = true;
			this->btnMenos->Click += gcnew System::EventHandler(this, &Form1::btnMenos_Click);
			// 
			// btnSix
			// 
			this->btnSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSix->Location = System::Drawing::Point(142, 124);
			this->btnSix->Name = L"btnSix";
			this->btnSix->Size = System::Drawing::Size(48, 41);
			this->btnSix->TabIndex = 8;
			this->btnSix->Text = L"6";
			this->btnSix->UseVisualStyleBackColor = true;
			this->btnSix->Click += gcnew System::EventHandler(this, &Form1::btnSix_Click);
			// 
			// btnFive
			// 
			this->btnFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFive->Location = System::Drawing::Point(75, 124);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(47, 41);
			this->btnFive->TabIndex = 7;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = true;
			this->btnFive->Click += gcnew System::EventHandler(this, &Form1::btnFive_Click);
			// 
			// btnFour
			// 
			this->btnFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFour->Location = System::Drawing::Point(13, 124);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(45, 41);
			this->btnFour->TabIndex = 6;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = true;
			this->btnFour->Click += gcnew System::EventHandler(this, &Form1::btnFour_Click);
			// 
			// btnPot
			// 
			this->btnPot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPot->Location = System::Drawing::Point(265, 171);
			this->btnPot->Name = L"btnPot";
			this->btnPot->Size = System::Drawing::Size(48, 41);
			this->btnPot->TabIndex = 15;
			this->btnPot->Text = L"xʸ";
			this->btnPot->UseVisualStyleBackColor = true;
			this->btnPot->Click += gcnew System::EventHandler(this, &Form1::btnPot_Click);
			// 
			// btnMulti
			// 
			this->btnMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMulti->Location = System::Drawing::Point(204, 171);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(47, 41);
			this->btnMulti->TabIndex = 14;
			this->btnMulti->Text = L"×";
			this->btnMulti->UseVisualStyleBackColor = true;
			this->btnMulti->Click += gcnew System::EventHandler(this, &Form1::btnMulti_Click);
			// 
			// btnTree
			// 
			this->btnTree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTree->Location = System::Drawing::Point(144, 171);
			this->btnTree->Name = L"btnTree";
			this->btnTree->Size = System::Drawing::Size(48, 41);
			this->btnTree->TabIndex = 13;
			this->btnTree->Text = L"3";
			this->btnTree->UseVisualStyleBackColor = true;
			this->btnTree->Click += gcnew System::EventHandler(this, &Form1::btnTree_Click);
			// 
			// btnTwo
			// 
			this->btnTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTwo->Location = System::Drawing::Point(76, 171);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(47, 41);
			this->btnTwo->TabIndex = 12;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = true;
			this->btnTwo->Click += gcnew System::EventHandler(this, &Form1::btnTwo_Click);
			// 
			// btnOne
			// 
			this->btnOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnOne->Location = System::Drawing::Point(14, 171);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(45, 41);
			this->btnOne->TabIndex = 11;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = true;
			this->btnOne->Click += gcnew System::EventHandler(this, &Form1::btnOne_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIgual->Location = System::Drawing::Point(119, 277);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(109, 41);
			this->btnIgual->TabIndex = 20;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = true;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Form1::btnIgual_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(202, 218);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(48, 41);
			this->btnDiv->TabIndex = 18;
			this->btnDiv->Text = L"÷";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::btnDiv_Click);
			// 
			// btnMaisMenos
			// 
			this->btnMaisMenos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMaisMenos->Location = System::Drawing::Point(145, 218);
			this->btnMaisMenos->Name = L"btnMaisMenos";
			this->btnMaisMenos->Size = System::Drawing::Size(47, 41);
			this->btnMaisMenos->TabIndex = 17;
			this->btnMaisMenos->Text = L"±";
			this->btnMaisMenos->UseVisualStyleBackColor = true;
			this->btnMaisMenos->Click += gcnew System::EventHandler(this, &Form1::btnMaisMenos_Click);
			// 
			// btnVirg
			// 
			this->btnVirg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVirg->Location = System::Drawing::Point(78, 218);
			this->btnVirg->Name = L"btnVirg";
			this->btnVirg->Size = System::Drawing::Size(45, 41);
			this->btnVirg->TabIndex = 16;
			this->btnVirg->Text = L",";
			this->btnVirg->UseVisualStyleBackColor = true;
			this->btnVirg->Click += gcnew System::EventHandler(this, &Form1::btnVirg_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(264, 218);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(47, 36);
			this->button17->TabIndex = 21;
			this->button17->Text = L"√";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// btnZero
			// 
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnZero->Location = System::Drawing::Point(14, 219);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(46, 40);
			this->btnZero->TabIndex = 22;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = true;
			this->btnZero->Click += gcnew System::EventHandler(this, &Form1::btnZero_Click);
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(12, 9);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(302, 52);
			this->lblDisplay->TabIndex = 23;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 339);
			this->Controls->Add(this->lblDisplay);
			this->Controls->Add(this->btnZero);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMaisMenos);
			this->Controls->Add(this->btnVirg);
			this->Controls->Add(this->btnPot);
			this->Controls->Add(this->btnMulti);
			this->Controls->Add(this->btnTree);
			this->Controls->Add(this->btnTwo);
			this->Controls->Add(this->btnOne);
			this->Controls->Add(this->btnfat);
			this->Controls->Add(this->btnMenos);
			this->Controls->Add(this->btnSix);
			this->Controls->Add(this->btnFive);
			this->Controls->Add(this->btnFour);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnmais);
			this->Controls->Add(this->btnNine);
			this->Controls->Add(this->btnEight);
			this->Controls->Add(this->btnSeven);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#define MAXDIGITOS 11
		bool flagVirgula;
		double memoria;
		char op;
		bool fim;
		double fat(double n)
		{
			if(n==1)
				return n;
			else
				return n*fat(n-1);
		}
#include<cmath>
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay->Text !="0")
					lblDisplay->Text=lblDisplay->Text + "7";
			     else 
					 {
					 lblDisplay->Text="7";
					 fim=false;
				 }
			 }				
			 
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 flagVirgula=false;
				 memoria=0.0;
				 op='\0';
				 fim=false;
			 }
private: System::Void btnZero_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 {
				 if(lblDisplay->Text !="0" && !fim)
					lblDisplay->Text=lblDisplay->Text + "0";
				 if(fim)
				 {
					 lblDisplay->Text="0";
					 fim=false;
				 }
			 }}
private: System::Void btnOne_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(lblDisplay->Text->Length <MAXDIGITOS)
			 {
				 if(lblDisplay->Text !="0" && !fim)
					lblDisplay->Text=lblDisplay->Text + "1";
			     else 
					{
						lblDisplay->Text="1";
						fim=false;
				    }
			 }}
private: System::Void btnCE_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text !="0")
				 lblDisplay->Text="0";
			 flagVirgula=false;
		 }
private: System::Void btnVirg_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(!flagVirgula){
				 lblDisplay->Text=lblDisplay->Text + ",";
				 flagVirgula=true;
			 }
		 }
private: System::Void btnMaisMenos_Click(System::Object^  sender, System::EventArgs^  e) {
	lblDisplay->Text=System::Convert::ToString((System::Convert::ToDouble(lblDisplay->Text))*(-1));
		 }
		 
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
          double numero=System::Convert::ToDouble(lblDisplay->Text);
		  lblDisplay->Text=System::Convert::ToString(sqrt(numero));
		   if(lblDisplay->Text->Length > MAXDIGITOS)
			   lblDisplay->Text=lblDisplay->Text->Substring(0,MAXDIGITOS);
		 } 
private: System::Void btnmais_Click(System::Object^  sender, System::EventArgs^  e) {
         memoria=System::Convert::ToDouble(lblDisplay->Text);
		 lblDisplay->Text="0";
		 flagVirgula=true;
		 op='+';



		 }
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero=System::Convert::ToDouble(lblDisplay->Text);
			 switch(op){
				 case '+':memoria += numero;break;
				 case '-':memoria -= numero;break;
				 case '*':memoria *= numero;break;
				 case '/':memoria /= numero;break;
				 case '^': memoria = Math::Pow(memoria,numero);break;
			 }
			 if(memoria > Math::Pow(10,MAXDIGITOS) -1)
				 lblDisplay->Text=memoria.ToString("e");
			 else
				  lblDisplay->Text=memoria.ToString();
			 fim=true;
		 }

private: System::Void btnMulti_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria=System::Convert::ToDouble(lblDisplay->Text);
		 lblDisplay->Text="0";
		 flagVirgula=true;
		 op='*';
		 fim=false;
		 }
private: System::Void btnNine_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(lblDisplay->Text !="0" && !fim)
			  lblDisplay->Text=lblDisplay->Text + "9";
		    else 
			   {
						lblDisplay->Text="9";
						fim=false;
				    }
			 
			 }
private: System::Void btnTwo_Click(System::Object^  sender, System::EventArgs^  e) {
			
				  if(lblDisplay->Text !="0" && !fim)
					lblDisplay->Text=lblDisplay->Text + "2";
			     else 
					 {
						lblDisplay->Text="2";
						fim=false;
				    }
			 
		 }
private: System::Void btnTree_Click(System::Object^  sender, System::EventArgs^  e) {
			   if(lblDisplay->Text !="0" && !fim)
					lblDisplay->Text=lblDisplay->Text + "3";
			     else 
					 lblDisplay->Text="3";
			 
		 }
private: System::Void btnFour_Click(System::Object^  sender, System::EventArgs^  e) {
			   if(lblDisplay->Text !="0" && !fim)
					lblDisplay->Text=lblDisplay->Text + "4";
			     else 
					 {
						lblDisplay->Text="4";
						fim=false;
				    }
			 }
		 private: System::Void btnFive_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(lblDisplay->Text !="0" && !fim)
					lblDisplay->Text=lblDisplay->Text + "5";
			     else 
					 {
						lblDisplay->Text="5";
						fim=false;
				    }
			 
				  }
private: System::Void btnSix_Click(System::Object^  sender, System::EventArgs^  e) {
			
				  if(lblDisplay->Text !="0" && !fim)
					lblDisplay->Text=lblDisplay->Text + "6";
			     else 
					 {
						lblDisplay->Text="6";
						fim=false;
				    }
			 
		 }
private: System::Void btnEight_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text !="0" && !fim)
					lblDisplay->Text=lblDisplay->Text + "8";
			     else 
					 {
						lblDisplay->Text="8";
						fim=false;
				    }
		 }
private: System::Void btnMenos_Click(System::Object^  sender, System::EventArgs^  e) {
			  memoria=System::Convert::ToDouble(lblDisplay->Text);
		 lblDisplay->Text="0";
		 flagVirgula=true;
		 op='-';
		 fim=false;
		 }
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
			  memoria=System::Convert::ToDouble(lblDisplay->Text);
		 lblDisplay->Text="0";
		 flagVirgula=true;
		 op='/';
		 fim=false;
		 }
private: System::Void btnfat_Click(System::Object^  sender, System::EventArgs^  e) {
		
		 lblDisplay->Text=System::Convert::ToString(fat(Convert::ToDouble(lblDisplay->Text)));
		 fim=true;

		 }
private: System::Void btnPot_Click(System::Object^  sender, System::EventArgs^  e) {
			  memoria=System::Convert::ToDouble(lblDisplay->Text);
		 lblDisplay->Text="0";
		 flagVirgula=true;
		 op='^';
		 fim=false;
		 }
};
}

