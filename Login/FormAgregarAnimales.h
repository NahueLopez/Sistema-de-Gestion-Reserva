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
	/// Resumen de FormAgregarAnimales
	/// </summary>
	public ref class FormAgregarAnimales : public System::Windows::Forms::Form
	{
	public:
		FormAgregarAnimales(void)
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
		~FormAgregarAnimales()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Especie;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::TextBox^ txtEstadoAnimal;




	private: System::Windows::Forms::Button^ btnGuardarUsuario;

	private: System::Windows::Forms::ComboBox^ comboEspecie;
	private: System::Windows::Forms::ComboBox^ comboHabitat;
	private: System::Windows::Forms::TextBox^ txtNombreAnimal;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarAnimales::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Especie = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtEstadoAnimal = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardarUsuario = (gcnew System::Windows::Forms::Button());
			this->comboEspecie = (gcnew System::Windows::Forms::ComboBox());
			this->comboHabitat = (gcnew System::Windows::Forms::ComboBox());
			this->txtNombreAnimal = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Size = System::Drawing::Size(120, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre";
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
			this->Especie->TabIndex = 3;
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
			this->label3->Size = System::Drawing::Size(108, 36);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Habitat";
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
			this->label4->TabIndex = 5;
			this->label4->Text = L"Estado";
			// 
			// txtEstadoAnimal
			// 
			this->txtEstadoAnimal->Location = System::Drawing::Point(164, 223);
			this->txtEstadoAnimal->Multiline = true;
			this->txtEstadoAnimal->Name = L"txtEstadoAnimal";
			this->txtEstadoAnimal->Size = System::Drawing::Size(248, 35);
			this->txtEstadoAnimal->TabIndex = 12;
			// 
			// btnGuardarUsuario
			// 
			this->btnGuardarUsuario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarUsuario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarUsuario->ForeColor = System::Drawing::Color::White;
			this->btnGuardarUsuario->Location = System::Drawing::Point(492, 352);
			this->btnGuardarUsuario->Name = L"btnGuardarUsuario";
			this->btnGuardarUsuario->Size = System::Drawing::Size(254, 46);
			this->btnGuardarUsuario->TabIndex = 13;
			this->btnGuardarUsuario->Text = L"Guardar";
			this->btnGuardarUsuario->UseVisualStyleBackColor = false;
			this->btnGuardarUsuario->Click += gcnew System::EventHandler(this, &FormAgregarAnimales::btnGuardarUsuario_Click);
			// 
			// comboEspecie
			// 
			this->comboEspecie->FormattingEnabled = true;
			this->comboEspecie->Location = System::Drawing::Point(164, 100);
			this->comboEspecie->Name = L"comboEspecie";
			this->comboEspecie->Size = System::Drawing::Size(248, 24);
			this->comboEspecie->TabIndex = 19;
			// 
			// comboHabitat
			// 
			this->comboHabitat->FormattingEnabled = true;
			this->comboHabitat->Location = System::Drawing::Point(164, 169);
			this->comboHabitat->Name = L"comboHabitat";
			this->comboHabitat->Size = System::Drawing::Size(248, 24);
			this->comboHabitat->TabIndex = 20;
			// 
			// txtNombreAnimal
			// 
			this->txtNombreAnimal->Location = System::Drawing::Point(164, 34);
			this->txtNombreAnimal->Multiline = true;
			this->txtNombreAnimal->Name = L"txtNombreAnimal";
			this->txtNombreAnimal->Size = System::Drawing::Size(248, 36);
			this->txtNombreAnimal->TabIndex = 21;
			// 
			// FormAgregarAnimales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->txtNombreAnimal);
			this->Controls->Add(this->comboHabitat);
			this->Controls->Add(this->comboEspecie);
			this->Controls->Add(this->btnGuardarUsuario);
			this->Controls->Add(this->txtEstadoAnimal);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Especie);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarAnimales";
			this->Text = L"FormAgregarAnimales";
			this->Load += gcnew System::EventHandler(this, &FormAgregarAnimales::FormAgregarAnimales_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarAnimal(this->txtNombreAnimal->Text, this->comboEspecie->SelectedValue, this->comboHabitat->SelectedValue, this->txtEstadoAnimal->Text);
		this->data->CerrarConexion();
	}

	private: System::Void FormAgregarAnimales_Load(System::Object^ sender, System::EventArgs^ e) {
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
