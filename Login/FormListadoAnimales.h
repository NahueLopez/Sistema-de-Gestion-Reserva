#pragma once
#include "DB.h"
#include "FormEditarAnimal.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoAnimales
	/// </summary>
	public ref class FormListadoAnimales : public System::Windows::Forms::Form
	{
	public:
		FormListadoAnimales(void)
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
		~FormListadoAnimales()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::DataGridView^ dataListadoAnimales;
	private: System::Windows::Forms::Button^ btnBorrarAnimal;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoAnimales::typeid));
			this->dataListadoAnimales = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarAnimal = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoAnimales))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoAnimales
			// 
			this->dataListadoAnimales->AllowUserToOrderColumns = true;
			this->dataListadoAnimales->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoAnimales->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoAnimales->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataListadoAnimales->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoAnimales->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataListadoAnimales->Location = System::Drawing::Point(12, 35);
			this->dataListadoAnimales->Name = L"dataListadoAnimales";
			this->dataListadoAnimales->RowHeadersVisible = false;
			this->dataListadoAnimales->RowHeadersWidth = 51;
			this->dataListadoAnimales->RowTemplate->Height = 24;
			this->dataListadoAnimales->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoAnimales->Size = System::Drawing::Size(761, 349);
			this->dataListadoAnimales->TabIndex = 2;
			this->dataListadoAnimales->DoubleClick += gcnew System::EventHandler(this, &FormListadoAnimales::dataListadoAnimales_DoubleClick);
			// 
			// btnBorrarAnimal
			// 
			this->btnBorrarAnimal->BackColor = System::Drawing::Color::Red;
			this->btnBorrarAnimal->Location = System::Drawing::Point(12, 390);
			this->btnBorrarAnimal->Name = L"btnBorrarAnimal";
			this->btnBorrarAnimal->Size = System::Drawing::Size(127, 39);
			this->btnBorrarAnimal->TabIndex = 3;
			this->btnBorrarAnimal->Text = L"Eliminar";
			this->btnBorrarAnimal->UseVisualStyleBackColor = false;
			this->btnBorrarAnimal->Click += gcnew System::EventHandler(this, &FormListadoAnimales::btnBorrarAnimal_Click);
			// 
			// FormListadoAnimales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarAnimal);
			this->Controls->Add(this->dataListadoAnimales);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoAnimales";
			this->Text = L"FormListadoAnimales";
			this->Load += gcnew System::EventHandler(this, &FormListadoAnimales::FormListadoAnimales_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoAnimales))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoAnimales_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoAnimales->DataSource = this->data->ListadoAnimales();
		this->data->CerrarConexion();
	}

	private: System::Void btnBorrarAnimal_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ animal = Convert::ToString(dataListadoAnimales->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarAnimal(animal);
		data->CerrarConexion();
	}

	private: System::Void dataListadoAnimales_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ animal = Convert::ToString(dataListadoAnimales->SelectedRows[0]->Cells[0]->Value);
		String^ habitat = Convert::ToString(dataListadoAnimales->SelectedRows[0]->Cells[1]->Value);
		String^ especie = Convert::ToString(dataListadoAnimales->SelectedRows[0]->Cells[2]->Value);
		String^ estado = Convert::ToString(dataListadoAnimales->SelectedRows[0]->Cells[3]->Value);
		Login::FormEditarAnimal^ form = gcnew Login::FormEditarAnimal();

		
		form->txtEditarNombreAnimal->Text = animal;
		form->comboHabitat->SelectedValue = habitat;
		form->comboEspecie->SelectedValue = especie;
		form->txtEditarEstadoAnimal->Text = estado;
		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarAnimal(form->txtEditarNombreAnimal->Text, form->comboHabitat->SelectedValue, form->comboEspecie->SelectedValue, form->txtEditarEstadoAnimal->Text, animal);
		data->CerrarConexion();
	}
};
}
