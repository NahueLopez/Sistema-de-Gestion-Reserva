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
	/// Resumen de FormAgregarMantenimiento
	/// </summary>
	public ref class FormAgregarMantenimiento : public System::Windows::Forms::Form
	{
	public:
		FormAgregarMantenimiento(void)
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
		~FormAgregarMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNombreDescripcion;


	private: System::Windows::Forms::Button^ btnGuardarMantenimiento;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ComboBox^ comboHabitat;
	private: System::Windows::Forms::ComboBox^ comboArea;
	private: System::Windows::Forms::ComboBox^ comboUsuario;





	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarMantenimiento::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombreDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardarMantenimiento = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboHabitat = (gcnew System::Windows::Forms::ComboBox());
			this->comboArea = (gcnew System::Windows::Forms::ComboBox());
			this->comboUsuario = (gcnew System::Windows::Forms::ComboBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
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
			this->label1->Size = System::Drawing::Size(172, 36);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Descripcion";
			// 
			// txtNombreDescripcion
			// 
			this->txtNombreDescripcion->Location = System::Drawing::Point(190, 30);
			this->txtNombreDescripcion->Multiline = true;
			this->txtNombreDescripcion->Name = L"txtNombreDescripcion";
			this->txtNombreDescripcion->Size = System::Drawing::Size(248, 35);
			this->txtNombreDescripcion->TabIndex = 10;
			// 
			// btnGuardarMantenimiento
			// 
			this->btnGuardarMantenimiento->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarMantenimiento->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarMantenimiento->ForeColor = System::Drawing::Color::White;
			this->btnGuardarMantenimiento->Location = System::Drawing::Point(492, 352);
			this->btnGuardarMantenimiento->Name = L"btnGuardarMantenimiento";
			this->btnGuardarMantenimiento->Size = System::Drawing::Size(254, 46);
			this->btnGuardarMantenimiento->TabIndex = 11;
			this->btnGuardarMantenimiento->Text = L"Guardar";
			this->btnGuardarMantenimiento->UseVisualStyleBackColor = false;
			this->btnGuardarMantenimiento->Click += gcnew System::EventHandler(this, &FormAgregarMantenimiento::btnGuardarMantenimiento_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(21, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 36);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Habitad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(21, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 36);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Area";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(21, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 36);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Encargado";
			// 
			// comboHabitat
			// 
			this->comboHabitat->FormattingEnabled = true;
			this->comboHabitat->Location = System::Drawing::Point(190, 95);
			this->comboHabitat->Name = L"comboHabitat";
			this->comboHabitat->Size = System::Drawing::Size(248, 24);
			this->comboHabitat->TabIndex = 16;
			// 
			// comboArea
			// 
			this->comboArea->FormattingEnabled = true;
			this->comboArea->Location = System::Drawing::Point(190, 150);
			this->comboArea->Name = L"comboArea";
			this->comboArea->Size = System::Drawing::Size(248, 24);
			this->comboArea->TabIndex = 17;
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(190, 200);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(248, 24);
			this->comboUsuario->TabIndex = 18;
			// 
			// FormAgregarMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboUsuario);
			this->Controls->Add(this->comboArea);
			this->Controls->Add(this->comboHabitat);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnGuardarMantenimiento);
			this->Controls->Add(this->txtNombreDescripcion);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarMantenimiento";
			this->Text = L"FormAgregarMantenimiento";
			this->Load += gcnew System::EventHandler(this, &FormAgregarMantenimiento::FormAgregarMantenimiento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardarMantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarMantenimiento(this->txtNombreDescripcion->Text, this->comboHabitat->SelectedValue, this->comboArea->SelectedValue, this->comboUsuario->SelectedValue);
		this->data->CerrarConexion();
	}
	

	private: System::Void FormAgregarMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}


	public: void Consulta() {

		this->data->AbrirConexion();

		this->comboArea->DataSource = this->data->HabitatNombres();
		this->comboArea->DisplayMember = "Habitat";
		this->comboArea->ValueMember = "id";

		this->comboHabitat->DataSource = this->data->ListadosArea();
		this->comboHabitat->DisplayMember = "Area";
		this->comboHabitat->ValueMember = "id";


		this->comboUsuario->DataSource = this->data->UsuarioNombres();
		this->comboUsuario->DisplayMember = "Nombre";
		this->comboUsuario->ValueMember = "id";


		this->data->CerrarConexion();
	}
};
}
