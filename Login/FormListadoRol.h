#pragma once
#include "DB.h"
#include "FormEditarRol.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoRol
	/// </summary>
	public ref class FormListadoRol : public System::Windows::Forms::Form
	{
	public:
		FormListadoRol(void)
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
		~FormListadoRol()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;
		
	private: System::Windows::Forms::DataGridView^ dataListadoRol;
	private: System::Windows::Forms::Button^ btnBorrarRol;

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoRol::typeid));
			this->dataListadoRol = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarRol = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoRol))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoRol
			// 
			this->dataListadoRol->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoRol->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoRol->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataListadoRol->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoRol->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataListadoRol->Location = System::Drawing::Point(12, 39);
			this->dataListadoRol->Name = L"dataListadoRol";
			this->dataListadoRol->ReadOnly = true;
			this->dataListadoRol->RowHeadersVisible = false;
			this->dataListadoRol->RowHeadersWidth = 51;
			this->dataListadoRol->RowTemplate->Height = 24;
			this->dataListadoRol->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoRol->Size = System::Drawing::Size(761, 339);
			this->dataListadoRol->TabIndex = 1;
			this->dataListadoRol->DoubleClick += gcnew System::EventHandler(this, &FormListadoRol::dataListadoRol_DoubleClick);
			// 
			// btnBorrarRol
			// 
			this->btnBorrarRol->BackColor = System::Drawing::Color::Red;
			this->btnBorrarRol->Location = System::Drawing::Point(12, 390);
			this->btnBorrarRol->Name = L"btnBorrarRol";
			this->btnBorrarRol->Size = System::Drawing::Size(127, 39);
			this->btnBorrarRol->TabIndex = 2;
			this->btnBorrarRol->Text = L"Eliminar";
			this->btnBorrarRol->UseVisualStyleBackColor = false;
			this->btnBorrarRol->Click += gcnew System::EventHandler(this, &FormListadoRol::btnBorrarRol_Click);
			// 
			// FormListadoRol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarRol);
			this->Controls->Add(this->dataListadoRol);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoRol";
			this->Text = L"FormListadoRol";
			this->Load += gcnew System::EventHandler(this, &FormListadoRol::FormListadoRol_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoRol))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoRol_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoRol->DataSource = this->data->ListadoRol();
		this->data->CerrarConexion();
	}

	private: System::Void dataListadoRol_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoRol->SelectedRows[0]->Cells[0]->Value);
		Login::FormEditarRol^ form = gcnew Login::FormEditarRol();


		form->txtEditarNombreRol->Text = nombre;
		
		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarRol(form->txtEditarNombreRol->Text, nombre);
		data->CerrarConexion();
	}

	private: System::Void btnBorrarRol_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoRol->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarRol(nombre);
		data->CerrarConexion();
	}
};
}