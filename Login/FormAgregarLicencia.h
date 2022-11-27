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
	/// Resumen de FormAgregarLicencia
	/// </summary>
	public ref class FormAgregarLicencia : public System::Windows::Forms::Form
	{
	public:
		FormAgregarLicencia(void)
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
		~FormAgregarLicencia()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Button^ btnGuardarLicencia;
	protected:

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::TextBox^ txtDescripcionLicencia;
	private: System::Windows::Forms::DateTimePicker^ dateInicioLicencia;
	private: System::Windows::Forms::DateTimePicker^ dateFinLicencia;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarLicencia::typeid));
			this->btnGuardarLicencia = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDescripcionLicencia = (gcnew System::Windows::Forms::TextBox());
			this->dateInicioLicencia = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateFinLicencia = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboUsuario = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnGuardarLicencia
			// 
			this->btnGuardarLicencia->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarLicencia->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarLicencia->ForeColor = System::Drawing::Color::White;
			this->btnGuardarLicencia->Location = System::Drawing::Point(492, 352);
			this->btnGuardarLicencia->Name = L"btnGuardarLicencia";
			this->btnGuardarLicencia->Size = System::Drawing::Size(254, 46);
			this->btnGuardarLicencia->TabIndex = 1;
			this->btnGuardarLicencia->Text = L"Guardar";
			this->btnGuardarLicencia->UseVisualStyleBackColor = false;
			this->btnGuardarLicencia->Click += gcnew System::EventHandler(this, &FormAgregarLicencia::btnGuardarLicencia_Click);
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(21, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 36);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Descripcion";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(21, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 36);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Fecha Fin";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(21, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 36);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Fecha Inicio";
			// 
			// txtDescripcionLicencia
			// 
			this->txtDescripcionLicencia->Location = System::Drawing::Point(203, 86);
			this->txtDescripcionLicencia->Multiline = true;
			this->txtDescripcionLicencia->Name = L"txtDescripcionLicencia";
			this->txtDescripcionLicencia->Size = System::Drawing::Size(248, 35);
			this->txtDescripcionLicencia->TabIndex = 15;
			// 
			// dateInicioLicencia
			// 
			this->dateInicioLicencia->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateInicioLicencia->Location = System::Drawing::Point(203, 150);
			this->dateInicioLicencia->Name = L"dateInicioLicencia";
			this->dateInicioLicencia->Size = System::Drawing::Size(248, 22);
			this->dateInicioLicencia->TabIndex = 16;
			this->dateInicioLicencia->Value = System::DateTime(2022, 11, 9, 0, 0, 0, 0);
			// 
			// dateFinLicencia
			// 
			this->dateFinLicencia->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateFinLicencia->Location = System::Drawing::Point(203, 199);
			this->dateFinLicencia->Name = L"dateFinLicencia";
			this->dateFinLicencia->Size = System::Drawing::Size(248, 22);
			this->dateFinLicencia->TabIndex = 17;
			this->dateFinLicencia->Value = System::DateTime(2022, 11, 9, 0, 0, 0, 0);
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(203, 41);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(248, 24);
			this->comboUsuario->TabIndex = 18;
			// 
			// FormAgregarLicencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboUsuario);
			this->Controls->Add(this->dateFinLicencia);
			this->Controls->Add(this->dateInicioLicencia);
			this->Controls->Add(this->txtDescripcionLicencia);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGuardarLicencia);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarLicencia";
			this->Text = L"FormAgregarLicencia";
			this->Load += gcnew System::EventHandler(this, &FormAgregarLicencia::FormAgregarLicencia_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardarLicencia_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarLicencias(this->comboUsuario->SelectedValue, this->txtDescripcionLicencia->Text, this->dateInicioLicencia->Text, this->dateFinLicencia->Text);
		this->data->CerrarConexion();
	}
	private: System::Void FormAgregarLicencia_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() 
	{
		this->data->AbrirConexion();
		this->comboUsuario->DataSource = this->data->UsuarioNombres();
		this->comboUsuario->DisplayMember = "Nombre";
		this->comboUsuario->ValueMember = "id";
		this->data->CerrarConexion();
	}
};
}
