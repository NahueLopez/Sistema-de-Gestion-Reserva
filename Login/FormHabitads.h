#pragma once
#include "FormListadoHabitads.h"
#include "FormAgregarHabitad.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormHabitads
	/// </summary>
	public ref class FormHabitads : public System::Windows::Forms::Form
	{
	public:
		FormHabitads(void)
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
		~FormHabitads()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btnAgregarHabitat;

	private: System::Windows::Forms::Button^ btnListadoHabitat;



	private: System::Windows::Forms::Panel^ panelHabitats;
	private: System::Windows::Forms::Label^ textHabitat;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormHabitads::typeid));
			this->textHabitat = (gcnew System::Windows::Forms::Label());
			this->btnAgregarHabitat = (gcnew System::Windows::Forms::Button());
			this->btnListadoHabitat = (gcnew System::Windows::Forms::Button());
			this->panelHabitats = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textHabitat
			// 
			this->textHabitat->AutoSize = true;
			this->textHabitat->BackColor = System::Drawing::Color::Transparent;
			this->textHabitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textHabitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textHabitat->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textHabitat->Location = System::Drawing::Point(5, 9);
			this->textHabitat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textHabitat->Name = L"textHabitat";
			this->textHabitat->Size = System::Drawing::Size(143, 42);
			this->textHabitat->TabIndex = 5;
			this->textHabitat->Text = L"Habitat";
			this->textHabitat->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarHabitat
			// 
			this->btnAgregarHabitat->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarHabitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarHabitat->Location = System::Drawing::Point(482, 2);
			this->btnAgregarHabitat->Name = L"btnAgregarHabitat";
			this->btnAgregarHabitat->Size = System::Drawing::Size(145, 63);
			this->btnAgregarHabitat->TabIndex = 6;
			this->btnAgregarHabitat->Text = L"Agregar";
			this->btnAgregarHabitat->UseVisualStyleBackColor = false;
			this->btnAgregarHabitat->Click += gcnew System::EventHandler(this, &FormHabitads::btnAgregarHabitat_Click);
			// 
			// btnListadoHabitat
			// 
			this->btnListadoHabitat->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoHabitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnListadoHabitat->Location = System::Drawing::Point(633, 2);
			this->btnListadoHabitat->Name = L"btnListadoHabitat";
			this->btnListadoHabitat->Size = System::Drawing::Size(140, 63);
			this->btnListadoHabitat->TabIndex = 7;
			this->btnListadoHabitat->Text = L"Listado";
			this->btnListadoHabitat->UseVisualStyleBackColor = false;
			this->btnListadoHabitat->Click += gcnew System::EventHandler(this, &FormHabitads::btnListadoHabitat_Click);
			// 
			// panelHabitats
			// 
			this->panelHabitats->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHabitats.BackgroundImage")));
			this->panelHabitats->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelHabitats->Location = System::Drawing::Point(0, 78);
			this->panelHabitats->Name = L"panelHabitats";
			this->panelHabitats->Size = System::Drawing::Size(784, 444);
			this->panelHabitats->TabIndex = 12;
			// 
			// FormHabitads
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->panelHabitats);
			this->Controls->Add(this->btnListadoHabitat);
			this->Controls->Add(this->btnAgregarHabitat);
			this->Controls->Add(this->textHabitat);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormHabitads";
			this->Text = L"FormHabitads";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelHabitats->Controls->Count > 0)
				this->panelHabitats->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelHabitats->Controls->Add(FormHijo);
			this->panelHabitats->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void btnAgregarHabitat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarHabitad);
	}
	private: System::Void btnListadoHabitat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoHabitads);
	}
};
}
