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
	/// Resumen de FormEditarEspecie
	/// </summary>
	public ref class FormEditarEspecie : public System::Windows::Forms::Form
	{
	public:
		FormEditarEspecie(void)
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
		~FormEditarEspecie()
		{
			if (components)
			{
				delete components;
			}
		}
	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ txtEditarNombreEspecie;
	private: System::Windows::Forms::Button^ btnEditarEspecie;
	private: System::Windows::Forms::Button^ Atras;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarEspecie::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtEditarNombreEspecie = (gcnew System::Windows::Forms::TextBox());
			this->btnEditarEspecie = (gcnew System::Windows::Forms::Button());
			this->Atras = (gcnew System::Windows::Forms::Button());
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
			this->label1->Size = System::Drawing::Size(121, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Especie";
			// 
			// txtEditarNombreEspecie
			// 
			this->txtEditarNombreEspecie->Location = System::Drawing::Point(190, 30);
			this->txtEditarNombreEspecie->Multiline = true;
			this->txtEditarNombreEspecie->Name = L"txtEditarNombreEspecie";
			this->txtEditarNombreEspecie->Size = System::Drawing::Size(248, 35);
			this->txtEditarNombreEspecie->TabIndex = 11;
			// 
			// btnEditarEspecie
			// 
			this->btnEditarEspecie->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnEditarEspecie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditarEspecie->ForeColor = System::Drawing::Color::White;
			this->btnEditarEspecie->Location = System::Drawing::Point(492, 352);
			this->btnEditarEspecie->Name = L"btnEditarEspecie";
			this->btnEditarEspecie->Size = System::Drawing::Size(254, 46);
			this->btnEditarEspecie->TabIndex = 12;
			this->btnEditarEspecie->Text = L"Guardar";
			this->btnEditarEspecie->UseVisualStyleBackColor = false;
			this->btnEditarEspecie->Click += gcnew System::EventHandler(this, &FormEditarEspecie::btnEditarEspecie_Click);
			// 
			// Atras
			// 
			this->Atras->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Atras->ForeColor = System::Drawing::Color::White;
			this->Atras->Location = System::Drawing::Point(40, 352);
			this->Atras->Name = L"Atras";
			this->Atras->Size = System::Drawing::Size(254, 44);
			this->Atras->TabIndex = 24;
			this->Atras->Text = L"Atras";
			this->Atras->UseVisualStyleBackColor = false;
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarEspecie::Atras_Click);
			// 
			// FormEditarEspecie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->btnEditarEspecie);
			this->Controls->Add(this->txtEditarNombreEspecie);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarEspecie";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FormEditarEspecie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btnEditarEspecie_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}
};
}
