#pragma once
#include "DB.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormEditarUsuario
	/// </summary>
	public ref class FormEditarUsuario : public System::Windows::Forms::Form
	{
	public:
		FormEditarUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormEditarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;
	private: System::Windows::Forms::Button^ btnEditarUsuario;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	public: System::Windows::Forms::TextBox^ txtEditarNombreUsuario;
	public: System::Windows::Forms::TextBox^ txtEditarApellidoUsuario;
	public: System::Windows::Forms::TextBox^ txtEditarDniUsuario;


	public: System::Windows::Forms::TextBox^ txtEditarMatriculaUsuario;
	public: System::Windows::Forms::ComboBox^ comboArea;

	private: System::Windows::Forms::Button^ Atras;
	public:









	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarUsuario::typeid));
			this->btnEditarUsuario = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtEditarNombreUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtEditarApellidoUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtEditarDniUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtEditarMatriculaUsuario = (gcnew System::Windows::Forms::TextBox());
			this->Atras = (gcnew System::Windows::Forms::Button());
			this->comboArea = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnEditarUsuario
			// 
			this->btnEditarUsuario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnEditarUsuario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditarUsuario->ForeColor = System::Drawing::Color::White;
			this->btnEditarUsuario->Location = System::Drawing::Point(492, 352);
			this->btnEditarUsuario->Name = L"btnEditarUsuario";
			this->btnEditarUsuario->Size = System::Drawing::Size(254, 46);
			this->btnEditarUsuario->TabIndex = 1;
			this->btnEditarUsuario->Text = L"Guardar";
			this->btnEditarUsuario->UseVisualStyleBackColor = false;
			this->btnEditarUsuario->Click += gcnew System::EventHandler(this, &FormEditarUsuario::btnEditarUsuario_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(21, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre";
			// 
			// txtEditarNombreUsuario
			// 
			this->txtEditarNombreUsuario->Location = System::Drawing::Point(190, 30);
			this->txtEditarNombreUsuario->Multiline = true;
			this->txtEditarNombreUsuario->Name = L"txtEditarNombreUsuario";
			this->txtEditarNombreUsuario->Size = System::Drawing::Size(248, 35);
			this->txtEditarNombreUsuario->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(21, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 36);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(21, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 36);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Dni";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(21, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 36);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Matricula";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(21, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 36);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Area";
			// 
			// txtEditarApellidoUsuario
			// 
			this->txtEditarApellidoUsuario->Location = System::Drawing::Point(190, 86);
			this->txtEditarApellidoUsuario->Multiline = true;
			this->txtEditarApellidoUsuario->Name = L"txtEditarApellidoUsuario";
			this->txtEditarApellidoUsuario->Size = System::Drawing::Size(248, 35);
			this->txtEditarApellidoUsuario->TabIndex = 16;
			// 
			// txtEditarDniUsuario
			// 
			this->txtEditarDniUsuario->Location = System::Drawing::Point(190, 136);
			this->txtEditarDniUsuario->Multiline = true;
			this->txtEditarDniUsuario->Name = L"txtEditarDniUsuario";
			this->txtEditarDniUsuario->Size = System::Drawing::Size(248, 35);
			this->txtEditarDniUsuario->TabIndex = 17;
			// 
			// txtEditarMatriculaUsuario
			// 
			this->txtEditarMatriculaUsuario->Location = System::Drawing::Point(190, 189);
			this->txtEditarMatriculaUsuario->Multiline = true;
			this->txtEditarMatriculaUsuario->Name = L"txtEditarMatriculaUsuario";
			this->txtEditarMatriculaUsuario->Size = System::Drawing::Size(248, 35);
			this->txtEditarMatriculaUsuario->TabIndex = 20;
			// 
			// Atras
			// 
			this->Atras->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Atras->ForeColor = System::Drawing::Color::White;
			this->Atras->Location = System::Drawing::Point(40, 352);
			this->Atras->Name = L"Atras";
			this->Atras->Size = System::Drawing::Size(254, 44);
			this->Atras->TabIndex = 22;
			this->Atras->Text = L"Atras";
			this->Atras->UseVisualStyleBackColor = false;
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarUsuario::Atras_Click);
			// 
			// comboArea
			// 
			this->comboArea->FormattingEnabled = true;
			this->comboArea->Location = System::Drawing::Point(190, 247);
			this->comboArea->Name = L"comboArea";
			this->comboArea->Size = System::Drawing::Size(248, 24);
			this->comboArea->TabIndex = 23;
			// 
			// FormEditarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboArea);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->txtEditarMatriculaUsuario);
			this->Controls->Add(this->txtEditarDniUsuario);
			this->Controls->Add(this->txtEditarApellidoUsuario);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtEditarNombreUsuario);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEditarUsuario);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarUsuario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FormEditarUsuario";
			this->Load += gcnew System::EventHandler(this, &FormEditarUsuario::FormEditarUsuario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnEditarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}

	private: System::Void FormEditarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}


	public: void Consulta() {
		this->data->AbrirConexion();
		this->comboArea->DataSource = this->data->ListadosArea();
		this->comboArea->DisplayMember = "Area";
		this->comboArea->ValueMember = "id";
		this->data->CerrarConexion();
	}


};
}
