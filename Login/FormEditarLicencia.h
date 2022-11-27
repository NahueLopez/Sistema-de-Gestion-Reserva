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
	/// Resumen de FormEditarLicencia
	/// </summary>
	public ref class FormEditarLicencia : public System::Windows::Forms::Form
	{
	public:
		FormEditarLicencia(void)
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
		~FormEditarLicencia()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnEditarLicencia;

	public: System::Windows::Forms::DateTimePicker^ dateEditarFinLicencia;
	public: System::Windows::Forms::DateTimePicker^ dateEditarInicioLicencia;
	public: System::Windows::Forms::TextBox^ txtEditarDescripcionLicencia;
	public: System::Windows::Forms::ComboBox^ comboUsuario;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarLicencia::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnEditarLicencia = (gcnew System::Windows::Forms::Button());
			this->dateEditarFinLicencia = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateEditarInicioLicencia = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtEditarDescripcionLicencia = (gcnew System::Windows::Forms::TextBox());
			this->Atras = (gcnew System::Windows::Forms::Button());
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
			this->label1->Size = System::Drawing::Size(120, 36);
			this->label1->TabIndex = 3;
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
			this->label2->TabIndex = 11;
			this->label2->Text = L"Descripcion";
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
			this->label4->TabIndex = 13;
			this->label4->Text = L"Fecha Inicio";
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
			this->label3->TabIndex = 14;
			this->label3->Text = L"Fecha Fin";
			// 
			// btnEditarLicencia
			// 
			this->btnEditarLicencia->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnEditarLicencia->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditarLicencia->ForeColor = System::Drawing::Color::White;
			this->btnEditarLicencia->Location = System::Drawing::Point(492, 352);
			this->btnEditarLicencia->Name = L"btnEditarLicencia";
			this->btnEditarLicencia->Size = System::Drawing::Size(254, 46);
			this->btnEditarLicencia->TabIndex = 15;
			this->btnEditarLicencia->Text = L"Guardar";
			this->btnEditarLicencia->UseVisualStyleBackColor = false;
			this->btnEditarLicencia->Click += gcnew System::EventHandler(this, &FormEditarLicencia::btnEditarLicencia_Click);
			// 
			// dateEditarFinLicencia
			// 
			this->dateEditarFinLicencia->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateEditarFinLicencia->Location = System::Drawing::Point(203, 199);
			this->dateEditarFinLicencia->Name = L"dateEditarFinLicencia";
			this->dateEditarFinLicencia->Size = System::Drawing::Size(248, 22);
			this->dateEditarFinLicencia->TabIndex = 18;
			this->dateEditarFinLicencia->Value = System::DateTime(2022, 11, 9, 0, 0, 0, 0);
			// 
			// dateEditarInicioLicencia
			// 
			this->dateEditarInicioLicencia->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateEditarInicioLicencia->Location = System::Drawing::Point(203, 150);
			this->dateEditarInicioLicencia->Name = L"dateEditarInicioLicencia";
			this->dateEditarInicioLicencia->Size = System::Drawing::Size(248, 22);
			this->dateEditarInicioLicencia->TabIndex = 19;
			this->dateEditarInicioLicencia->Value = System::DateTime(2022, 11, 9, 0, 0, 0, 0);
			// 
			// txtEditarDescripcionLicencia
			// 
			this->txtEditarDescripcionLicencia->Location = System::Drawing::Point(203, 86);
			this->txtEditarDescripcionLicencia->Multiline = true;
			this->txtEditarDescripcionLicencia->Name = L"txtEditarDescripcionLicencia";
			this->txtEditarDescripcionLicencia->Size = System::Drawing::Size(248, 35);
			this->txtEditarDescripcionLicencia->TabIndex = 20;
			// 
			// Atras
			// 
			this->Atras->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Atras->ForeColor = System::Drawing::Color::White;
			this->Atras->Location = System::Drawing::Point(40, 352);
			this->Atras->Name = L"Atras";
			this->Atras->Size = System::Drawing::Size(254, 44);
			this->Atras->TabIndex = 23;
			this->Atras->Text = L"Atras";
			this->Atras->UseVisualStyleBackColor = false;
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarLicencia::Atras_Click);
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(203, 41);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(248, 24);
			this->comboUsuario->TabIndex = 24;
			// 
			// FormEditarLicencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboUsuario);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->txtEditarDescripcionLicencia);
			this->Controls->Add(this->dateEditarInicioLicencia);
			this->Controls->Add(this->dateEditarFinLicencia);
			this->Controls->Add(this->btnEditarLicencia);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarLicencia";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FormEditarLicencia";
			this->Load += gcnew System::EventHandler(this, &FormEditarLicencia::FormEditarLicencia_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEditarLicencia_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}

	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void FormEditarLicencia_Load(System::Object^ sender, System::EventArgs^ e) {
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
