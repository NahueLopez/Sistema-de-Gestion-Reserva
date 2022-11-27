#pragma once
#include "FormListadoUsuarios.h"
#include "FormAgregarUsuario.h"
#include "FormAgregarUsuario1.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormUsuarios
	/// </summary>
	public ref class FormUsuarios : public System::Windows::Forms::Form
	{
	public:
		FormUsuarios(void)
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
		~FormUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textAlimentos;




	private: System::Windows::Forms::Panel^ panelUsuario;
	private: System::Windows::Forms::Button^ btnAgregarUsuario;
	private: System::Windows::Forms::Button^ btnListadoUsuario;



	protected:












	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormUsuarios::typeid));
			this->textAlimentos = (gcnew System::Windows::Forms::Label());
			this->btnAgregarUsuario = (gcnew System::Windows::Forms::Button());
			this->btnListadoUsuario = (gcnew System::Windows::Forms::Button());
			this->panelUsuario = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textAlimentos
			// 
			this->textAlimentos->AutoSize = true;
			this->textAlimentos->BackColor = System::Drawing::Color::Transparent;
			this->textAlimentos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textAlimentos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textAlimentos->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textAlimentos->Location = System::Drawing::Point(5, 9);
			this->textAlimentos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textAlimentos->Name = L"textAlimentos";
			this->textAlimentos->Size = System::Drawing::Size(174, 42);
			this->textAlimentos->TabIndex = 1;
			this->textAlimentos->Text = L"Usuarios";
			this->textAlimentos->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarUsuario
			// 
			this->btnAgregarUsuario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAgregarUsuario->Location = System::Drawing::Point(482, 2);
			this->btnAgregarUsuario->Name = L"btnAgregarUsuario";
			this->btnAgregarUsuario->Size = System::Drawing::Size(145, 63);
			this->btnAgregarUsuario->TabIndex = 2;
			this->btnAgregarUsuario->Text = L"Agregar";
			this->btnAgregarUsuario->UseVisualStyleBackColor = false;
			this->btnAgregarUsuario->Click += gcnew System::EventHandler(this, &FormUsuarios::btnAgregarUsuario_Click);
			// 
			// btnListadoUsuario
			// 
			this->btnListadoUsuario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnListadoUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnListadoUsuario->Location = System::Drawing::Point(633, 2);
			this->btnListadoUsuario->Name = L"btnListadoUsuario";
			this->btnListadoUsuario->Size = System::Drawing::Size(140, 63);
			this->btnListadoUsuario->TabIndex = 3;
			this->btnListadoUsuario->Text = L"Listado";
			this->btnListadoUsuario->UseVisualStyleBackColor = false;
			this->btnListadoUsuario->Click += gcnew System::EventHandler(this, &FormUsuarios::btnListadoUsuario_Click);
			// 
			// panelUsuario
			// 
			this->panelUsuario->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelUsuario.BackgroundImage")));
			this->panelUsuario->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelUsuario->Location = System::Drawing::Point(0, 78);
			this->panelUsuario->Name = L"panelUsuario";
			this->panelUsuario->Size = System::Drawing::Size(786, 445);
			this->panelUsuario->TabIndex = 6;
			// 
			// FormUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->panelUsuario);
			this->Controls->Add(this->btnListadoUsuario);
			this->Controls->Add(this->btnAgregarUsuario);
			this->Controls->Add(this->textAlimentos);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormUsuarios";
			this->Text = L"FormUsuarios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelUsuario->Controls->Count > 0)
				this->panelUsuario->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelUsuario->Controls->Add(FormHijo);
			this->panelUsuario->Tag = FormHijo;
			FormHijo->Show();
		}


	private: System::Void btnListadoUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoUsuarios);
	}
	private: System::Void btnAgregarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarUsuario);
	}
	
};
}
