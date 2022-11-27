#pragma once
#include "FormListadoComidas.h"
#include "FormAgregarComida.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormComidas
	/// </summary>
	public ref class FormComidas : public System::Windows::Forms::Form
	{
	public:
		FormComidas(void)
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
		~FormComidas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textComida;
	private: System::Windows::Forms::Button^ btnAgregarComida;
	private: System::Windows::Forms::Button^ btnListadoComidas;


	private: System::Windows::Forms::Panel^ panelComidas;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormComidas::typeid));
			this->textComida = (gcnew System::Windows::Forms::Label());
			this->btnAgregarComida = (gcnew System::Windows::Forms::Button());
			this->btnListadoComidas = (gcnew System::Windows::Forms::Button());
			this->panelComidas = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textComida
			// 
			this->textComida->AutoSize = true;
			this->textComida->BackColor = System::Drawing::Color::Transparent;
			this->textComida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textComida->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textComida->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textComida->Location = System::Drawing::Point(5, 9);
			this->textComida->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textComida->Name = L"textComida";
			this->textComida->Size = System::Drawing::Size(152, 42);
			this->textComida->TabIndex = 3;
			this->textComida->Text = L"Comida";
			this->textComida->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarComida
			// 
			this->btnAgregarComida->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarComida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarComida->Location = System::Drawing::Point(482, 2);
			this->btnAgregarComida->Name = L"btnAgregarComida";
			this->btnAgregarComida->Size = System::Drawing::Size(145, 63);
			this->btnAgregarComida->TabIndex = 4;
			this->btnAgregarComida->Text = L"Agregar";
			this->btnAgregarComida->UseVisualStyleBackColor = false;
			this->btnAgregarComida->Click += gcnew System::EventHandler(this, &FormComidas::btnAgregarComida_Click);
			// 
			// btnListadoComidas
			// 
			this->btnListadoComidas->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoComidas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnListadoComidas->Location = System::Drawing::Point(633, 2);
			this->btnListadoComidas->Name = L"btnListadoComidas";
			this->btnListadoComidas->Size = System::Drawing::Size(140, 63);
			this->btnListadoComidas->TabIndex = 5;
			this->btnListadoComidas->Text = L"Listado";
			this->btnListadoComidas->UseVisualStyleBackColor = false;
			this->btnListadoComidas->Click += gcnew System::EventHandler(this, &FormComidas::btnListadoComidas_Click);
			// 
			// panelComidas
			// 
			this->panelComidas->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelComidas.BackgroundImage")));
			this->panelComidas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelComidas->Location = System::Drawing::Point(1, 71);
			this->panelComidas->Name = L"panelComidas";
			this->panelComidas->Size = System::Drawing::Size(783, 454);
			this->panelComidas->TabIndex = 12;
			// 
			// FormComidas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 524);
			this->Controls->Add(this->panelComidas);
			this->Controls->Add(this->btnListadoComidas);
			this->Controls->Add(this->btnAgregarComida);
			this->Controls->Add(this->textComida);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormComidas";
			this->Text = L"FormComidas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelComidas->Controls->Count > 0)
				this->panelComidas->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelComidas->Controls->Add(FormHijo);
			this->panelComidas->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void btnAgregarComida_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarComida);
	}
	private: System::Void btnListadoComidas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoComidas);
	}
};
}
