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
	/// Resumen de FormEditarHabitat
	/// </summary>
	public ref class FormEditarHabitat : public System::Windows::Forms::Form
	{
	public:
		FormEditarHabitat(void)
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
		~FormEditarHabitat()
		{
			if (components)
			{
				delete components;
			}
		}
	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ txtEditarNombreHabitat;
	private: System::Windows::Forms::Button^ btnEditarHabitat;
	private: System::Windows::Forms::Button^ Atras;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarHabitat::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtEditarNombreHabitat = (gcnew System::Windows::Forms::TextBox());
			this->btnEditarHabitat = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(37, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombre";
			// 
			// txtEditarNombreHabitat
			// 
			this->txtEditarNombreHabitat->Location = System::Drawing::Point(258, 68);
			this->txtEditarNombreHabitat->Multiline = true;
			this->txtEditarNombreHabitat->Name = L"txtEditarNombreHabitat";
			this->txtEditarNombreHabitat->Size = System::Drawing::Size(248, 35);
			this->txtEditarNombreHabitat->TabIndex = 11;
			// 
			// btnEditarHabitat
			// 
			this->btnEditarHabitat->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnEditarHabitat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditarHabitat->ForeColor = System::Drawing::Color::White;
			this->btnEditarHabitat->Location = System::Drawing::Point(492, 352);
			this->btnEditarHabitat->Name = L"btnEditarHabitat";
			this->btnEditarHabitat->Size = System::Drawing::Size(254, 46);
			this->btnEditarHabitat->TabIndex = 12;
			this->btnEditarHabitat->Text = L"Guardar";
			this->btnEditarHabitat->UseVisualStyleBackColor = false;
			this->btnEditarHabitat->Click += gcnew System::EventHandler(this, &FormEditarHabitat::btnEditarHabitat_Click);
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
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarHabitat::Atras_Click);
			// 
			// FormEditarHabitat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->btnEditarHabitat);
			this->Controls->Add(this->txtEditarNombreHabitat);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarHabitat";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FormEditarHabitat";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEditarHabitat_Click(System::Object^ sender, System::EventArgs^ e) {
		   MessageBox::Show("Se Modifico Con Exito!");
		   this->Close();
	}
	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
