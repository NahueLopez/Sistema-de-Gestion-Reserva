#pragma once
#include "DB.h"
#include "FormEditarHabitat.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoHabitads
	/// </summary>
	public ref class FormListadoHabitads : public System::Windows::Forms::Form
	{
	public:
		FormListadoHabitads(void)
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
		~FormListadoHabitads()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::DataGridView^ dataListadoHabitat;
	private: System::Windows::Forms::Button^ btnBorrarHabitat;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoHabitads::typeid));
			this->dataListadoHabitat = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarHabitat = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoHabitat))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoHabitat
			// 
			this->dataListadoHabitat->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoHabitat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoHabitat->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataListadoHabitat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoHabitat->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataListadoHabitat->Location = System::Drawing::Point(12, 32);
			this->dataListadoHabitat->Name = L"dataListadoHabitat";
			this->dataListadoHabitat->ReadOnly = true;
			this->dataListadoHabitat->RowHeadersVisible = false;
			this->dataListadoHabitat->RowHeadersWidth = 51;
			this->dataListadoHabitat->RowTemplate->Height = 24;
			this->dataListadoHabitat->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoHabitat->Size = System::Drawing::Size(761, 339);
			this->dataListadoHabitat->TabIndex = 2;
			this->dataListadoHabitat->DoubleClick += gcnew System::EventHandler(this, &FormListadoHabitads::dataListadoHabitat_DoubleClick);
			// 
			// btnBorrarHabitat
			// 
			this->btnBorrarHabitat->BackColor = System::Drawing::Color::Red;
			this->btnBorrarHabitat->Location = System::Drawing::Point(12, 390);
			this->btnBorrarHabitat->Name = L"btnBorrarHabitat";
			this->btnBorrarHabitat->Size = System::Drawing::Size(127, 39);
			this->btnBorrarHabitat->TabIndex = 3;
			this->btnBorrarHabitat->Text = L"Eliminar";
			this->btnBorrarHabitat->UseVisualStyleBackColor = false;
			this->btnBorrarHabitat->Click += gcnew System::EventHandler(this, &FormListadoHabitads::btnBorrarHabitat_Click);
			// 
			// FormListadoHabitads
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarHabitat);
			this->Controls->Add(this->dataListadoHabitat);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoHabitads";
			this->Text = L"FormListadoHabitads";
			this->Load += gcnew System::EventHandler(this, &FormListadoHabitads::FormListadoHabitads_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoHabitat))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoHabitads_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoHabitat->DataSource = this->data->ListadoHabitat();
		this->data->CerrarConexion();
	}

	private: System::Void dataListadoHabitat_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoHabitat->SelectedRows[0]->Cells[0]->Value);
		Login::FormEditarHabitat^ form = gcnew Login::FormEditarHabitat();


		form->txtEditarNombreHabitat->Text = nombre;

		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarHabitat(form->txtEditarNombreHabitat->Text, nombre);
		data->CerrarConexion();
	}
	private: System::Void btnBorrarHabitat_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoHabitat->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarHabitat(nombre);
		data->CerrarConexion();
	}
};
}
