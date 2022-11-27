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
	/// Resumen de FormEditarAnimal
	/// </summary>
	public ref class FormEditarAnimal : public System::Windows::Forms::Form
	{
	public:
		FormEditarAnimal(void)
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
		~FormEditarAnimal()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Especie;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnEditarUsuario;

	public: System::Windows::Forms::TextBox^ txtEditarEstadoAnimal;
	public: System::Windows::Forms::ComboBox^ comboEspecie;
	public: System::Windows::Forms::ComboBox^ comboHabitat;




	public: System::Windows::Forms::TextBox^ txtEditarNombreAnimal;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarAnimal::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Especie = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnEditarUsuario = (gcnew System::Windows::Forms::Button());
			this->txtEditarEstadoAnimal = (gcnew System::Windows::Forms::TextBox());
			this->txtEditarNombreAnimal = (gcnew System::Windows::Forms::TextBox());
			this->Atras = (gcnew System::Windows::Forms::Button());
			this->comboEspecie = (gcnew System::Windows::Forms::ComboBox());
			this->comboHabitat = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(14, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 36);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Animal";
			// 
			// Especie
			// 
			this->Especie->AutoSize = true;
			this->Especie->BackColor = System::Drawing::Color::Transparent;
			this->Especie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Especie->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Especie->Location = System::Drawing::Point(12, 88);
			this->Especie->Name = L"Especie";
			this->Especie->Size = System::Drawing::Size(121, 36);
			this->Especie->TabIndex = 4;
			this->Especie->Text = L"Especie";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(12, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 36);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Habitad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(12, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 36);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Estado";
			// 
			// btnEditarUsuario
			// 
			this->btnEditarUsuario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnEditarUsuario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditarUsuario->ForeColor = System::Drawing::Color::White;
			this->btnEditarUsuario->Location = System::Drawing::Point(492, 352);
			this->btnEditarUsuario->Name = L"btnEditarUsuario";
			this->btnEditarUsuario->Size = System::Drawing::Size(254, 46);
			this->btnEditarUsuario->TabIndex = 14;
			this->btnEditarUsuario->Text = L"Guardar";
			this->btnEditarUsuario->UseVisualStyleBackColor = false;
			this->btnEditarUsuario->Click += gcnew System::EventHandler(this, &FormEditarAnimal::btnEditarUsuario_Click);
			// 
			// txtEditarEstadoAnimal
			// 
			this->txtEditarEstadoAnimal->Location = System::Drawing::Point(164, 223);
			this->txtEditarEstadoAnimal->Multiline = true;
			this->txtEditarEstadoAnimal->Name = L"txtEditarEstadoAnimal";
			this->txtEditarEstadoAnimal->Size = System::Drawing::Size(248, 35);
			this->txtEditarEstadoAnimal->TabIndex = 15;
			// 
			// txtEditarNombreAnimal
			// 
			this->txtEditarNombreAnimal->Location = System::Drawing::Point(164, 35);
			this->txtEditarNombreAnimal->Multiline = true;
			this->txtEditarNombreAnimal->Name = L"txtEditarNombreAnimal";
			this->txtEditarNombreAnimal->Size = System::Drawing::Size(248, 35);
			this->txtEditarNombreAnimal->TabIndex = 18;
			// 
			// Atras
			// 
			this->Atras->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Atras->ForeColor = System::Drawing::Color::White;
			this->Atras->Location = System::Drawing::Point(12, 352);
			this->Atras->Name = L"Atras";
			this->Atras->Size = System::Drawing::Size(254, 44);
			this->Atras->TabIndex = 23;
			this->Atras->Text = L"Atras";
			this->Atras->UseVisualStyleBackColor = false;
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarAnimal::Atras_Click);
			// 
			// comboEspecie
			// 
			this->comboEspecie->FormattingEnabled = true;
			this->comboEspecie->Location = System::Drawing::Point(164, 100);
			this->comboEspecie->Name = L"comboEspecie";
			this->comboEspecie->Size = System::Drawing::Size(248, 24);
			this->comboEspecie->TabIndex = 24;
			// 
			// comboHabitat
			// 
			this->comboHabitat->FormattingEnabled = true;
			this->comboHabitat->Location = System::Drawing::Point(164, 169);
			this->comboHabitat->Name = L"comboHabitat";
			this->comboHabitat->Size = System::Drawing::Size(248, 24);
			this->comboHabitat->TabIndex = 25;
			// 
			// FormEditarAnimal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboHabitat);
			this->Controls->Add(this->comboEspecie);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->txtEditarNombreAnimal);
			this->Controls->Add(this->txtEditarEstadoAnimal);
			this->Controls->Add(this->btnEditarUsuario);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Especie);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarAnimal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormEditarAnimal";
			this->Load += gcnew System::EventHandler(this, &FormEditarAnimal::FormEditarAnimal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEditarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}
	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void FormEditarAnimal_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() {
		this->data->AbrirConexion();

		this->comboEspecie->DataSource = this->data->EspecieNombres();
		this->comboEspecie->DisplayMember = "Especie";
		this->comboEspecie->ValueMember = "id";

		this->comboHabitat->DataSource = this->data->HabitatNombres();
		this->comboHabitat->DisplayMember = "Habitat";
		this->comboHabitat->ValueMember = "id";


		this->data->CerrarConexion();
	}
};
}
