#pragma once
#include "FormListadoArea.h"
#include "FormAgregarArea.h"


namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormAreas
	/// </summary>
	public ref class FormAreas : public System::Windows::Forms::Form
	{
	public:
		FormAreas(void)
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
		~FormAreas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textAreas;
	private: System::Windows::Forms::Button^ btnAgregarArea;
	private: System::Windows::Forms::Button^ btnListadoAreas;


	private: System::Windows::Forms::Panel^ panelArea;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAreas::typeid));
			this->textAreas = (gcnew System::Windows::Forms::Label());
			this->btnAgregarArea = (gcnew System::Windows::Forms::Button());
			this->btnListadoAreas = (gcnew System::Windows::Forms::Button());
			this->panelArea = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textAreas
			// 
			this->textAreas->AutoSize = true;
			this->textAreas->BackColor = System::Drawing::Color::Transparent;
			this->textAreas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textAreas->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textAreas->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textAreas->Location = System::Drawing::Point(5, 9);
			this->textAreas->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textAreas->Name = L"textAreas";
			this->textAreas->Size = System::Drawing::Size(101, 42);
			this->textAreas->TabIndex = 2;
			this->textAreas->Text = L"Area";
			this->textAreas->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarArea
			// 
			this->btnAgregarArea->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarArea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarArea->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAgregarArea->Location = System::Drawing::Point(482, 2);
			this->btnAgregarArea->Name = L"btnAgregarArea";
			this->btnAgregarArea->Size = System::Drawing::Size(145, 63);
			this->btnAgregarArea->TabIndex = 3;
			this->btnAgregarArea->Text = L"Agregar";
			this->btnAgregarArea->UseVisualStyleBackColor = false;
			this->btnAgregarArea->Click += gcnew System::EventHandler(this, &FormAreas::btnAgregarArea_Click);
			// 
			// btnListadoAreas
			// 
			this->btnListadoAreas->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoAreas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnListadoAreas->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnListadoAreas->Location = System::Drawing::Point(633, 2);
			this->btnListadoAreas->Name = L"btnListadoAreas";
			this->btnListadoAreas->Size = System::Drawing::Size(140, 63);
			this->btnListadoAreas->TabIndex = 4;
			this->btnListadoAreas->Text = L"Listado";
			this->btnListadoAreas->UseVisualStyleBackColor = false;
			this->btnListadoAreas->Click += gcnew System::EventHandler(this, &FormAreas::btnListadoAreas_Click);
			// 
			// panelArea
			// 
			this->panelArea->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelArea.BackgroundImage")));
			this->panelArea->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelArea->Location = System::Drawing::Point(0, 71);
			this->panelArea->Name = L"panelArea";
			this->panelArea->Size = System::Drawing::Size(784, 449);
			this->panelArea->TabIndex = 14;
			// 
			// FormAreas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 522);
			this->Controls->Add(this->panelArea);
			this->Controls->Add(this->btnListadoAreas);
			this->Controls->Add(this->btnAgregarArea);
			this->Controls->Add(this->textAreas);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormAreas";
			this->Text = L"FormAreas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelArea->Controls->Count > 0)
				this->panelArea->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelArea->Controls->Add(FormHijo);
			this->panelArea->Tag = FormHijo;
			FormHijo->Show();
		}
	
	private: System::Void btnAgregarArea_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarArea);
	}
	private: System::Void btnListadoAreas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoArea);
	}
};
}
