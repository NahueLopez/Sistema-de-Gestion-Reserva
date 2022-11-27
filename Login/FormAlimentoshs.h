#pragma once
#include "FormAgregarAlimentos.h"
#include "FormListadoHorarioAnimales.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormAlimentoshs
	/// </summary>
	public ref class FormAlimentoshs : public System::Windows::Forms::Form
	{
	public:
		FormAlimentoshs(void)
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
		~FormAlimentoshs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textAlimentos;
	private: System::Windows::Forms::Button^ btnAgregarHorario;
	private: System::Windows::Forms::Button^ btnListadoHorarios;


	private: System::Windows::Forms::Panel^ panelAlimentos;



















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAlimentoshs::typeid));
			this->textAlimentos = (gcnew System::Windows::Forms::Label());
			this->btnAgregarHorario = (gcnew System::Windows::Forms::Button());
			this->btnListadoHorarios = (gcnew System::Windows::Forms::Button());
			this->panelAlimentos = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// textAlimentos
			// 
			this->textAlimentos->AutoSize = true;
			this->textAlimentos->BackColor = System::Drawing::Color::Transparent;
			this->textAlimentos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textAlimentos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textAlimentos->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->textAlimentos->Location = System::Drawing::Point(5, 9);
			this->textAlimentos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textAlimentos->Name = L"textAlimentos";
			this->textAlimentos->Size = System::Drawing::Size(458, 42);
			this->textAlimentos->TabIndex = 0;
			this->textAlimentos->Text = L"Horarios de Alimentacion";
			this->textAlimentos->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAgregarHorario
			// 
			this->btnAgregarHorario->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnAgregarHorario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarHorario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAgregarHorario->Location = System::Drawing::Point(482, 2);
			this->btnAgregarHorario->Name = L"btnAgregarHorario";
			this->btnAgregarHorario->Size = System::Drawing::Size(145, 63);
			this->btnAgregarHorario->TabIndex = 1;
			this->btnAgregarHorario->Text = L"Agregar";
			this->btnAgregarHorario->UseVisualStyleBackColor = false;
			this->btnAgregarHorario->Click += gcnew System::EventHandler(this, &FormAlimentoshs::btnAgregarHorario_Click);
			// 
			// btnListadoHorarios
			// 
			this->btnListadoHorarios->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnListadoHorarios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnListadoHorarios->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnListadoHorarios->Location = System::Drawing::Point(633, 2);
			this->btnListadoHorarios->Name = L"btnListadoHorarios";
			this->btnListadoHorarios->Size = System::Drawing::Size(140, 63);
			this->btnListadoHorarios->TabIndex = 2;
			this->btnListadoHorarios->Text = L"Listado";
			this->btnListadoHorarios->UseVisualStyleBackColor = false;
			this->btnListadoHorarios->Click += gcnew System::EventHandler(this, &FormAlimentoshs::btnListadoHorarios_Click);
			// 
			// panelAlimentos
			// 
			this->panelAlimentos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelAlimentos.BackgroundImage")));
			this->panelAlimentos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelAlimentos->Location = System::Drawing::Point(0, 78);
			this->panelAlimentos->Name = L"panelAlimentos";
			this->panelAlimentos->Size = System::Drawing::Size(785, 444);
			this->panelAlimentos->TabIndex = 5;
			// 
			// FormAlimentoshs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->panelAlimentos);
			this->Controls->Add(this->btnListadoHorarios);
			this->Controls->Add(this->btnAgregarHorario);
			this->Controls->Add(this->textAlimentos);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormAlimentoshs";
			this->Text = L"FormAlimentoshs";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelAlimentos->Controls->Count > 0)
				this->panelAlimentos->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelAlimentos->Controls->Add(FormHijo);
			this->panelAlimentos->Tag = FormHijo;
			FormHijo->Show();
		}



	private: System::Void btnAgregarHorario_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAgregarAlimentos);
	}
	private: System::Void btnListadoHorarios_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormListadoHorarioAnimales);
	}
};
}
