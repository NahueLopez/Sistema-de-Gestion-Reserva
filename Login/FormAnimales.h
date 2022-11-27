#pragma once
#include "FormAgregarAnimales.h"
#include "FormListadoAnimales.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormAnimales
	/// </summary>
	public ref class FormAnimales : public System::Windows::Forms::Form
	{
	public:
		FormAnimales(void)
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
		~FormAnimales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textAnimales;
	private: System::Windows::Forms::Button^ btnAgregarAnimal;
	private: System::Windows::Forms::Button^ btnListadoAnimales;


	private: System::Windows::Forms::Panel^ panelAnimales;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAnimales::typeid));
			this->textAnimales = (gcnew System::Windows::Forms::Label());
			this->btnAgregarAnimal = (gcnew System::Windows::Forms::Button());
			this->btnListadoAnimales = (gcnew System::Windows::Forms::Button());
			this->panelAnimales = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textAnimales
			// 
			this->textAnimales->AutoSize = true;
			this->textAnimales->BackColor = System::Drawing::Color::Transparent;
			this->textAnimales->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textAnimales->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textAnimales->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textAnimales->Location = System::Drawing::Point(5, 9);
			this->textAnimales->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textAnimales->Name = L"textAnimales";
			this->textAnimales->Size = System::Drawing::Size(179, 42);
			this->textAnimales->TabIndex = 1;
			this->textAnimales->Text = L"Animales";
			this->textAnimales->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarAnimal
			// 
			this->btnAgregarAnimal->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarAnimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarAnimal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAgregarAnimal->Location = System::Drawing::Point(482, 2);
			this->btnAgregarAnimal->Name = L"btnAgregarAnimal";
			this->btnAgregarAnimal->Size = System::Drawing::Size(145, 63);
			this->btnAgregarAnimal->TabIndex = 2;
			this->btnAgregarAnimal->Text = L"Agregar";
			this->btnAgregarAnimal->UseVisualStyleBackColor = false;
			this->btnAgregarAnimal->Click += gcnew System::EventHandler(this, &FormAnimales::btnAgregarAnimal_Click);
			// 
			// btnListadoAnimales
			// 
			this->btnListadoAnimales->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoAnimales->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnListadoAnimales->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnListadoAnimales->Location = System::Drawing::Point(633, 2);
			this->btnListadoAnimales->Name = L"btnListadoAnimales";
			this->btnListadoAnimales->Size = System::Drawing::Size(140, 63);
			this->btnListadoAnimales->TabIndex = 3;
			this->btnListadoAnimales->Text = L"Listado";
			this->btnListadoAnimales->UseVisualStyleBackColor = false;
			this->btnListadoAnimales->Click += gcnew System::EventHandler(this, &FormAnimales::btnListadoAnimales_Click);
			// 
			// panelAnimales
			// 
			this->panelAnimales->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelAnimales.BackgroundImage")));
			this->panelAnimales->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelAnimales->Location = System::Drawing::Point(0, 78);
			this->panelAnimales->Name = L"panelAnimales";
			this->panelAnimales->Size = System::Drawing::Size(785, 443);
			this->panelAnimales->TabIndex = 6;
			// 
			// FormAnimales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->panelAnimales);
			this->Controls->Add(this->btnListadoAnimales);
			this->Controls->Add(this->btnAgregarAnimal);
			this->Controls->Add(this->textAnimales);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormAnimales";
			this->Text = L"FormAnimales";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelAnimales->Controls->Count > 0)
				this->panelAnimales->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelAnimales->Controls->Add(FormHijo);
			this->panelAnimales->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void btnAgregarAnimal_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarAnimales);
	}
	private: System::Void btnListadoAnimales_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoAnimales);
	}
};
}
