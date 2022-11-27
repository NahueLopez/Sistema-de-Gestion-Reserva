#pragma once

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormCrearUsuario
	/// </summary>
	public ref class FormCrearUsuario : public System::Windows::Forms::Form
	{
	public:
		FormCrearUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormCrearUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAtrasUsuario;
	private: System::Windows::Forms::Button^ btnAgregarUsuario;
	private: System::Windows::Forms::Label^ txtNombreUSuario;
	private: System::Windows::Forms::Label^ txtApellidoUsuario;
	private: System::Windows::Forms::Label^ txtDniUsuario;
	private: System::Windows::Forms::Label^ txtFNacimientoUsuario;
	private: System::Windows::Forms::Label^ txtDireccion;
	private: System::Windows::Forms::Label^ txtMatriculaUsuario;
	private: System::Windows::Forms::Label^ txtArea;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCrearUsuario::typeid));
			this->btnAtrasUsuario = (gcnew System::Windows::Forms::Button());
			this->btnAgregarUsuario = (gcnew System::Windows::Forms::Button());
			this->txtNombreUSuario = (gcnew System::Windows::Forms::Label());
			this->txtApellidoUsuario = (gcnew System::Windows::Forms::Label());
			this->txtDniUsuario = (gcnew System::Windows::Forms::Label());
			this->txtFNacimientoUsuario = (gcnew System::Windows::Forms::Label());
			this->txtDireccion = (gcnew System::Windows::Forms::Label());
			this->txtMatriculaUsuario = (gcnew System::Windows::Forms::Label());
			this->txtArea = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnAtrasUsuario
			// 
			this->btnAtrasUsuario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAtrasUsuario->ForeColor = System::Drawing::Color::White;
			this->btnAtrasUsuario->Location = System::Drawing::Point(46, 458);
			this->btnAtrasUsuario->Name = L"btnAtrasUsuario";
			this->btnAtrasUsuario->Size = System::Drawing::Size(129, 41);
			this->btnAtrasUsuario->TabIndex = 0;
			this->btnAtrasUsuario->Text = L"Salir";
			this->btnAtrasUsuario->UseVisualStyleBackColor = false;
			// 
			// btnAgregarUsuario
			// 
			this->btnAgregarUsuario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarUsuario->ForeColor = System::Drawing::Color::White;
			this->btnAgregarUsuario->Location = System::Drawing::Point(592, 458);
			this->btnAgregarUsuario->Name = L"btnAgregarUsuario";
			this->btnAgregarUsuario->Size = System::Drawing::Size(129, 41);
			this->btnAgregarUsuario->TabIndex = 1;
			this->btnAgregarUsuario->Text = L"Agregar";
			this->btnAgregarUsuario->UseVisualStyleBackColor = false;
			// 
			// txtNombreUSuario
			// 
			this->txtNombreUSuario->AutoSize = true;
			this->txtNombreUSuario->BackColor = System::Drawing::Color::Transparent;
			this->txtNombreUSuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombreUSuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtNombreUSuario->Location = System::Drawing::Point(70, 57);
			this->txtNombreUSuario->Name = L"txtNombreUSuario";
			this->txtNombreUSuario->Size = System::Drawing::Size(110, 31);
			this->txtNombreUSuario->TabIndex = 2;
			this->txtNombreUSuario->Text = L"Nombre";
			// 
			// txtApellidoUsuario
			// 
			this->txtApellidoUsuario->AutoSize = true;
			this->txtApellidoUsuario->BackColor = System::Drawing::Color::Transparent;
			this->txtApellidoUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApellidoUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtApellidoUsuario->Location = System::Drawing::Point(70, 109);
			this->txtApellidoUsuario->Name = L"txtApellidoUsuario";
			this->txtApellidoUsuario->Size = System::Drawing::Size(110, 31);
			this->txtApellidoUsuario->TabIndex = 3;
			this->txtApellidoUsuario->Text = L"Apellido";
			// 
			// txtDniUsuario
			// 
			this->txtDniUsuario->AutoSize = true;
			this->txtDniUsuario->BackColor = System::Drawing::Color::Transparent;
			this->txtDniUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDniUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtDniUsuario->Location = System::Drawing::Point(70, 163);
			this->txtDniUsuario->Name = L"txtDniUsuario";
			this->txtDniUsuario->Size = System::Drawing::Size(55, 31);
			this->txtDniUsuario->TabIndex = 4;
			this->txtDniUsuario->Text = L"Dni";
			// 
			// txtFNacimientoUsuario
			// 
			this->txtFNacimientoUsuario->AutoSize = true;
			this->txtFNacimientoUsuario->BackColor = System::Drawing::Color::Transparent;
			this->txtFNacimientoUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtFNacimientoUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtFNacimientoUsuario->Location = System::Drawing::Point(70, 218);
			this->txtFNacimientoUsuario->Name = L"txtFNacimientoUsuario";
			this->txtFNacimientoUsuario->Size = System::Drawing::Size(150, 31);
			this->txtFNacimientoUsuario->TabIndex = 5;
			this->txtFNacimientoUsuario->Text = L"Nacimiento";
			// 
			// txtDireccion
			// 
			this->txtDireccion->AutoSize = true;
			this->txtDireccion->BackColor = System::Drawing::Color::Transparent;
			this->txtDireccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDireccion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtDireccion->Location = System::Drawing::Point(70, 273);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(128, 31);
			this->txtDireccion->TabIndex = 6;
			this->txtDireccion->Text = L"Direccion";
			// 
			// txtMatriculaUsuario
			// 
			this->txtMatriculaUsuario->AutoSize = true;
			this->txtMatriculaUsuario->BackColor = System::Drawing::Color::Transparent;
			this->txtMatriculaUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtMatriculaUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtMatriculaUsuario->Location = System::Drawing::Point(70, 325);
			this->txtMatriculaUsuario->Name = L"txtMatriculaUsuario";
			this->txtMatriculaUsuario->Size = System::Drawing::Size(124, 31);
			this->txtMatriculaUsuario->TabIndex = 7;
			this->txtMatriculaUsuario->Text = L"Matricula";
			// 
			// txtArea
			// 
			this->txtArea->AutoSize = true;
			this->txtArea->BackColor = System::Drawing::Color::Transparent;
			this->txtArea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtArea->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtArea->Location = System::Drawing::Point(70, 379);
			this->txtArea->Name = L"txtArea";
			this->txtArea->Size = System::Drawing::Size(71, 31);
			this->txtArea->TabIndex = 8;
			this->txtArea->Text = L"Area";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(340, 57);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 32);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(340, 109);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 32);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(340, 163);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(288, 31);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(340, 218);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(288, 31);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(340, 273);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(288, 32);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(340, 325);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(288, 32);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(340, 379);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(288, 32);
			this->textBox7->TabIndex = 15;
			// 
			// FormCrearUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtArea);
			this->Controls->Add(this->txtMatriculaUsuario);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->txtFNacimientoUsuario);
			this->Controls->Add(this->txtDniUsuario);
			this->Controls->Add(this->txtApellidoUsuario);
			this->Controls->Add(this->txtNombreUSuario);
			this->Controls->Add(this->btnAgregarUsuario);
			this->Controls->Add(this->btnAtrasUsuario);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormCrearUsuario";
			this->Text = L"FormCrearUsuario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
