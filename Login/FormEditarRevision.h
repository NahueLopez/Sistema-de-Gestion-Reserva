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
	/// Resumen de FormEditarRevision
	/// </summary>
	public ref class FormEditarRevision : public System::Windows::Forms::Form
	{
	public:
		FormEditarRevision(void)
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
		~FormEditarRevision()
		{
			if (components)
			{
				delete components;
			}
		}
	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


	public: System::Windows::Forms::ComboBox^ comboAnimal;
	public: System::Windows::Forms::TextBox^ txtEditarNombreMotivo;
	public: System::Windows::Forms::ComboBox^ comboUsuario;
	

	private: System::Windows::Forms::Button^ btnGuardarRevision;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarRevision::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtEditarNombreMotivo = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardarRevision = (gcnew System::Windows::Forms::Button());
			this->Atras = (gcnew System::Windows::Forms::Button());
			this->comboUsuario = (gcnew System::Windows::Forms::ComboBox());
			this->comboAnimal = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
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
			this->label1->Size = System::Drawing::Size(106, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Animal";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(21, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 36);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Motivo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(21, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 36);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Usuario";
			// 
			// txtEditarNombreMotivo
			// 
			this->txtEditarNombreMotivo->Location = System::Drawing::Point(190, 95);
			this->txtEditarNombreMotivo->Multiline = true;
			this->txtEditarNombreMotivo->Name = L"txtEditarNombreMotivo";
			this->txtEditarNombreMotivo->Size = System::Drawing::Size(248, 35);
			this->txtEditarNombreMotivo->TabIndex = 18;
			// 
			// btnGuardarRevision
			// 
			this->btnGuardarRevision->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarRevision->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarRevision->ForeColor = System::Drawing::Color::White;
			this->btnGuardarRevision->Location = System::Drawing::Point(492, 352);
			this->btnGuardarRevision->Name = L"btnGuardarRevision";
			this->btnGuardarRevision->Size = System::Drawing::Size(254, 46);
			this->btnGuardarRevision->TabIndex = 20;
			this->btnGuardarRevision->Text = L"Guardar";
			this->btnGuardarRevision->UseVisualStyleBackColor = false;
			this->btnGuardarRevision->Click += gcnew System::EventHandler(this, &FormEditarRevision::btnGuardarRevision_Click);
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
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarRevision::Atras_Click);
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(190, 172);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(248, 24);
			this->comboUsuario->TabIndex = 25;
			// 
			// comboAnimal
			// 
			this->comboAnimal->FormattingEnabled = true;
			this->comboAnimal->Location = System::Drawing::Point(190, 41);
			this->comboAnimal->Name = L"comboAnimal";
			this->comboAnimal->Size = System::Drawing::Size(248, 24);
			this->comboAnimal->TabIndex = 26;
			// 
			// FormEditarRevision
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(767, 475);
			this->Controls->Add(this->comboAnimal);
			this->Controls->Add(this->comboUsuario);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->btnGuardarRevision);
			this->Controls->Add(this->txtEditarNombreMotivo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarRevision";
			this->Text = L"FormEditarRevision";
			this->Load += gcnew System::EventHandler(this, &FormEditarRevision::FormEditarRevision_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btnGuardarRevision_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}
	private: System::Void FormEditarRevision_Load(System::Object^ sender, System::EventArgs^ e) {
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

		this->data->CerrarConexion();

	}
};
}
