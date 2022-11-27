#pragma once
#include "DB.h"
#include "FormEditarLicencia.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoLicencias
	/// </summary>
	public ref class FormListadoLicencias : public System::Windows::Forms::Form
	{
	public:
		FormListadoLicencias(void)
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
		~FormListadoLicencias()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;
	private: System::Windows::Forms::DataGridView^ dataListadoLicencias;
	private: System::Windows::Forms::Button^ btnBorrarLicencia;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoLicencias::typeid));
			this->dataListadoLicencias = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarLicencia = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoLicencias))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoLicencias
			// 
			this->dataListadoLicencias->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoLicencias->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoLicencias->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataListadoLicencias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoLicencias->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataListadoLicencias->Location = System::Drawing::Point(12, 32);
			this->dataListadoLicencias->Name = L"dataListadoLicencias";
			this->dataListadoLicencias->ReadOnly = true;
			this->dataListadoLicencias->RowHeadersVisible = false;
			this->dataListadoLicencias->RowHeadersWidth = 51;
			this->dataListadoLicencias->RowTemplate->Height = 24;
			this->dataListadoLicencias->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoLicencias->Size = System::Drawing::Size(761, 340);
			this->dataListadoLicencias->TabIndex = 1;
			this->dataListadoLicencias->DoubleClick += gcnew System::EventHandler(this, &FormListadoLicencias::dataListadoLicencias_DoubleClick);
			// 
			// btnBorrarLicencia
			// 
			this->btnBorrarLicencia->BackColor = System::Drawing::Color::Red;
			this->btnBorrarLicencia->Location = System::Drawing::Point(12, 390);
			this->btnBorrarLicencia->Name = L"btnBorrarLicencia";
			this->btnBorrarLicencia->Size = System::Drawing::Size(127, 39);
			this->btnBorrarLicencia->TabIndex = 2;
			this->btnBorrarLicencia->Text = L"Eliminar";
			this->btnBorrarLicencia->UseVisualStyleBackColor = false;
			this->btnBorrarLicencia->Click += gcnew System::EventHandler(this, &FormListadoLicencias::btnBorrarLicencia_Click);
			// 
			// FormListadoLicencias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarLicencia);
			this->Controls->Add(this->dataListadoLicencias);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoLicencias";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormListadoLicencias";
			this->Load += gcnew System::EventHandler(this, &FormListadoLicencias::FormListadoLicencias_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoLicencias))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FormListadoLicencias_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoLicencias->DataSource = this->data->ListadoLicencias();
		this->data->CerrarConexion();
	}

	private: System::Void dataListadoLicencias_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoLicencias->SelectedRows[0]->Cells[0]->Value);
		String^ descripcion = Convert::ToString(dataListadoLicencias->SelectedRows[0]->Cells[1]->Value);
		String^ inicio = Convert::ToString(dataListadoLicencias->SelectedRows[0]->Cells[2]->Value);
		String^ fin = Convert::ToString(dataListadoLicencias->SelectedRows[0]->Cells[3]->Value);
		Login::FormEditarLicencia^ form = gcnew Login::FormEditarLicencia();


		form->comboUsuario->SelectedValue = nombre;
		form->txtEditarDescripcionLicencia->Text = descripcion;
		form->dateEditarInicioLicencia->Text = inicio;
		form->dateEditarFinLicencia->Text = fin;
		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarLicencia(form->comboUsuario->SelectedValue, form->txtEditarDescripcionLicencia->Text, form->dateEditarInicioLicencia->Text, form->dateEditarFinLicencia->Text,nombre);
		data->CerrarConexion();
	}
	private: System::Void btnBorrarLicencia_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoLicencias->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarLicencia(nombre);
		data->CerrarConexion();
	}
};
}
