#pragma once
#include "FormListadoMantenimientos.h"
#include "FormAgregarMantenimiento.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormMantenimientos
	/// </summary>
	public ref class FormMantenimientos : public System::Windows::Forms::Form
	{
	public:
		FormMantenimientos(void)
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
		~FormMantenimientos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textMantenimiento;
	private: System::Windows::Forms::Button^ btnAgregarMantenimiento;
	private: System::Windows::Forms::Button^ btnListadoMantenimientos;


	private: System::Windows::Forms::Panel^ panelMantenimiento;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMantenimientos::typeid));
			this->textMantenimiento = (gcnew System::Windows::Forms::Label());
			this->btnAgregarMantenimiento = (gcnew System::Windows::Forms::Button());
			this->btnListadoMantenimientos = (gcnew System::Windows::Forms::Button());
			this->panelMantenimiento = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textMantenimiento
			// 
			this->textMantenimiento->AutoSize = true;
			this->textMantenimiento->BackColor = System::Drawing::Color::Transparent;
			this->textMantenimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textMantenimiento->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textMantenimiento->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textMantenimiento->Location = System::Drawing::Point(5, 9);
			this->textMantenimiento->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textMantenimiento->Name = L"textMantenimiento";
			this->textMantenimiento->Size = System::Drawing::Size(275, 42);
			this->textMantenimiento->TabIndex = 6;
			this->textMantenimiento->Text = L"Mantenimiento";
			this->textMantenimiento->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarMantenimiento
			// 
			this->btnAgregarMantenimiento->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarMantenimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnAgregarMantenimiento->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAgregarMantenimiento->Location = System::Drawing::Point(482, 2);
			this->btnAgregarMantenimiento->Name = L"btnAgregarMantenimiento";
			this->btnAgregarMantenimiento->Size = System::Drawing::Size(145, 63);
			this->btnAgregarMantenimiento->TabIndex = 7;
			this->btnAgregarMantenimiento->Text = L"Agregar";
			this->btnAgregarMantenimiento->UseVisualStyleBackColor = false;
			this->btnAgregarMantenimiento->Click += gcnew System::EventHandler(this, &FormMantenimientos::btnAgregarMantenimiento_Click);
			// 
			// btnListadoMantenimientos
			// 
			this->btnListadoMantenimientos->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoMantenimientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnListadoMantenimientos->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnListadoMantenimientos->Location = System::Drawing::Point(633, 2);
			this->btnListadoMantenimientos->Name = L"btnListadoMantenimientos";
			this->btnListadoMantenimientos->Size = System::Drawing::Size(140, 63);
			this->btnListadoMantenimientos->TabIndex = 8;
			this->btnListadoMantenimientos->Text = L"Listado";
			this->btnListadoMantenimientos->UseVisualStyleBackColor = false;
			this->btnListadoMantenimientos->Click += gcnew System::EventHandler(this, &FormMantenimientos::btnListadoMantenimientos_Click);
			// 
			// panelMantenimiento
			// 
			this->panelMantenimiento->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMantenimiento.BackgroundImage")));
			this->panelMantenimiento->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelMantenimiento->Location = System::Drawing::Point(0, 78);
			this->panelMantenimiento->Name = L"panelMantenimiento";
			this->panelMantenimiento->Size = System::Drawing::Size(784, 443);
			this->panelMantenimiento->TabIndex = 12;
			// 
			// FormMantenimientos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->panelMantenimiento);
			this->Controls->Add(this->btnListadoMantenimientos);
			this->Controls->Add(this->btnAgregarMantenimiento);
			this->Controls->Add(this->textMantenimiento);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormMantenimientos";
			this->Text = L"FormMantenimientos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelMantenimiento->Controls->Count > 0)
				this->panelMantenimiento->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelMantenimiento->Controls->Add(FormHijo);
			this->panelMantenimiento->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void btnAgregarMantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarMantenimiento);
	}
	private: System::Void btnListadoMantenimientos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoMantenimientos);
	}
};
}
