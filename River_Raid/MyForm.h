#pragma once
//CABECERAS 
#include "Matrices.h"
#include "Jugador.h"
#include "Enemigo.h"
#include "Disparos.h"
#include "Gasolina.h"
#include "Vector.h"
#include "Datos.h"

namespace River_Raid {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		//	CONTADOR DE LA GASOLINA/VIDA
		int cont=0;
		int salida = 0;
		Random r,t,y;
		int x1Gas = r.Next(55,235);
		int y1Gas = r.Next(65, 185);

		int x2Gas = t.Next(445, 530);
		int y2Gas = t.Next(65, 185);

		int x3Gas = y.Next(25, 310);
		int y3Gas = y.Next(230, 395);

		int x4Gas = y.Next(25, 235);
		int y4Gas = y.Next(215,330);

		int x5Gas = r.Next(55, 235);
		int y5Gas = r.Next(65, 185);

		int x6Gas = y.Next(25, 310);
		int y6Gas = y.Next(230, 395);
	private:

		CJugador *oJugador = new CJugador(295, 425);
		Gasolina *oGasolina1 = new Gasolina;
		Gasolina *oGasolina2 = new Gasolina;
		Gasolina *oGasolina3 = new Gasolina;
		Gasolina *oGasolina4 = new Gasolina;
		Gasolina *oGasolina5 = new Gasolina;
		Gasolina *oGasolina6 = new Gasolina;
		CVector *oVector = new CVector;
		CDatos *oDatos = new CDatos;

		//	BITMAPS 
			 Bitmap ^bmpAvion = gcnew Bitmap("avion.png");
			 Bitmap ^bmpMapa0 = gcnew Bitmap("mapa0.png");
			 Bitmap ^bmpMapa1 = gcnew Bitmap("mapa1.png");
			 Bitmap ^bmpMapa2 = gcnew Bitmap("mapa2.png");
			 Bitmap ^bmpMapa3 = gcnew Bitmap("mapa3.png");
			 Bitmap ^bmpMapa4 = gcnew Bitmap("mapa4.png");
			 Bitmap ^bmpMapa5 = gcnew Bitmap("mapa5.png");
			 Bitmap ^bmpMapa6 = gcnew Bitmap("mapa6.png");
			 Bitmap ^bmpMapa7 = gcnew Bitmap("mapa7.png");
			 Bitmap ^bmpEnemigo1 = gcnew Bitmap("enemigo_1.png");
			 Bitmap ^bmpEnemigo2 = gcnew Bitmap("enemigo_2.png");
			 Bitmap ^bmpEnemigo3 = gcnew Bitmap("enemigo_3.png");
			 Bitmap ^bmpEnemigo4 = gcnew Bitmap("enemigo_4.png");
			 Bitmap ^bmpArma1 = gcnew Bitmap("arma_1.png");
			 Bitmap ^bmpArma2 = gcnew Bitmap("arma_2.png");
			 Bitmap ^bmpArma3 = gcnew Bitmap("arma_3.png");
			 Bitmap ^bmpGasolina = gcnew Bitmap("gasolina.png");
			 Bitmap ^bmpFinal = gcnew Bitmap("final.png");

	private: System::Windows::Forms::Panel^  pINICIO;
	private: System::Windows::Forms::PictureBox^  pbPLANETA;
	private: System::Windows::Forms::PictureBox^  pbTITULO;
	private: System::Windows::Forms::Button^  btnSALIR;
	private: System::Windows::Forms::Button^  btnJUGAR;
	private: System::Windows::Forms::Panel^  pINSTRUCCIONES;
	private: System::Windows::Forms::PictureBox^  pbEXPLOCION;
	private: System::Windows::Forms::PictureBox^  pbOBJETIVO;
	private: System::Windows::Forms::Button^  btnSIGUIENTE;
	private: System::Windows::Forms::PictureBox^  pbINSTRUCCIONES;
	private: System::Windows::Forms::Button^  btnJUGAR2;
	private: System::Windows::Forms::Panel^  pDatos;
	private: System::Windows::Forms::Label^  lbCOMBUSTIBLE;
	private: System::Windows::Forms::Label^  lbPUNTAJE;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  pFINAL;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  lbFINALENEMIGOS;

	private: System::Windows::Forms::Label^  lb1;


