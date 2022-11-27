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
	/// Resumen de FormAgregarAlimentos
	/// </summary>
	public ref class FormAgregarAlimentos : public System::Windows::Forms::Form
	{
	public:
		FormAgregarAlimentos(void)
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
		~FormAgregarAlimentos()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ txtArea;


	private: System::Windows::Forms::Button^ btnGuardarArea;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ txtHorarioComida;
	private: System::Windows::Forms::ComboBox^ comboComida;
	private: System::Windows::Forms::ComboBox^ comboUsuario;
	private: System::Windows::Forms::ComboBox^ comboAnimal;




	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarAlimentos::typeid));
			this->txtArea = (gcnew System::Windows::Forms::Label());
			this->btnGuardarArea = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtHorarioComida = (gcnew System::Windows::Forms::TextBox());
			this->comboComida = (gcnew System::Windows::Forms::ComboBox());
			this->comboUsuario = (gcnew System::Windows::Forms::ComboBox());
			this->comboAnimal = (gcnew System::Windows::Forms::ComboBox());
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
			this->txtArea->TabIndex = 2;
			this->txtArea->Text = L"Animal";
			// 
			// btnGuardarArea
			// 
			this->btnGuardarArea->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarArea->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarArea->ForeColor = System::Drawing::Color::White;
			this->btnGuardarArea->Location = System::Drawing::Point(492, 352);
			this->btnGuardarArea->Name = L"btnGuardarArea";
			this->btnGuardarArea->Size = System::Drawing::Size(254, 46);
			this->btnGuardarArea->TabIndex = 10;
			this->btnGuardarArea->Text = L"Guardar";
			this->btnGuardarArea->UseVisualStyleBackColor = false;
			this->btnGuardarArea->Click += gcnew System::EventHandler(this, &FormAgregarAlimentos::btnGuardarArea_Click);
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
			this->label1->TabIndex = 11;
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
			this->label2->TabIndex = 12;
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
			this->label3->TabIndex = 13;
			this->label3->Text = L"Comida";
			// 
			// txtHorarioComida
			// 
			this->txtHorarioComida->Location = System::Drawing::Point(253, 201);
			this->txtHorarioComida->Multiline = true;
			this->txtHorarioComida->Name = L"txtHorarioComida";
			this->txtHorarioComida->Size = System::Drawing::Size(248, 35);
			this->txtHorarioComida->TabIndex = 15;
			// 
			// comboComida
			// 
			this->comboComida->FormattingEnabled = true;
			this->comboComida->Location = System::Drawing::Point(253, 269);
			this->comboComida->Name = L"comboComida";
			this->comboComida->Size = System::Drawing::Size(248, 24);
			this->comboComida->TabIndex = 16;
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(253, 147);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(248, 24);
			this->comboUsuario->TabIndex = 17;
			// 
			// comboAnimal
			// 
			this->comboAnimal->FormattingEnabled = true;
			this->comboAnimal->Location = System::Drawing::Point(253, 80);
			this->comboAnimal->Name = L"comboAnimal";
			this->comboAnimal->Size = System::Drawing::Size(248, 24);
			this->comboAnimal->TabIndex = 18;
			// 
			// FormAgregarAlimentos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboAnimal);
			this->Controls->Add(this->comboUsuario);
			this->Controls->Add(this->comboComida);
			this->Controls->Add(this->txtHorarioComida);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGuardarArea);
			this->Controls->Add(this->txtArea);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarAlimentos";
			this->Text = L"FormAgregarAlimentos";
			this->Load += gcnew System::EventHandler(this, &FormAgregarAlimentos::FormAgregarAlimentos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardarArea_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarHorarioAlimento(this->comboAnimal->SelectedValue, this->comboUsuario->SelectedValue, this->txtHorarioComida->Text, this->comboComida->SelectedValue);
		this->data->CerrarConexion();
	}

	private: System::Void FormAgregarAlimentos_Load(System::Object^ sender, System::EventArgs^ e) {
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
