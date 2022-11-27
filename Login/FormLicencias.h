#pragma once
#include "FormListadoLicencias.h"
#include "FormAgregarLicencia.h"


namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormLicencias
	/// </summary>
	public ref class FormLicencias : public System::Windows::Forms::Form
	{
	public:
		FormLicencias(void)
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
		~FormLicencias()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textLicencia;
	private: System::Windows::Forms::Button^ btnAgregarLicencia;
	private: System::Windows::Forms::Button^ btnListadoLicencias;


	private: System::Windows::Forms::Panel^ panelLicencias;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormLicencias::typeid));
			this->textLicencia = (gcnew System::Windows::Forms::Label());
			this->btnAgregarLicencia = (gcnew System::Windows::Forms::Button());
			this->btnListadoLicencias = (gcnew System::Windows::Forms::Button());
			this->panelLicencias = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textLicencia
			// 
			this->textLicencia->AutoSize = true;
			this->textLicencia->BackColor = System::Drawing::Color::Transparent;
			this->textLicencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textLicencia->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textLicencia->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textLicencia->Location = System::Drawing::Point(5, 9);
			this->textLicencia->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textLicencia->Name = L"textLicencia";
			this->textLicencia->Size = System::Drawing::Size(184, 42);
			this->textLicencia->TabIndex = 6;
			this->textLicencia->Text = L"Licencias";
			this->textLicencia->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarLicencia
			// 
			this->btnAgregarLicencia->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarLicencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarLicencia->Location = System::Drawing::Point(482, 2);
			this->btnAgregarLicencia->Name = L"btnAgregarLicencia";
			this->btnAgregarLicencia->Size = System::Drawing::Size(145, 63);
			this->btnAgregarLicencia->TabIndex = 12;
			this->btnAgregarLicencia->Text = L"Agregar";
			this->btnAgregarLicencia->UseVisualStyleBackColor = false;
			this->btnAgregarLicencia->Click += gcnew System::EventHandler(this, &FormLicencias::btnAgregarLicencia_Click);
			// 
			// btnListadoLicencias
			// 
			this->btnListadoLicencias->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoLicencias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnListadoLicencias->Location = System::Drawing::Point(633, 2);
			this->btnListadoLicencias->Name = L"btnListadoLicencias";
			this->btnListadoLicencias->Size = System::Drawing::Size(140, 63);
			this->btnListadoLicencias->TabIndex = 8;
			this->btnListadoLicencias->Text = L"Listado";
			this->btnListadoLicencias->UseVisualStyleBackColor = false;
			this->btnListadoLicencias->Click += gcnew System::EventHandler(this, &FormLicencias::btnListadoLicencias_Click);
			// 
			// panelLicencias
			// 
			this->panelLicencias->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLicencias.BackgroundImage")));
			this->panelLicencias->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelLicencias->Location = System::Drawing::Point(-1, 78);
			this->panelLicencias->Name = L"panelLicencias";
			this->panelLicencias->Size = System::Drawing::Size(785, 440);
			this->panelLicencias->TabIndex = 11;
			// 
			// FormLicencias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(783, 519);
			this->Controls->Add(this->panelLicencias);
			this->Controls->Add(this->btnListadoLicencias);
			this->Controls->Add(this->btnAgregarLicencia);
			this->Controls->Add(this->textLicencia);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormLicencias";
			this->Text = L"FormLicencias";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelLicencias->Controls->Count > 0)
				this->panelLicencias->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelLicencias->Controls->Add(FormHijo);
			this->panelLicencias->Tag = FormHijo;
			FormHijo->Show();
		}


	private: System::Void btnAgregarLicencia_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarLicencia);
	}
	private: System::Void btnListadoLicencias_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoLicencias);
	}
};
}
