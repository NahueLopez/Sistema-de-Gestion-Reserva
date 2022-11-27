#pragma once
#include "DB.h"
#include "FormEditarEspecie.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoEspecies
	/// </summary>
	public ref class FormListadoEspecies : public System::Windows::Forms::Form
	{
	public:
		FormListadoEspecies(void)
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
		~FormListadoEspecies()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::DataGridView^ dataListadoEspecies;
	private: System::Windows::Forms::Button^ btnBorrarEspecie;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoEspecies::typeid));
			this->dataListadoEspecies = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarEspecie = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoEspecies))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoEspecies
			// 
			this->dataListadoEspecies->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoEspecies->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoEspecies->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataListadoEspecies->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoEspecies->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataListadoEspecies->Location = System::Drawing::Point(12, 32);
			this->dataListadoEspecies->Name = L"dataListadoEspecies";
			this->dataListadoEspecies->ReadOnly = true;
			this->dataListadoEspecies->RowHeadersVisible = false;
			this->dataListadoEspecies->RowHeadersWidth = 51;
			this->dataListadoEspecies->RowTemplate->Height = 24;
			this->dataListadoEspecies->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoEspecies->Size = System::Drawing::Size(761, 339);
			this->dataListadoEspecies->TabIndex = 2;
			this->dataListadoEspecies->DoubleClick += gcnew System::EventHandler(this, &FormListadoEspecies::dataListadoEspecies_DoubleClick);
			// 
			// btnBorrarEspecie
			// 
			this->btnBorrarEspecie->BackColor = System::Drawing::Color::Red;
			this->btnBorrarEspecie->Location = System::Drawing::Point(12, 390);
			this->btnBorrarEspecie->Name = L"btnBorrarEspecie";
			this->btnBorrarEspecie->Size = System::Drawing::Size(127, 39);
			this->btnBorrarEspecie->TabIndex = 3;
			this->btnBorrarEspecie->Text = L"Eliminar";
			this->btnBorrarEspecie->UseVisualStyleBackColor = false;
			this->btnBorrarEspecie->Click += gcnew System::EventHandler(this, &FormListadoEspecies::btnBorrarEspecie_Click);
			// 
			// FormListadoEspecies
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarEspecie);
			this->Controls->Add(this->dataListadoEspecies);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoEspecies";
			this->Text = L"FormListadoEspecies";
			this->Load += gcnew System::EventHandler(this, &FormListadoEspecies::FormListadoEspecies_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoEspecies))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoEspecies_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoEspecies->DataSource = this->data->ListadoEspecies();
		this->data->CerrarConexion();
	}
	private: System::Void dataListadoEspecies_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoEspecies->SelectedRows[0]->Cells[0]->Value);
		Login::FormEditarEspecie^ form = gcnew Login::FormEditarEspecie();


		form->txtEditarNombreEspecie->Text = nombre;

		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarEspecie(form->txtEditarNombreEspecie->Text, nombre);
		data->CerrarConexion();
	}
	private: System::Void btnBorrarEspecie_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoEspecies->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarEspecie(nombre);
		data->CerrarConexion();
	}
};
}
