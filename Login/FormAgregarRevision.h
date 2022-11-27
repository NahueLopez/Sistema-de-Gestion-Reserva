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
	/// Resumen de FormAgregarRevision
	/// </summary>
	public ref class FormAgregarRevision : public System::Windows::Forms::Form
	{
	public:
		FormAgregarRevision(void)
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
		~FormAgregarRevision()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btnGuardarRevision;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNombreMotivo;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboAnimal;
	private: System::Windows::Forms::ComboBox^ comboUsuario;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarRevision::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnGuardarRevision = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombreMotivo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboAnimal = (gcnew System::Windows::Forms::ComboBox());
			this->comboUsuario = (gcnew System::Windows::Forms::ComboBox());
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
			this->label1->TabIndex = 3;
			this->label1->Text = L"Animal";
			// 
			// btnGuardarRevision
			// 
			this->btnGuardarRevision->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarRevision->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarRevision->ForeColor = System::Drawing::Color::White;
			this->btnGuardarRevision->Location = System::Drawing::Point(492, 352);
			this->btnGuardarRevision->Name = L"btnGuardarRevision";
			this->btnGuardarRevision->Size = System::Drawing::Size(254, 46);
			this->btnGuardarRevision->TabIndex = 11;
			this->btnGuardarRevision->Text = L"Guardar";
			this->btnGuardarRevision->UseVisualStyleBackColor = false;
			this->btnGuardarRevision->Click += gcnew System::EventHandler(this, &FormAgregarRevision::btnGuardarRevision_Click_1);
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
			this->label2->TabIndex = 12;
			this->label2->Text = L"Motivo";
			// 
			// txtNombreMotivo
			// 
			this->txtNombreMotivo->Location = System::Drawing::Point(190, 95);
			this->txtNombreMotivo->Multiline = true;
			this->txtNombreMotivo->Name = L"txtNombreMotivo";
			this->txtNombreMotivo->Size = System::Drawing::Size(248, 35);
			this->txtNombreMotivo->TabIndex = 13;
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
			this->label3->TabIndex = 15;
			this->label3->Text = L"Usuario";
			// 
			// comboAnimal
			// 
			this->comboAnimal->FormattingEnabled = true;
			this->comboAnimal->Location = System::Drawing::Point(190, 42);
			this->comboAnimal->Name = L"comboAnimal";
			this->comboAnimal->Size = System::Drawing::Size(248, 24);
			this->comboAnimal->TabIndex = 16;
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(190, 173);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(248, 24);
			this->comboUsuario->TabIndex = 17;
			// 
			// FormAgregarRevision
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(767, 475);
			this->Controls->Add(this->comboUsuario);
			this->Controls->Add(this->comboAnimal);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtNombreMotivo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnGuardarRevision);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarRevision";
			this->Text = L"FormAgregarRevision";
			this->Load += gcnew System::EventHandler(this, &FormAgregarRevision::FormAgregarRevision_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnGuardarRevision_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarRevision(this->comboAnimal->SelectedValue, this->txtNombreMotivo->Text, this->comboUsuario->SelectedValue);
		this->data->CerrarConexion();
	}
	private: System::Void FormAgregarRevision_Load(System::Object^ sender, System::EventArgs^ e) {
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