	private: System::Windows::Forms::Timer^  timer1;

	public:
		MyForm(void)
		{
			InitializeComponent();

			bmpAvion->MakeTransparent(bmpAvion->GetPixel(1, 1));
			bmpEnemigo1->MakeTransparent(bmpEnemigo1->GetPixel(1, 1));
			bmpEnemigo2->MakeTransparent(bmpEnemigo2->GetPixel(1, 1));
			bmpEnemigo3->MakeTransparent(bmpEnemigo3->GetPixel(1, 1));
			bmpEnemigo4->MakeTransparent(bmpEnemigo4->GetPixel(1, 1));
			bmpArma1->MakeTransparent(bmpArma1->GetPixel(1, 1));
			bmpArma2->MakeTransparent(bmpArma2->GetPixel(1, 1));
			bmpArma3->MakeTransparent(bmpArma3->GetPixel(1, 1));
			bmpFinal->MakeTransparent(bmpFinal->GetPixel(0, 0));
			
			//
			//TODO: agregar código de constructor aquí
			//
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pINICIO = (gcnew System::Windows::Forms::Panel());
			this->btnJUGAR = (gcnew System::Windows::Forms::Button());
			this->btnSALIR = (gcnew System::Windows::Forms::Button());
			this->pbTITULO = (gcnew System::Windows::Forms::PictureBox());
			this->pbPLANETA = (gcnew System::Windows::Forms::PictureBox());
			this->pINSTRUCCIONES = (gcnew System::Windows::Forms::Panel());
			this->btnJUGAR2 = (gcnew System::Windows::Forms::Button());
			this->btnSIGUIENTE = (gcnew System::Windows::Forms::Button());
			this->pbINSTRUCCIONES = (gcnew System::Windows::Forms::PictureBox());
			this->pbOBJETIVO = (gcnew System::Windows::Forms::PictureBox());
			this->pbEXPLOCION = (gcnew System::Windows::Forms::PictureBox());
			this->pDatos = (gcnew System::Windows::Forms::Panel());
			this->lbCOMBUSTIBLE = (gcnew System::Windows::Forms::Label());
			this->lbPUNTAJE = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pFINAL = (gcnew System::Windows::Forms::Panel());
			this->lbFINALENEMIGOS = (gcnew System::Windows::Forms::Label());
			this->lb1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pINICIO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTITULO))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPLANETA))->BeginInit();
			this->pINSTRUCCIONES->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbINSTRUCCIONES))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOBJETIVO))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEXPLOCION))->BeginInit();
			this->pDatos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pFINAL->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 70;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pINICIO
			// 
			this->pINICIO->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pINICIO.BackgroundImage")));
			this->pINICIO->Controls->Add(this->btnJUGAR);
			this->pINICIO->Controls->Add(this->btnSALIR);
			this->pINICIO->Controls->Add(this->pbTITULO);
			this->pINICIO->Controls->Add(this->pbPLANETA);
			this->pINICIO->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pINICIO->Location = System::Drawing::Point(0, 0);
			this->pINICIO->Name = L"pINICIO";
			this->pINICIO->Size = System::Drawing::Size(626, 506);
			this->pINICIO->TabIndex = 1;
			// 
			// btnJUGAR
			// 
			this->btnJUGAR->BackColor = System::Drawing::Color::DarkRed;
			this->btnJUGAR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnJUGAR->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnJUGAR->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJUGAR->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnJUGAR->Location = System::Drawing::Point(-7, 224);
			this->btnJUGAR->Name = L"btnJUGAR";
			this->btnJUGAR->Size = System::Drawing::Size(641, 66);
			this->btnJUGAR->TabIndex = 3;
			this->btnJUGAR->Text = L"INICIAR";
			this->btnJUGAR->UseVisualStyleBackColor = false;
			this->btnJUGAR->Click += gcnew System::EventHandler(this, &MyForm::btnJUGAR_Click);
			// 
			// btnSALIR
			// 
			this->btnSALIR->BackColor = System::Drawing::Color::Black;
			this->btnSALIR->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSALIR.BackgroundImage")));
			this->btnSALIR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSALIR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSALIR->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSALIR->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSALIR->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnSALIR->Location = System::Drawing::Point(-7, 326);
			this->btnSALIR->Name = L"btnSALIR";
			this->btnSALIR->Size = System::Drawing::Size(633, 34);
			this->btnSALIR->TabIndex = 2;
			this->btnSALIR->Text = L"SALIR";
			this->btnSALIR->UseVisualStyleBackColor = false;
			this->btnSALIR->Click += gcnew System::EventHandler(this, &MyForm::btnSALIR_Click);
			// 
			// pbTITULO
			// 
			this->pbTITULO->BackColor = System::Drawing::Color::Transparent;
			this->pbTITULO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbTITULO.Image")));
			this->pbTITULO->Location = System::Drawing::Point(0, 0);
			this->pbTITULO->Name = L"pbTITULO";
			this->pbTITULO->Size = System::Drawing::Size(626, 161);
			this->pbTITULO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbTITULO->TabIndex = 1;
			this->pbTITULO->TabStop = false;
			// 
			// pbPLANETA
			// 
			this->pbPLANETA->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbPLANETA->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPLANETA.Image")));
			this->pbPLANETA->Location = System::Drawing::Point(0, 0);
			this->pbPLANETA->Name = L"pbPLANETA";
			this->pbPLANETA->Size = System::Drawing::Size(626, 506);
			this->pbPLANETA->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPLANETA->TabIndex = 0;
			this->pbPLANETA->TabStop = false;
			// 
			// pINSTRUCCIONES
			// 
			this->pINSTRUCCIONES->BackColor = System::Drawing::Color::Black;
			this->pINSTRUCCIONES->Controls->Add(this->btnJUGAR2);
			this->pINSTRUCCIONES->Controls->Add(this->btnSIGUIENTE);
			this->pINSTRUCCIONES->Controls->Add(this->pbINSTRUCCIONES);
			this->pINSTRUCCIONES->Controls->Add(this->pbOBJETIVO);
			this->pINSTRUCCIONES->Controls->Add(this->pbEXPLOCION);
			this->pINSTRUCCIONES->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pINSTRUCCIONES->Location = System::Drawing::Point(0, 0);
			this->pINSTRUCCIONES->Name = L"pINSTRUCCIONES";
			this->pINSTRUCCIONES->Size = System::Drawing::Size(626, 506);
			this->pINSTRUCCIONES->TabIndex = 4;
			this->pINSTRUCCIONES->Visible = false;
			// 
			// btnJUGAR2
			// 
			this->btnJUGAR2->BackColor = System::Drawing::Color::DarkRed;
			this->btnJUGAR2->Enabled = false;
			this->btnJUGAR2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnJUGAR2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJUGAR2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnJUGAR2->Location = System::Drawing::Point(468, 435);
			this->btnJUGAR2->Name = L"btnJUGAR2";
			this->btnJUGAR2->Size = System::Drawing::Size(146, 59);
			this->btnJUGAR2->TabIndex = 2;
			this->btnJUGAR2->Text = L"JUGAR";
			this->btnJUGAR2->UseVisualStyleBackColor = false;
			this->btnJUGAR2->Visible = false;
			this->btnJUGAR2->Click += gcnew System::EventHandler(this, &MyForm::btnJUGAR2_Click);
			// 
			// btnSIGUIENTE
			// 
			this->btnSIGUIENTE->BackColor = System::Drawing::Color::DarkRed;
			this->btnSIGUIENTE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSIGUIENTE->Font = (gcnew System::Drawing::Font(L"MS Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSIGUIENTE->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSIGUIENTE->Location = System::Drawing::Point(468, 435);
			this->btnSIGUIENTE->Name = L"btnSIGUIENTE";
			this->btnSIGUIENTE->Size = System::Drawing::Size(146, 59);
			this->btnSIGUIENTE->TabIndex = 2;
			this->btnSIGUIENTE->Text = L">>";
			this->btnSIGUIENTE->UseVisualStyleBackColor = false;
			this->btnSIGUIENTE->Click += gcnew System::EventHandler(this, &MyForm::btnSIGUIENTE_Click);
			// 
			// pbINSTRUCCIONES
			// 
			this->pbINSTRUCCIONES->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbINSTRUCCIONES.Image")));
			this->pbINSTRUCCIONES->Location = System::Drawing::Point(0, 104);
			this->pbINSTRUCCIONES->Name = L"pbINSTRUCCIONES";
			this->pbINSTRUCCIONES->Size = System::Drawing::Size(641, 256);
			this->pbINSTRUCCIONES->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbINSTRUCCIONES->TabIndex = 1;
			this->pbINSTRUCCIONES->TabStop = false;
			this->pbINSTRUCCIONES->Visible = false;
			// 
			// pbOBJETIVO
			// 
			this->pbOBJETIVO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbOBJETIVO.Image")));
			this->pbOBJETIVO->Location = System::Drawing::Point(-7, 104);
			this->pbOBJETIVO->Name = L"pbOBJETIVO";
			this->pbOBJETIVO->Size = System::Drawing::Size(641, 256);
			this->pbOBJETIVO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbOBJETIVO->TabIndex = 1;
			this->pbOBJETIVO->TabStop = false;
			// 
			// pbEXPLOCION
			// 
			this->pbEXPLOCION->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbEXPLOCION.Image")));
			this->pbEXPLOCION->Location = System::Drawing::Point(-70, 0);
			this->pbEXPLOCION->Name = L"pbEXPLOCION";
			this->pbEXPLOCION->Size = System::Drawing::Size(897, 532);
			this->pbEXPLOCION->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbEXPLOCION->TabIndex = 0;
			this->pbEXPLOCION->TabStop = false;
			// 
			// pDatos
			// 
			this->pDatos->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pDatos->Controls->Add(this->lbCOMBUSTIBLE);
			this->pDatos->Controls->Add(this->lbPUNTAJE);
			this->pDatos->Controls->Add(this->label2);
			this->pDatos->Controls->Add(this->label1);
			this->pDatos->Controls->Add(this->pictureBox1);
			this->pDatos->Location = System::Drawing::Point(3, 3);
			this->pDatos->Name = L"pDatos";
			this->pDatos->Size = System::Drawing::Size(135, 495);
			this->pDatos->TabIndex = 4;
			this->pDatos->Visible = false;
			// 
			// lbCOMBUSTIBLE
			// 
			this->lbCOMBUSTIBLE->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCOMBUSTIBLE->Location = System::Drawing::Point(-3, 290);
			this->lbCOMBUSTIBLE->Name = L"lbCOMBUSTIBLE";
			this->lbCOMBUSTIBLE->Size = System::Drawing::Size(143, 23);
			this->lbCOMBUSTIBLE->TabIndex = 1;
			this->lbCOMBUSTIBLE->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbPUNTAJE
			// 
			this->lbPUNTAJE->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPUNTAJE->Location = System::Drawing::Point(-3, 201);
			this->lbPUNTAJE->Name = L"lbPUNTAJE";
			this->lbPUNTAJE->Size = System::Drawing::Size(135, 23);
			this->lbPUNTAJE->TabIndex = 1;
			this->lbPUNTAJE->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 245);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"COMBUSTIBLE";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PUNTAJE DE ENEMIGOS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-330, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(550, 488);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pFINAL
			// 
			this->pFINAL->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->pFINAL->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pFINAL.BackgroundImage")));
			this->pFINAL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pFINAL->Controls->Add(this->lbFINALENEMIGOS);
			this->pFINAL->Controls->Add(this->lb1);
			this->pFINAL->Controls->Add(this->button2);
			this->pFINAL->Controls->Add(this->label3);
			this->pFINAL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pFINAL->Location = System::Drawing::Point(0, 0);
			this->pFINAL->Name = L"pFINAL";
			this->pFINAL->Size = System::Drawing::Size(626, 506);
			this->pFINAL->TabIndex = 4;
			this->pFINAL->Visible = false;
			// 
			// lbFINALENEMIGOS
			// 
			this->lbFINALENEMIGOS->BackColor = System::Drawing::Color::Transparent;
			this->lbFINALENEMIGOS->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFINALENEMIGOS->ForeColor = System::Drawing::SystemColors::Control;
			this->lbFINALENEMIGOS->Location = System::Drawing::Point(126, 299);
			this->lbFINALENEMIGOS->Name = L"lbFINALENEMIGOS";
			this->lbFINALENEMIGOS->Size = System::Drawing::Size(389, 24);
			this->lbFINALENEMIGOS->TabIndex = 2;
			this->lbFINALENEMIGOS->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb1
			// 
			this->lb1->AutoSize = true;
			this->lb1->BackColor = System::Drawing::Color::Transparent;
			this->lb1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb1->ForeColor = System::Drawing::SystemColors::Control;
			this->lb1->Location = System::Drawing::Point(126, 266);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(389, 24);
			this->lb1->TabIndex = 2;
			this->lb1->Text = L"PUNTAJE DE ENEMIGOS ELIMINADOS";
			this->lb1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InfoText;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(-7, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(641, 63);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(111, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(437, 236);
			this->label3->TabIndex = 0;
			this->label3->Text = L"FIN DEL JUEGO";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 506);
			this->Controls->Add(this->pFINAL);
			this->Controls->Add(this->pINICIO);
			this->Controls->Add(this->pINSTRUCCIONES);
			this->Controls->Add(this->pDatos);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::PresionarTecla);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::SoltarTecla);
			this->pINICIO->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTITULO))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPLANETA))->EndInit();
			this->pINSTRUCCIONES->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbINSTRUCCIONES))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOBJETIVO))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEXPLOCION))->EndInit();
			this->pDatos->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pFINAL->ResumeLayout(false);
			this->pFINAL->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//PANEL DE USUARIO - BOTONES 
	private: System::Void btnSALIR_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
		}
	private: System::Void btnJUGAR_Click(System::Object^  sender, System::EventArgs^  e) {
	delete pINICIO;  pINSTRUCCIONES->Visible = true;
}
	private: System::Void btnSIGUIENTE_Click(System::Object^  sender, System::EventArgs^  e) {
	delete pbOBJETIVO;
	btnSIGUIENTE->Enabled = false;
	btnSIGUIENTE->Visible = false;
	pbINSTRUCCIONES->Visible = true;
	btnJUGAR2->Visible = true;
	btnJUGAR2->Enabled = true;
}
	private: System::Void btnJUGAR2_Click(System::Object^  sender, System::EventArgs^  e) {
	 SoundPlayer ^song = gcnew SoundPlayer;
	 //song ->Stop();
	 song ->SoundLocation = "SS.wav";
	 song ->LoadAsync();
	 song ->PlayLooping();
	 delete pINSTRUCCIONES; timer1->Enabled = true;
	 
 }

		//TECLAS
	private: System::Void PresionarTecla(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		switch (e->KeyCode)
		{
		case Keys::Left:
			oJugador->direccion = Direcciones::Izquierda; break;
		case Keys::Right:
			oJugador->direccion = Direcciones::Derecha; break;
		case Keys::Up:
			oJugador->direccion = Direcciones::Arriba;break;
		case Keys::Down:
			oJugador->direccion = Direcciones::Abajo; break;
		case Keys::Space:
			
			oVector->agregarDisparo(oJugador->GETx(), oJugador->GETy()); break;
		case Keys::D:
			pDatos->Visible = true; break;
		case Keys::C:
			pDatos->Visible = false; break;
		case Keys::Q:
			oJugador->SETvelox(-15); break;
		case Keys::W:
			oJugador->SETvelox(-3); break;
	
		}
		

	}
	private: System::Void SoltarTecla(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		oJugador->direccion = Direcciones::Ninguna;
	
	}

			
		//FUNCION PARA CAMBIAR EL BITMAP DEL MAPA / MATRIZ / REINICIAR POSICION DEL AVION
			 void Cambio_de_Mapas(BufferedGraphics ^buffer){
				 Rectangle A = Rectangle(oJugador->GETx(), oJugador->GETy(), oJugador->GETancho(), oJugador->GETalto());
				
				 int coordenada_avionY;
				 coordenada_avionY = oJugador->GETy();
				 int coordenada_avionX;
				 coordenada_avionX = oJugador->GETx();
				 //CONTADOR DE LA VIDA
				 cont++;
			
				
				 if (oJugador->GETcolision() == 0){
					 oVector->agregarEnemigo(buffer, 0, oJugador->GETcoordenada());
					 oVector->agregarEnemigo(buffer, 1, oJugador->GETcoordenada());
					 oJugador->mover_Juego(buffer, bmpAvion, bmpMapa0, mapa0, cont);
					 oVector->dibujarEnemigo(buffer, bmpEnemigo1, oJugador->GETcoordenada(),0);
					 oVector->dibujarEnemigo(buffer, bmpEnemigo1, oJugador->GETcoordenada(), 1);
					 oVector->eliminar1(buffer, oJugador->GETcoordenada());
					 oVector->eliminar2(buffer, oJugador->GETcoordenada());
					
				
				
				 }
				 else
				 {
					 if (oJugador->GETcolision() == 1){
						 oVector->agregarEnemigo(buffer, 2, oJugador->GETcoordenada());
						 oVector->agregarEnemigo(buffer, 3, oJugador->GETcoordenada());
						 oJugador->mover_Juego(buffer, bmpAvion, bmpMapa1, mapa1, cont);
						 oVector->dibujarEnemigo(buffer, bmpEnemigo1, oJugador->GETcoordenada(), 2);
						 oVector->dibujarEnemigo(buffer, bmpEnemigo1, oJugador->GETcoordenada(), 3);
						 oVector->eliminar3(buffer, oJugador->GETcoordenada());
						 oVector->eliminar4(buffer, oJugador->GETcoordenada());
						
					 }
					 else{
					 
					 
						 if (oJugador->GETcolision() == 2){
							 oVector->agregarEnemigo(buffer, 4, oJugador->GETcoordenada());
							 oVector->agregarEnemigo(buffer, 5, oJugador->GETcoordenada());
							 oJugador->mover_Juego(buffer, bmpAvion, bmpMapa2, mapa2, cont);
							 oGasolina1->dibujar_gasolina(buffer, bmpGasolina, x1Gas, y1Gas + oJugador->GETcoordenada());
							 Rectangle C = Rectangle(oGasolina1->GETx_gasolina() + x1Gas, oGasolina1->GETy_gasolina() + y1Gas + oJugador->GETcoordenada(), oGasolina1->GETancho_gasolina(), oGasolina1->GETalto_gasolina());
							 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 4);
							 oVector->dibujarEnemigo(buffer, bmpEnemigo1, oJugador->GETcoordenada(), 5);
							 buffer->Graphics->DrawImage(bmpFinal, 500, 200 + oJugador->GETcoordenada());
							 Rectangle F = Rectangle(540, 200 + oJugador->GETcoordenada(), 131, 131);
							 oVector->eliminar5(buffer, oJugador->GETcoordenada());
							 oVector->eliminar6(buffer, oJugador->GETcoordenada());
							
							 if (A.IntersectsWith(C)){

								 oGasolina1->SETx_gasolina(-2000);
								 oGasolina1->SETy_gasolina(-2000);
								 oJugador->SETvida(oJugador->GETvida() + 150);
							 }
							 if (A.IntersectsWith(F)){

								 oJugador->SETcolision(7);
								 oJugador->SETx(295);
								 oJugador->SETy(425);
							 }



						 }
						 else
						 {
							 if (oJugador->GETcolision() == 3){
								 oVector->agregarEnemigo(buffer, 6, oJugador->GETcoordenada());
								 oVector->agregarEnemigo(buffer, 7, oJugador->GETcoordenada());
								 oVector->agregarEnemigo(buffer, 8, oJugador->GETcoordenada());
								 oJugador->mover_Juego(buffer, bmpAvion, bmpMapa3, mapa3, cont);
								 oGasolina2->dibujar_gasolina(buffer, bmpGasolina, x2Gas, y2Gas + oJugador->GETcoordenada());
								 oGasolina3->dibujar_gasolina(buffer, bmpGasolina, x3Gas, y3Gas + oJugador->GETcoordenada());
								 Rectangle C1 = Rectangle(oGasolina2->GETx_gasolina() + x2Gas, oGasolina2->GETy_gasolina() + y2Gas + oJugador->GETcoordenada(), oGasolina2->GETancho_gasolina(), oGasolina2->GETalto_gasolina());
								 Rectangle C2 = Rectangle(oGasolina3->GETx_gasolina() + x3Gas, oGasolina3->GETy_gasolina() + y3Gas + oJugador->GETcoordenada(), oGasolina3->GETancho_gasolina(), oGasolina3->GETalto_gasolina());
								 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 6);
								 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 7);
								 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 8);
								 oVector->eliminar7(buffer, oJugador->GETcoordenada());
								 oVector->eliminar8(buffer, oJugador->GETcoordenada());
								 oVector->eliminar9(buffer, oJugador->GETcoordenada());
								
								 if (A.IntersectsWith(C1)){

									 oGasolina2->SETx_gasolina(-2000);
									 oGasolina2->SETy_gasolina(-2000);

									 oJugador->SETvida(oJugador->GETvida() + 150);
								 }
								 if (A.IntersectsWith(C2)){
									 oGasolina3->SETx_gasolina(-2000);
									 oGasolina3->SETy_gasolina(-2000);
									 oJugador->SETvida(oJugador->GETvida() + 150);
								 }

							 }
							 else
							 {
								 if (oJugador->GETcolision() == 4){
									 oVector->agregarEnemigo(buffer, 9, oJugador->GETcoordenada());
									 oVector->agregarEnemigo(buffer, 10, oJugador->GETcoordenada());
									 oVector->agregarEnemigo(buffer, 11, oJugador->GETcoordenada());
									 oJugador->mover_Juego(buffer, bmpAvion, bmpMapa4, mapa4, cont);
									 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 9);
									 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 10);
									 oVector->dibujarEnemigo(buffer, bmpEnemigo3, oJugador->GETcoordenada(), 11);
									 oVector->eliminar10(buffer, oJugador->GETcoordenada());
									 oVector->eliminar11(buffer, oJugador->GETcoordenada());
									 oVector->eliminar12(buffer, oJugador->GETcoordenada());

								 }
								 else
								 {
									 if (oJugador->GETcolision() == 5){
										 oVector->agregarEnemigo(buffer, 12, oJugador->GETcoordenada());
										 oVector->agregarEnemigo(buffer, 13, oJugador->GETcoordenada());
										 oVector->agregarEnemigo(buffer, 14, oJugador->GETcoordenada());
										 oJugador->mover_Juego(buffer, bmpAvion, bmpMapa5, mapa5, cont);
										 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 12);
										 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 13);
										 oVector->dibujarEnemigo(buffer, bmpEnemigo3, oJugador->GETcoordenada(), 14);
										 oVector->eliminar13(buffer, oJugador->GETcoordenada());
										 oVector->eliminar14(buffer, oJugador->GETcoordenada());
										 oVector->eliminar15(buffer, oJugador->GETcoordenada());

									 }
									 else
									 {
										 if (oJugador->GETcolision() == 6){
											 oVector->agregarEnemigo(buffer, 15, oJugador->GETcoordenada());
											 oVector->agregarEnemigo(buffer, 16, oJugador->GETcoordenada());
											 oVector->agregarEnemigo(buffer, 17, oJugador->GETcoordenada());
											 oVector->agregarEnemigo(buffer, 18, oJugador->GETcoordenada());
											 oJugador->mover_Juego(buffer, bmpAvion, bmpMapa6, mapa6, cont);
											 oGasolina4->dibujar_gasolina(buffer, bmpGasolina, x4Gas, y4Gas + oJugador->GETcoordenada());
											 Rectangle C3 = Rectangle(oGasolina4->GETx_gasolina() + x4Gas, oGasolina4->GETy_gasolina() + y4Gas + oJugador->GETcoordenada(), oGasolina4->GETancho_gasolina(), oGasolina4->GETalto_gasolina());
											 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 15);
											 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 16);
											 oVector->dibujarEnemigo(buffer, bmpEnemigo3, oJugador->GETcoordenada(), 17);
											 oVector->dibujarEnemigo(buffer, bmpEnemigo3, oJugador->GETcoordenada(), 18);
											 oVector->eliminar16(buffer, oJugador->GETcoordenada());
											 oVector->eliminar17(buffer, oJugador->GETcoordenada());
											 oVector->eliminar18(buffer, oJugador->GETcoordenada());
											 oVector->eliminar19(buffer, oJugador->GETcoordenada());
											 if (A.IntersectsWith(C3)){

												 oGasolina4->SETx_gasolina(-2000);
												 oGasolina4->SETy_gasolina(-2000);

												 oJugador->SETvida(oJugador->GETvida() + 150);
											 }
										 }
										 else
										 {
											 if (oJugador->GETcolision() == 7){
												 oVector->agregarEnemigo(buffer, 19, oJugador->GETcoordenada());
												 oVector->agregarEnemigo(buffer, 20, oJugador->GETcoordenada());
												 oVector->agregarEnemigo(buffer, 21, oJugador->GETcoordenada());
												 oVector->agregarEnemigo(buffer, 22, oJugador->GETcoordenada());
												 oVector->agregarEnemigo(buffer, 23, oJugador->GETcoordenada());
												 oJugador->mover_Juego(buffer, bmpAvion, bmpMapa7, mapa7, cont);
												 oGasolina5->dibujar_gasolina(buffer, bmpGasolina, x5Gas, y5Gas + oJugador->GETcoordenada());
												 oGasolina6->dibujar_gasolina(buffer, bmpGasolina, x6Gas, y6Gas + oJugador->GETcoordenada());
												 Rectangle C4 = Rectangle(oGasolina5->GETx_gasolina() + x5Gas, oGasolina5->GETy_gasolina() + y5Gas + oJugador->GETcoordenada(), oGasolina5->GETancho_gasolina(), oGasolina5->GETalto_gasolina());
												 Rectangle C5 = Rectangle(oGasolina6->GETx_gasolina() + x6Gas, oGasolina6->GETy_gasolina() + y6Gas + oJugador->GETcoordenada(), oGasolina6->GETancho_gasolina(), oGasolina6->GETalto_gasolina());
												 Rectangle FC = Rectangle(0, 80 + oJugador->GETcoordenada(), buffer->Graphics->VisibleClipBounds.Width, 70);
												 oVector->dibujarEnemigo(buffer, bmpEnemigo2, oJugador->GETcoordenada(), 19);
												 oVector->dibujarEnemigo(buffer, bmpEnemigo4, oJugador->GETcoordenada(), 20);
												 oVector->dibujarEnemigo(buffer, bmpEnemigo4, oJugador->GETcoordenada(), 21);
												 oVector->dibujarEnemigo(buffer, bmpEnemigo4, oJugador->GETcoordenada(), 22);
												 oVector->dibujarEnemigo(buffer, bmpEnemigo4, oJugador->GETcoordenada(), 23);
												 oVector->eliminar20(buffer, oJugador->GETcoordenada());
												 oVector->eliminar21(buffer, oJugador->GETcoordenada());
												 oVector->eliminar22(buffer, oJugador->GETcoordenada());
												 oVector->eliminar23(buffer, oJugador->GETcoordenada());
												 oVector->eliminar24(buffer, oJugador->GETcoordenada());
												
												 if (A.IntersectsWith(C4)){

													 oGasolina5->SETx_gasolina(-2000);
													 oGasolina5->SETy_gasolina(-2000);

													 oJugador->SETvida(oJugador->GETvida() + 150);
												 }
												 if (A.IntersectsWith(C5)){
													 oGasolina6->SETx_gasolina(-2000);
													 oGasolina6->SETy_gasolina(-2000);
													 oJugador->SETvida(oJugador->GETvida() + 150);
												 }
												 if (A.IntersectsWith(FC)){
													 salida = 1;
													 pFINAL->Visible = true;
												 }

											 }
										 
											 

										 }
									 }
								 }
							 }
						 }
					 
					 }
				 }
				 
				 
			
				
			
				
				 if (oVector->GETconARR()==0 || oVector->GETconARR()<=60){
					 bmpArma1->RotateFlip(RotateFlipType::Rotate270FlipXY);
					 oVector->dibujarDisparo(buffer, bmpArma1);
				 }
				 
				 if (oVector->GETconARR() >= 60 && oVector->GETconARR() <= 110){

						 oVector->dibujarDisparo(buffer, bmpArma2);
					 }
				 if (oVector->GETconARR() >= 111 && oVector->GETconARR() <= 240){
					 bmpArma3->RotateFlip(RotateFlipType::Rotate270FlipXY);
					 oVector->dibujarDisparo(buffer, bmpArma3);
				 }
					
				
			
			 }

		//TIMER 
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
		Text = "ABRIR BARRA DE DATOS -> ""D""  |  CERRAR LA BARRA DE DATOS -> ""C""";
		Cambio_de_Mapas(buffer);
	

		lbPUNTAJE->Text = " " + oVector->GETconARR();
		lbCOMBUSTIBLE->Text = " " + oJugador->GETvida();
		lbFINALENEMIGOS->Text = " " + oVector->GETconARR();

		if (oJugador->GETvida() <= 0 || salida==1){
			timer1->Enabled=false;
			pFINAL->Visible = true;
		}
		
		buffer->Render(g);

		delete buffer, espacio, g,bmpAvion,bmpMapa0;
	}
	


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

};
}
