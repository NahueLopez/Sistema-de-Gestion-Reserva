#pragma once
#include "FormListadoRevisiones.h"
#include "FormAgregarRevision.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormRevisiones
	/// </summary>
	public ref class FormRevisiones : public System::Windows::Forms::Form
	{
	public:
		FormRevisiones(void)
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
		~FormRevisiones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textRevision;
	protected:

	private: System::Windows::Forms::Button^ btnAgregarRevision;

	private: System::Windows::Forms::Button^ btnListadoRevisiones;


	private: System::Windows::Forms::Panel^ panelRevisiones;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormRevisiones::typeid));
			this->textRevision = (gcnew System::Windows::Forms::Label());
			this->btnAgregarRevision = (gcnew System::Windows::Forms::Button());
			this->btnListadoRevisiones = (gcnew System::Windows::Forms::Button());
			this->panelRevisiones = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textRevision
			// 
			this->textRevision->AutoSize = true;
			this->textRevision->BackColor = System::Drawing::Color::Transparent;
			this->textRevision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textRevision->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textRevision->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textRevision->Location = System::Drawing::Point(5, 9);
			this->textRevision->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textRevision->Name = L"textRevision";
			this->textRevision->Size = System::Drawing::Size(170, 42);
			this->textRevision->TabIndex = 7;
			this->textRevision->Text = L"Revision";
			this->textRevision->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarRevision
			// 
			this->btnAgregarRevision->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarRevision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarRevision->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAgregarRevision->Location = System::Drawing::Point(482, 2);
			this->btnAgregarRevision->Name = L"btnAgregarRevision";
			this->btnAgregarRevision->Size = System::Drawing::Size(145, 63);
			this->btnAgregarRevision->TabIndex = 8;
			this->btnAgregarRevision->Text = L"Agregar";
			this->btnAgregarRevision->UseVisualStyleBackColor = false;
			this->btnAgregarRevision->Click += gcnew System::EventHandler(this, &FormRevisiones::btnAgregarRevision_Click);
			// 
			// btnListadoRevisiones
			// 
			this->btnListadoRevisiones->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoRevisiones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnListadoRevisiones->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnListadoRevisiones->Location = System::Drawing::Point(633, 2);
			this->btnListadoRevisiones->Name = L"btnListadoRevisiones";
			this->btnListadoRevisiones->Size = System::Drawing::Size(140, 63);
			this->btnListadoRevisiones->TabIndex = 9;
			this->btnListadoRevisiones->Text = L"Listado";
			this->btnListadoRevisiones->UseVisualStyleBackColor = false;
			this->btnListadoRevisiones->Click += gcnew System::EventHandler(this, &FormRevisiones::btnListadoRevisiones_Click);
			// 
			// panelRevisiones
			// 
			this->panelRevisiones->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelRevisiones.BackgroundImage")));
			this->panelRevisiones->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelRevisiones->Location = System::Drawing::Point(1, 78);
			this->panelRevisiones->Name = L"panelRevisiones";
			this->panelRevisiones->Size = System::Drawing::Size(784, 442);
			this->panelRevisiones->TabIndex = 12;
			// 
			// FormRevisiones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->panelRevisiones);
			this->Controls->Add(this->btnListadoRevisiones);
			this->Controls->Add(this->btnAgregarRevision);
			this->Controls->Add(this->textRevision);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormRevisiones";
			this->Text = L"FormRevisiones";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelRevisiones->Controls->Count > 0)
				this->panelRevisiones->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelRevisiones->Controls->Add(FormHijo);
			this->panelRevisiones->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void btnAgregarRevision_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarRevision);
	}
	private: System::Void btnListadoRevisiones_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoRevisiones);
	}
};
}
