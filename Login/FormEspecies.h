#pragma once
#include "FormListadoEspecies.h"
#include "FormAgregarEspecie.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormEspecies
	/// </summary>
	public ref class FormEspecies : public System::Windows::Forms::Form
	{
	public:
		FormEspecies(void)
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
		~FormEspecies()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textEspecies;
	private: System::Windows::Forms::Button^ btnAgregarEspecie;

	private: System::Windows::Forms::Button^ btnListadoEspecies;

	private: System::Windows::Forms::Panel^ panelEspecies;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEspecies::typeid));
			this->textEspecies = (gcnew System::Windows::Forms::Label());
			this->btnAgregarEspecie = (gcnew System::Windows::Forms::Button());
			this->btnListadoEspecies = (gcnew System::Windows::Forms::Button());
			this->panelEspecies = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textEspecies
			// 
			this->textEspecies->AutoSize = true;
			this->textEspecies->BackColor = System::Drawing::Color::Transparent;
			this->textEspecies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textEspecies->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textEspecies->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textEspecies->Location = System::Drawing::Point(5, 9);
			this->textEspecies->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textEspecies->Name = L"textEspecies";
			this->textEspecies->Size = System::Drawing::Size(179, 42);
			this->textEspecies->TabIndex = 4;
			this->textEspecies->Text = L"Especies";
			this->textEspecies->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarEspecie
			// 
			this->btnAgregarEspecie->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarEspecie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarEspecie->Location = System::Drawing::Point(482, 2);
			this->btnAgregarEspecie->Name = L"btnAgregarEspecie";
			this->btnAgregarEspecie->Size = System::Drawing::Size(145, 63);
			this->btnAgregarEspecie->TabIndex = 5;
			this->btnAgregarEspecie->Text = L"Agregar";
			this->btnAgregarEspecie->UseVisualStyleBackColor = false;
			this->btnAgregarEspecie->Click += gcnew System::EventHandler(this, &FormEspecies::btnAgregarEspecie_Click);
			// 
			// btnListadoEspecies
			// 
			this->btnListadoEspecies->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoEspecies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnListadoEspecies->Location = System::Drawing::Point(633, 2);
			this->btnListadoEspecies->Name = L"btnListadoEspecies";
			this->btnListadoEspecies->Size = System::Drawing::Size(140, 63);
			this->btnListadoEspecies->TabIndex = 7;
			this->btnListadoEspecies->Text = L"Listado";
			this->btnListadoEspecies->UseVisualStyleBackColor = false;
			this->btnListadoEspecies->Click += gcnew System::EventHandler(this, &FormEspecies::btnListadoEspecies_Click);
			// 
			// panelEspecies
			// 
			this->panelEspecies->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelEspecies.BackgroundImage")));
			this->panelEspecies->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelEspecies->Location = System::Drawing::Point(0, 78);
			this->panelEspecies->Name = L"panelEspecies";
			this->panelEspecies->Size = System::Drawing::Size(785, 442);
			this->panelEspecies->TabIndex = 12;
			// 
			// FormEspecies
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->panelEspecies);
			this->Controls->Add(this->btnListadoEspecies);
			this->Controls->Add(this->btnAgregarEspecie);
			this->Controls->Add(this->textEspecies);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormEspecies";
			this->Text = L"FormEspecies";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelEspecies->Controls->Count > 0)
				this->panelEspecies->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelEspecies->Controls->Add(FormHijo);
			this->panelEspecies->Tag = FormHijo;
			FormHijo->Show();
		}
	private: System::Void btnAgregarEspecie_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarEspecie);
	}
	private: System::Void btnListadoEspecies_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoEspecies);
	}
};
}
