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
	/// Resumen de FormAgregarHabitad
	/// </summary>
	public ref class FormAgregarHabitad : public System::Windows::Forms::Form
	{
	public:
		FormAgregarHabitad(void)
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
		~FormAgregarHabitad()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNombreHabitat;
	private: System::Windows::Forms::Button^ btnGuardarHabitat;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAgregarHabitad::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombreHabitat = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardarHabitat = (gcnew System::Windows::Forms::Button());
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
			this->label1->Size = System::Drawing::Size(120, 36);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre";
			// 
			// txtNombreHabitat
			// 
			this->txtNombreHabitat->Location = System::Drawing::Point(190, 30);
			this->txtNombreHabitat->Multiline = true;
			this->txtNombreHabitat->Name = L"txtNombreHabitat";
			this->txtNombreHabitat->Size = System::Drawing::Size(248, 35);
			this->txtNombreHabitat->TabIndex = 10;
			// 
			// btnGuardarHabitat
			// 
			this->btnGuardarHabitat->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarHabitat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarHabitat->ForeColor = System::Drawing::Color::White;
			this->btnGuardarHabitat->Location = System::Drawing::Point(492, 352);
			this->btnGuardarHabitat->Name = L"btnGuardarHabitat";
			this->btnGuardarHabitat->Size = System::Drawing::Size(254, 46);
			this->btnGuardarHabitat->TabIndex = 11;
			this->btnGuardarHabitat->Text = L"Guardar";
			this->btnGuardarHabitat->UseVisualStyleBackColor = false;
			this->btnGuardarHabitat->Click += gcnew System::EventHandler(this, &FormAgregarHabitad::btnGuardarHabitat_Click);
			// 
			// FormAgregarHabitad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->btnGuardarHabitat);
			this->Controls->Add(this->txtNombreHabitat);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAgregarHabitad";
			this->Text = L"FormAgregarHabitad";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardarHabitat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->InsertarHabitat(this->txtNombreHabitat->Text);
		this->data->CerrarConexion();
	}
	};
}
