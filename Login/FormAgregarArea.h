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
	/// Resumen de FormAgregarArea
	/// </summary>
	public ref class FormAgregarArea : public System::Windows::Forms::Form
	{
	public:
		FormAgregarArea(void)
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
		~FormAgregarArea()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNombreArea;

	private: System::Windows::Forms::Button^ btnGuardarArea;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarArea::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombreArea = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardarArea = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->label1->Size = System::Drawing::Size(78, 36);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Area";
			// 
			// txtNombreArea
			// 
			this->txtNombreArea->Location = System::Drawing::Point(190, 30);
			this->txtNombreArea->Multiline = true;
			this->txtNombreArea->Name = L"txtNombreArea";
			this->txtNombreArea->Size = System::Drawing::Size(248, 35);
			this->txtNombreArea->TabIndex = 10;
			// 
			// btnGuardarArea
			// 
			this->btnGuardarArea->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarArea->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarArea->ForeColor = System::Drawing::Color::White;
			this->btnGuardarArea->Location = System::Drawing::Point(492, 352);
			this->btnGuardarArea->Name = L"btnGuardarArea";
			this->btnGuardarArea->Size = System::Drawing::Size(254, 46);
			this->btnGuardarArea->TabIndex = 11;
			this->btnGuardarArea->Text = L"Guardar";
			this->btnGuardarArea->UseVisualStyleBackColor = false;
			this->btnGuardarArea->Click += gcnew System::EventHandler(this, &FormAgregarArea::btnGuardarArea_Click);
			// 
			// FormAgregarArea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->btnGuardarArea);
			this->Controls->Add(this->txtNombreArea);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarArea";
			this->Text = L"FormAgregarArea";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardarArea_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarArea(this->txtNombreArea->Text);
		this->data->CerrarConexion();
	}
	};
}
