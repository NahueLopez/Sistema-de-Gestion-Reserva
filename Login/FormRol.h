#pragma once
#include "FormListadoRol.h"
#include "FormAgregarRol.h"



namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormRol
	/// </summary>
	public ref class FormRol : public System::Windows::Forms::Form
	{
	public:
		FormRol(void)
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
		~FormRol()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textRol;
	private: System::Windows::Forms::Button^ btnAgregarRol;
	private: System::Windows::Forms::Button^ btnListadoRoles;


	private: System::Windows::Forms::Panel^ panelRol;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormRol::typeid));
			this->textRol = (gcnew System::Windows::Forms::Label());
			this->btnAgregarRol = (gcnew System::Windows::Forms::Button());
			this->btnListadoRoles = (gcnew System::Windows::Forms::Button());
			this->panelRol = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textRol
			// 
			this->textRol->AutoSize = true;
			this->textRol->BackColor = System::Drawing::Color::Transparent;
			this->textRol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textRol->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textRol->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textRol->Location = System::Drawing::Point(5, 9);
			this->textRol->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textRol->Name = L"textRol";
			this->textRol->Size = System::Drawing::Size(77, 42);
			this->textRol->TabIndex = 8;
			this->textRol->Text = L"Rol";
			this->textRol->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarRol
			// 
			this->btnAgregarRol->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarRol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarRol->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAgregarRol->Location = System::Drawing::Point(482, 2);
			this->btnAgregarRol->Name = L"btnAgregarRol";
			this->btnAgregarRol->Size = System::Drawing::Size(145, 63);
			this->btnAgregarRol->TabIndex = 9;
			this->btnAgregarRol->Text = L"Agregar";
			this->btnAgregarRol->UseVisualStyleBackColor = false;
			this->btnAgregarRol->Click += gcnew System::EventHandler(this, &FormRol::btnAgregarRol_Click);
			// 
			// btnListadoRoles
			// 
			this->btnListadoRoles->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoRoles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnListadoRoles->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnListadoRoles->Location = System::Drawing::Point(633, 2);
			this->btnListadoRoles->Name = L"btnListadoRoles";
			this->btnListadoRoles->Size = System::Drawing::Size(140, 63);
			this->btnListadoRoles->TabIndex = 10;
			this->btnListadoRoles->Text = L"Listado";
			this->btnListadoRoles->UseVisualStyleBackColor = false;
			this->btnListadoRoles->Click += gcnew System::EventHandler(this, &FormRol::btnListadoRoles_Click);
			// 
			// panelRol
			// 
			this->panelRol->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelRol.BackgroundImage")));
			this->panelRol->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelRol->Location = System::Drawing::Point(1, 78);
			this->panelRol->Name = L"panelRol";
			this->panelRol->Size = System::Drawing::Size(783, 446);
			this->panelRol->TabIndex = 13;
			// 
			// FormRol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->panelRol);
			this->Controls->Add(this->btnListadoRoles);
			this->Controls->Add(this->btnAgregarRol);
			this->Controls->Add(this->textRol);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormRol";
			this->Text = L"FormRol";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelRol->Controls->Count > 0)
				this->panelRol->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelRol->Controls->Add(FormHijo);
			this->panelRol->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void btnListadoRoles_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoRol);
	}
	private: System::Void btnAgregarRol_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarRol);
	}
};
}
