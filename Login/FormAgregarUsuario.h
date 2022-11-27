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
	/// Resumen de FormAgregarUsuario
	/// </summary>
	public ref class FormAgregarUsuario : public System::Windows::Forms::Form
	{
	public:
		FormAgregarUsuario(void)
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
		~FormAgregarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;
	

	private: System::Windows::Forms::Button^ btnGuardarUsuario;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtNombreUsuario;
	private: System::Windows::Forms::TextBox^ txtApellidoUsuario;

	private: System::Windows::Forms::TextBox^ txtNacimientoUsuario;
	private: System::Windows::Forms::TextBox^ txtDireccionUsuario;
	private: System::Windows::Forms::TextBox^ txtMatriculaUsuario;

	private: System::Windows::Forms::TextBox^ txtDniUsuario;
	private: System::Windows::Forms::ComboBox^ comboArea;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarUsuario::typeid));
			this->btnGuardarUsuario = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtNombreUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidoUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtNacimientoUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccionUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtMatriculaUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtDniUsuario = (gcnew System::Windows::Forms::TextBox());
			this->comboArea = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnGuardarUsuario
			// 
			this->btnGuardarUsuario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarUsuario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarUsuario->ForeColor = System::Drawing::Color::White;
			this->btnGuardarUsuario->Location = System::Drawing::Point(492, 352);
			this->btnGuardarUsuario->Name = L"btnGuardarUsuario";
			this->btnGuardarUsuario->Size = System::Drawing::Size(254, 46);
			this->btnGuardarUsuario->TabIndex = 0;
			this->btnGuardarUsuario->Text = L"Guardar";
			this->btnGuardarUsuario->UseVisualStyleBackColor = false;
			this->btnGuardarUsuario->Click += gcnew System::EventHandler(this, &FormAgregarUsuario::btnGuardarUsuario_Click);
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
			this->label1->TabIndex = 1;
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
			this->label2->Size = System::Drawing::Size(124, 36);
			this->label2->TabIndex = 2;
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
			this->label3->TabIndex = 3;
			this->label3->Text = L"Dni";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(21, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 36);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Nacimiento";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(21, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 36);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Direccion";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(21, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 36);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Matricula";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(21, 354);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 36);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Area";
			// 
			// txtNombreUsuario
			// 
			this->txtNombreUsuario->Location = System::Drawing::Point(190, 30);
			this->txtNombreUsuario->Multiline = true;
			this->txtNombreUsuario->Name = L"txtNombreUsuario";
			this->txtNombreUsuario->Size = System::Drawing::Size(248, 35);
			this->txtNombreUsuario->TabIndex = 8;
			// 
			// txtApellidoUsuario
			// 
			this->txtApellidoUsuario->Location = System::Drawing::Point(190, 86);
			this->txtApellidoUsuario->Multiline = true;
			this->txtApellidoUsuario->Name = L"txtApellidoUsuario";
			this->txtApellidoUsuario->Size = System::Drawing::Size(248, 35);
			this->txtApellidoUsuario->TabIndex = 9;
			// 
			// txtNacimientoUsuario
			// 
			this->txtNacimientoUsuario->Location = System::Drawing::Point(190, 190);
			this->txtNacimientoUsuario->Multiline = true;
			this->txtNacimientoUsuario->Name = L"txtNacimientoUsuario";
			this->txtNacimientoUsuario->Size = System::Drawing::Size(248, 34);
			this->txtNacimientoUsuario->TabIndex = 11;
			// 
			// txtDireccionUsuario
			// 
			this->txtDireccionUsuario->Location = System::Drawing::Point(190, 246);
			this->txtDireccionUsuario->Multiline = true;
			this->txtDireccionUsuario->Name = L"txtDireccionUsuario";
			this->txtDireccionUsuario->Size = System::Drawing::Size(248, 35);
			this->txtDireccionUsuario->TabIndex = 12;
			// 
			// txtMatriculaUsuario
			// 
			this->txtMatriculaUsuario->Location = System::Drawing::Point(190, 299);
			this->txtMatriculaUsuario->Multiline = true;
			this->txtMatriculaUsuario->Name = L"txtMatriculaUsuario";
			this->txtMatriculaUsuario->Size = System::Drawing::Size(248, 35);
			this->txtMatriculaUsuario->TabIndex = 13;
			// 
			// txtDniUsuario
			// 
			this->txtDniUsuario->Location = System::Drawing::Point(190, 136);
			this->txtDniUsuario->Multiline = true;
			this->txtDniUsuario->Name = L"txtDniUsuario";
			this->txtDniUsuario->Size = System::Drawing::Size(248, 35);
			this->txtDniUsuario->TabIndex = 10;
			// 
			// comboArea
			// 
			this->comboArea->FormattingEnabled = true;
			this->comboArea->Location = System::Drawing::Point(190, 367);
			this->comboArea->Name = L"comboArea";
			this->comboArea->Size = System::Drawing::Size(248, 24);
			this->comboArea->TabIndex = 15;
			// 
			// FormAgregarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboArea);
			this->Controls->Add(this->txtMatriculaUsuario);
			this->Controls->Add(this->txtDireccionUsuario);
			this->Controls->Add(this->txtNacimientoUsuario);
			this->Controls->Add(this->txtDniUsuario);
			this->Controls->Add(this->txtApellidoUsuario);
			this->Controls->Add(this->txtNombreUsuario);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGuardarUsuario);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarUsuario";
			this->Text = L"FormAgregarUsuario";
			this->Load += gcnew System::EventHandler(this, &FormAgregarUsuario::FormAgregarUsuario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void btnGuardarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarUsuario(this->txtNombreUsuario->Text,this->txtApellidoUsuario->Text,this->txtDniUsuario->Text,this->txtNacimientoUsuario->Text,this->txtDireccionUsuario->Text,this->txtMatriculaUsuario->Text,this->comboArea->SelectedValue);
		this->data->CerrarConexion();
	}
	private: System::Void FormAgregarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
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
