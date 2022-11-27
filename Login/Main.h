#pragma once


using namespace std;

#include "FormRol.h"
#include "FormUsuarios.h"
#include "FormLicencias.h"
#include "FormAreas.h"
#include "FormHabitads.h"
#include "FormMantenimientos.h"
#include "FormEspecies.h"
#include "FormAnimales.h"
#include "FormRevisiones.h"
#include "FormComidas.h"
#include "FormAlimentoshs.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelLateral;
	private: System::Windows::Forms::Panel^ panelContenedor;
	private: System::Windows::Forms::Button^ btnHorarios;

	private: System::Windows::Forms::Button^ btnComida;

	private: System::Windows::Forms::Button^ btnRevision;

	private: System::Windows::Forms::Button^ btnAnimales;

	private: System::Windows::Forms::Button^ btnEspecies;

	private: System::Windows::Forms::Button^ btnMantenimiento;

	private: System::Windows::Forms::Button^ btnHabitad;

	private: System::Windows::Forms::Button^ btnArea;

	private: System::Windows::Forms::Button^ btnLicencias;


	private: System::Windows::Forms::Button^ btnRol;
	private: System::Windows::Forms::Button^ btnUsuario;
	private: System::Windows::Forms::Panel^ margen;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->panelLateral = (gcnew System::Windows::Forms::Panel());
			this->btnHorarios = (gcnew System::Windows::Forms::Button());
			this->btnComida = (gcnew System::Windows::Forms::Button());
			this->btnRevision = (gcnew System::Windows::Forms::Button());
			this->btnAnimales = (gcnew System::Windows::Forms::Button());
			this->btnEspecies = (gcnew System::Windows::Forms::Button());
			this->btnMantenimiento = (gcnew System::Windows::Forms::Button());
			this->btnHabitad = (gcnew System::Windows::Forms::Button());
			this->btnArea = (gcnew System::Windows::Forms::Button());
			this->btnLicencias = (gcnew System::Windows::Forms::Button());
			this->btnRol = (gcnew System::Windows::Forms::Button());
			this->btnUsuario = (gcnew System::Windows::Forms::Button());
			this->margen = (gcnew System::Windows::Forms::Panel());
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->panelLateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLateral
			// 
			this->panelLateral->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panelLateral->Controls->Add(this->btnHorarios);
			this->panelLateral->Controls->Add(this->btnComida);
			this->panelLateral->Controls->Add(this->btnRevision);
			this->panelLateral->Controls->Add(this->btnAnimales);
			this->panelLateral->Controls->Add(this->btnEspecies);
			this->panelLateral->Controls->Add(this->btnMantenimiento);
			this->panelLateral->Controls->Add(this->btnHabitad);
			this->panelLateral->Controls->Add(this->btnArea);
			this->panelLateral->Controls->Add(this->btnLicencias);
			this->panelLateral->Controls->Add(this->btnRol);
			this->panelLateral->Controls->Add(this->btnUsuario);
			this->panelLateral->Controls->Add(this->margen);
			this->panelLateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLateral->Location = System::Drawing::Point(0, 0);
			this->panelLateral->Margin = System::Windows::Forms::Padding(4);
			this->panelLateral->Name = L"panelLateral";
			this->panelLateral->Size = System::Drawing::Size(267, 522);
			this->panelLateral->TabIndex = 0;
			// 
			// btnHorarios
			// 
			this->btnHorarios->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHorarios->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnHorarios->Location = System::Drawing::Point(0, 489);
			this->btnHorarios->Margin = System::Windows::Forms::Padding(4);
			this->btnHorarios->Name = L"btnHorarios";
			this->btnHorarios->Size = System::Drawing::Size(267, 28);
			this->btnHorarios->TabIndex = 11;
			this->btnHorarios->Text = L"Alimentacion hs.";
			this->btnHorarios->UseVisualStyleBackColor = true;
			this->btnHorarios->Click += gcnew System::EventHandler(this, &Main::btnHorarios_Click);
			// 
			// btnComida
			// 
			this->btnComida->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnComida->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnComida->Location = System::Drawing::Point(0, 461);
			this->btnComida->Margin = System::Windows::Forms::Padding(4);
			this->btnComida->Name = L"btnComida";
			this->btnComida->Size = System::Drawing::Size(267, 28);
			this->btnComida->TabIndex = 10;
			this->btnComida->Text = L"Comida";
			this->btnComida->UseVisualStyleBackColor = true;
			this->btnComida->Click += gcnew System::EventHandler(this, &Main::btnComida_Click);
			// 
			// btnRevision
			// 
			this->btnRevision->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRevision->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRevision->Location = System::Drawing::Point(0, 433);
			this->btnRevision->Margin = System::Windows::Forms::Padding(4);
			this->btnRevision->Name = L"btnRevision";
			this->btnRevision->Size = System::Drawing::Size(267, 28);
			this->btnRevision->TabIndex = 9;
			this->btnRevision->Text = L"Revision";
			this->btnRevision->UseVisualStyleBackColor = true;
			this->btnRevision->Click += gcnew System::EventHandler(this, &Main::btnRevision_Click);
			// 
			// btnAnimales
			// 
			this->btnAnimales->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAnimales->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAnimales->Location = System::Drawing::Point(0, 405);
			this->btnAnimales->Margin = System::Windows::Forms::Padding(4);
			this->btnAnimales->Name = L"btnAnimales";
			this->btnAnimales->Size = System::Drawing::Size(267, 28);
			this->btnAnimales->TabIndex = 8;
			this->btnAnimales->Text = L"Animales";
			this->btnAnimales->UseVisualStyleBackColor = true;
			this->btnAnimales->Click += gcnew System::EventHandler(this, &Main::btnAnimales_Click);
			// 
			// btnEspecies
			// 
			this->btnEspecies->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEspecies->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEspecies->Location = System::Drawing::Point(0, 377);
			this->btnEspecies->Margin = System::Windows::Forms::Padding(4);
			this->btnEspecies->Name = L"btnEspecies";
			this->btnEspecies->Size = System::Drawing::Size(267, 28);
			this->btnEspecies->TabIndex = 7;
			this->btnEspecies->Text = L"Especies";
			this->btnEspecies->UseVisualStyleBackColor = true;
			this->btnEspecies->Click += gcnew System::EventHandler(this, &Main::btnEspecies_Click);
			// 
			// btnMantenimiento
			// 
			this->btnMantenimiento->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMantenimiento->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMantenimiento->Location = System::Drawing::Point(0, 349);
			this->btnMantenimiento->Margin = System::Windows::Forms::Padding(4);
			this->btnMantenimiento->Name = L"btnMantenimiento";
			this->btnMantenimiento->Size = System::Drawing::Size(267, 28);
			this->btnMantenimiento->TabIndex = 6;
			this->btnMantenimiento->Text = L"Mantenimiento";
			this->btnMantenimiento->UseVisualStyleBackColor = true;
			this->btnMantenimiento->Click += gcnew System::EventHandler(this, &Main::btnMantenimiento_Click);
			// 
			// btnHabitad
			// 
			this->btnHabitad->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHabitad->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnHabitad->Location = System::Drawing::Point(0, 321);
			this->btnHabitad->Margin = System::Windows::Forms::Padding(4);
			this->btnHabitad->Name = L"btnHabitad";
			this->btnHabitad->Size = System::Drawing::Size(267, 28);
			this->btnHabitad->TabIndex = 5;
			this->btnHabitad->Text = L"Habitat";
			this->btnHabitad->UseVisualStyleBackColor = true;
			this->btnHabitad->Click += gcnew System::EventHandler(this, &Main::btnHabitad_Click);
			// 
			// btnArea
			// 
			this->btnArea->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnArea->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnArea->Location = System::Drawing::Point(0, 293);
			this->btnArea->Margin = System::Windows::Forms::Padding(4);
			this->btnArea->Name = L"btnArea";
			this->btnArea->Size = System::Drawing::Size(267, 28);
			this->btnArea->TabIndex = 4;
			this->btnArea->Text = L"Area";
			this->btnArea->UseVisualStyleBackColor = true;
			this->btnArea->Click += gcnew System::EventHandler(this, &Main::btnArea_Click);
			// 
			// btnLicencias
			// 
			this->btnLicencias->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLicencias->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLicencias->Location = System::Drawing::Point(0, 265);
			this->btnLicencias->Margin = System::Windows::Forms::Padding(4);
			this->btnLicencias->Name = L"btnLicencias";
			this->btnLicencias->Size = System::Drawing::Size(267, 28);
			this->btnLicencias->TabIndex = 3;
			this->btnLicencias->Text = L"Licencias";
			this->btnLicencias->UseVisualStyleBackColor = true;
			this->btnLicencias->Click += gcnew System::EventHandler(this, &Main::btnLicencias_Click);
			// 
			// btnRol
			// 
			this->btnRol->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRol->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRol->Location = System::Drawing::Point(0, 237);
			this->btnRol->Margin = System::Windows::Forms::Padding(4);
			this->btnRol->Name = L"btnRol";
			this->btnRol->Size = System::Drawing::Size(267, 28);
			this->btnRol->TabIndex = 2;
			this->btnRol->Text = L"Rol";
			this->btnRol->UseVisualStyleBackColor = true;
			this->btnRol->Click += gcnew System::EventHandler(this, &Main::btnRol_Click);
			// 
			// btnUsuario
			// 
			this->btnUsuario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUsuario->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnUsuario->Location = System::Drawing::Point(0, 209);
			this->btnUsuario->Margin = System::Windows::Forms::Padding(4);
			this->btnUsuario->Name = L"btnUsuario";
			this->btnUsuario->Size = System::Drawing::Size(267, 28);
			this->btnUsuario->TabIndex = 1;
			this->btnUsuario->Text = L"Usuario";
			this->btnUsuario->UseVisualStyleBackColor = true;
			this->btnUsuario->Click += gcnew System::EventHandler(this, &Main::btnUsuario_Click);
			// 
			// margen
			// 
			this->margen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"margen.BackgroundImage")));
			this->margen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->margen->Location = System::Drawing::Point(0, 0);
			this->margen->Margin = System::Windows::Forms::Padding(4);
			this->margen->Name = L"margen";
			this->margen->Size = System::Drawing::Size(267, 209);
			this->margen->TabIndex = 0;
			// 
			// panelContenedor
			// 
			this->panelContenedor->BackColor = System::Drawing::Color::SeaGreen;
			this->panelContenedor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelContenedor.BackgroundImage")));
			this->panelContenedor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelContenedor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelContenedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panelContenedor->Location = System::Drawing::Point(267, 0);
			this->panelContenedor->Margin = System::Windows::Forms::Padding(4);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(785, 522);
			this->panelContenedor->TabIndex = 1;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1052, 522);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->panelLateral);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->panelLateral->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		template< class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panelContenedor->Controls->Count > 0)
				this->panelContenedor->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelContenedor->Controls->Add(FormHijo);
			this->panelContenedor->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void btnUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormUsuarios);
	}

	private: System::Void btnRol_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormRol);
	}
	private: System::Void btnLicencias_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormLicencias);
	}
	private: System::Void btnArea_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAreas);
	}
	private: System::Void btnHabitad_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormHabitads);
	}
	private: System::Void btnMantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormMantenimientos);
	}
	private: System::Void btnEspecies_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormEspecies);
	}
	private: System::Void btnAnimales_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAnimales);
	}
	private: System::Void btnRevision_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormRevisiones);
	}
	private: System::Void btnComida_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormComidas);
	}
	private: System::Void btnHorarios_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Login::FormAlimentoshs);
	}

};
}
