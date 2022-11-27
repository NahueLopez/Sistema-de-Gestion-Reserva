#pragma once
#include "DB.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormAgregarRol
	/// </summary>
	public ref class FormAgregarRol : public System::Windows::Forms::Form
	{
	public:
		FormAgregarRol(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormAgregarRol()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;
	
	private: System::Windows::Forms::Button^ btnGuardarRol;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNombreRol;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarRol::typeid));
			this->btnGuardarRol = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombreRol = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnGuardarRol
			// 
			this->btnGuardarRol->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarRol->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarRol->ForeColor = System::Drawing::Color::White;
			this->btnGuardarRol->Location = System::Drawing::Point(492, 352);
			this->btnGuardarRol->Name = L"btnGuardarRol";
			this->btnGuardarRol->Size = System::Drawing::Size(254, 46);
			this->btnGuardarRol->TabIndex = 1;
			this->btnGuardarRol->Text = L"Guardar";
			this->btnGuardarRol->UseVisualStyleBackColor = false;
			this->btnGuardarRol->Click += gcnew System::EventHandler(this, &FormAgregarRol::btnGuardarRol_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(21, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre";
			// 
			// txtNombreRol
			// 
			this->txtNombreRol->Location = System::Drawing::Point(190, 30);
			this->txtNombreRol->Multiline = true;
			this->txtNombreRol->Name = L"txtNombreRol";
			this->txtNombreRol->Size = System::Drawing::Size(248, 35);
			this->txtNombreRol->TabIndex = 9;
			// 
			// FormAgregarRol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->txtNombreRol);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGuardarRol);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarRol";
			this->Text = L"FormAgregarRol";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardarRol_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarRol(this->txtNombreRol->Text);
		this->data->CerrarConexion();
	}
};
}
