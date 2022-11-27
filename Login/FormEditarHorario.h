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
	/// Resumen de FormEditarHorario
	/// </summary>
	public ref class FormEditarHorario : public System::Windows::Forms::Form
	{
	public:
		FormEditarHorario(void)
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
		~FormEditarHorario()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ txtArea;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	public: System::Windows::Forms::ComboBox^ comboAnimal;
	public: System::Windows::Forms::TextBox^ txtEditarHorarioComida;
	public: System::Windows::Forms::ComboBox^ comboUsuario;
	public: System::Windows::Forms::ComboBox^ comboComida;

	private: System::Windows::Forms::Button^ btnEditarHorario;
	private: System::Windows::Forms::Button^ Atras;

	
	








	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarHorario::typeid));
			this->txtArea = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtEditarHorarioComida = (gcnew System::Windows::Forms::TextBox());
			this->btnEditarHorario = (gcnew System::Windows::Forms::Button());
			this->Atras = (gcnew System::Windows::Forms::Button());
			this->comboAnimal = (gcnew System::Windows::Forms::ComboBox());
			this->comboUsuario = (gcnew System::Windows::Forms::ComboBox());
			this->comboComida = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// txtArea
			// 
			this->txtArea->AutoSize = true;
			this->txtArea->BackColor = System::Drawing::Color::Transparent;
			this->txtArea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtArea->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtArea->Location = System::Drawing::Point(37, 67);
			this->txtArea->Name = L"txtArea";
			this->txtArea->Size = System::Drawing::Size(106, 36);
			this->txtArea->TabIndex = 3;
			this->txtArea->Text = L"Animal";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(37, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 36);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(40, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 36);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Horario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(40, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 36);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Comida";
			// 
			// txtEditarHorarioComida
			// 
			this->txtEditarHorarioComida->Location = System::Drawing::Point(253, 201);
			this->txtEditarHorarioComida->Multiline = true;
			this->txtEditarHorarioComida->Name = L"txtEditarHorarioComida";
			this->txtEditarHorarioComida->Size = System::Drawing::Size(248, 35);
			this->txtEditarHorarioComida->TabIndex = 17;
			// 
			// btnEditarHorario
			// 
			this->btnEditarHorario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnEditarHorario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditarHorario->ForeColor = System::Drawing::Color::White;
			this->btnEditarHorario->Location = System::Drawing::Point(492, 352);
			this->btnEditarHorario->Name = L"btnEditarHorario";
			this->btnEditarHorario->Size = System::Drawing::Size(254, 46);
			this->btnEditarHorario->TabIndex = 19;
			this->btnEditarHorario->Text = L"Guardar";
			this->btnEditarHorario->UseVisualStyleBackColor = false;
			this->btnEditarHorario->Click += gcnew System::EventHandler(this, &FormEditarHorario::btnEditarHorario_Click);
			// 
			// Atras
			// 
			this->Atras->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Atras->ForeColor = System::Drawing::Color::White;
			this->Atras->Location = System::Drawing::Point(40, 352);
			this->Atras->Name = L"Atras";
			this->Atras->Size = System::Drawing::Size(254, 44);
			this->Atras->TabIndex = 24;
			this->Atras->Text = L"Atras";
			this->Atras->UseVisualStyleBackColor = false;
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarHorario::Atras_Click);
			// 
			// comboAnimal
			// 
			this->comboAnimal->FormattingEnabled = true;
			this->comboAnimal->Location = System::Drawing::Point(253, 80);
			this->comboAnimal->Name = L"comboAnimal";
			this->comboAnimal->Size = System::Drawing::Size(248, 24);
			this->comboAnimal->TabIndex = 25;
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(253, 146);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(248, 24);
			this->comboUsuario->TabIndex = 26;
			// 
			// comboComida
			// 
			this->comboComida->FormattingEnabled = true;
			this->comboComida->Location = System::Drawing::Point(253, 270);
			this->comboComida->Name = L"comboComida";
			this->comboComida->Size = System::Drawing::Size(248, 24);
			this->comboComida->TabIndex = 27;
			// 
			// FormEditarHorario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboComida);
			this->Controls->Add(this->comboUsuario);
			this->Controls->Add(this->comboAnimal);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->btnEditarHorario);
			this->Controls->Add(this->txtEditarHorarioComida);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtArea);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarHorario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormEditarHorario";
			this->Load += gcnew System::EventHandler(this, &FormEditarHorario::FormEditarHorario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEditarHorario_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}

	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void FormEditarHorario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() {
		this->data->AbrirConexion();

		this->comboAnimal->DataSource = this->data->AnimalesNombres();
		this->comboAnimal->DisplayMember = "Nombre";
		this->comboAnimal->ValueMember = "id";

		this->comboUsuario->DataSource = this->data->UsuarioNombres();
		this->comboUsuario->DisplayMember = "Nombre";
		this->comboUsuario->ValueMember = "id";

		this->comboComida->DataSource = this->data->ComidaNombres();
		this->comboComida->DisplayMember = "Nombre";
		this->comboComida->ValueMember = "id";

		this->data->CerrarConexion();
	}
};
}
