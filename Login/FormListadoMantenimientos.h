#pragma once
#include "DB.h"
#include "FormEditarMantenimiento.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoMantenimientos
	/// </summary>
	public ref class FormListadoMantenimientos : public System::Windows::Forms::Form
	{
	public:
		FormListadoMantenimientos(void)
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
		~FormListadoMantenimientos()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::DataGridView^ dataListadoMantenimientos;
	private: System::Windows::Forms::Button^ btnBorrarMantenimiento;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoMantenimientos::typeid));
			this->dataListadoMantenimientos = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarMantenimiento = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoMantenimientos))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoMantenimientos
			// 
			this->dataListadoMantenimientos->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoMantenimientos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoMantenimientos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataListadoMantenimientos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoMantenimientos->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataListadoMantenimientos->Location = System::Drawing::Point(12, 32);
			this->dataListadoMantenimientos->Name = L"dataListadoMantenimientos";
			this->dataListadoMantenimientos->ReadOnly = true;
			this->dataListadoMantenimientos->RowHeadersVisible = false;
			this->dataListadoMantenimientos->RowHeadersWidth = 51;
			this->dataListadoMantenimientos->RowTemplate->Height = 24;
			this->dataListadoMantenimientos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoMantenimientos->Size = System::Drawing::Size(761, 342);
			this->dataListadoMantenimientos->TabIndex = 2;
			this->dataListadoMantenimientos->DoubleClick += gcnew System::EventHandler(this, &FormListadoMantenimientos::dataListadoMantenimientos_DoubleClick);
			// 
			// btnBorrarMantenimiento
			// 
			this->btnBorrarMantenimiento->BackColor = System::Drawing::Color::Red;
			this->btnBorrarMantenimiento->Location = System::Drawing::Point(12, 390);
			this->btnBorrarMantenimiento->Name = L"btnBorrarMantenimiento";
			this->btnBorrarMantenimiento->Size = System::Drawing::Size(127, 39);
			this->btnBorrarMantenimiento->TabIndex = 3;
			this->btnBorrarMantenimiento->Text = L"Eliminar";
			this->btnBorrarMantenimiento->UseVisualStyleBackColor = false;
			this->btnBorrarMantenimiento->Click += gcnew System::EventHandler(this, &FormListadoMantenimientos::btnBorrarMantenimiento_Click);
			// 
			// FormListadoMantenimientos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarMantenimiento);
			this->Controls->Add(this->dataListadoMantenimientos);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoMantenimientos";
			this->Text = L"FormListadoMantenimientos";
			this->Load += gcnew System::EventHandler(this, &FormListadoMantenimientos::FormListadoMantenimientos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoMantenimientos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoMantenimientos_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoMantenimientos->DataSource = this->data->ListadoMantenimiento();
		this->data->CerrarConexion();
	}
	private: System::Void dataListadoMantenimientos_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ descripcion = Convert::ToString(dataListadoMantenimientos->SelectedRows[0]->Cells[0]->Value);
		String^ habitat = Convert::ToString(dataListadoMantenimientos->SelectedRows[0]->Cells[1]->Value);
		String^ area = Convert::ToString(dataListadoMantenimientos->SelectedRows[0]->Cells[2]->Value);
		String^ encargado = Convert::ToString(dataListadoMantenimientos->SelectedRows[0]->Cells[3]->Value);
		Login::FormEditarMantenimiento^ form = gcnew Login::FormEditarMantenimiento();


		form->txtEditarNombreDescripcion->Text = descripcion;
		form->comboHabitat->SelectedValue = habitat;
		form->comboArea->SelectedValue = area;
		form->comboUsuario->SelectedValue = encargado;
		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarMantenimiento(form->txtEditarNombreDescripcion->Text, form->comboHabitat->SelectedValue, form->comboArea->SelectedValue, form->comboUsuario->SelectedValue, descripcion);
		data->CerrarConexion();
	}
	private: System::Void btnBorrarMantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ descripcion = Convert::ToString(dataListadoMantenimientos->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarMantenimiento(descripcion);
		data->CerrarConexion();
	}
};
}
