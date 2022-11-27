#pragma once
#include "DB.h"
#include "FormEditarHorario.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoHorarioAnimales
	/// </summary>
	public ref class FormListadoHorarioAnimales : public System::Windows::Forms::Form
	{
	public:
		FormListadoHorarioAnimales(void)
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
		~FormListadoHorarioAnimales()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::DataGridView^ dataListadoHorarios;
	private: System::Windows::Forms::Button^ btnBorrarHorario;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoHorarioAnimales::typeid));
			this->dataListadoHorarios = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarHorario = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoHorarios))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoHorarios
			// 
			this->dataListadoHorarios->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoHorarios->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoHorarios->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataListadoHorarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoHorarios->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataListadoHorarios->Location = System::Drawing::Point(12, 39);
			this->dataListadoHorarios->Name = L"dataListadoHorarios";
			this->dataListadoHorarios->ReadOnly = true;
			this->dataListadoHorarios->RowHeadersVisible = false;
			this->dataListadoHorarios->RowHeadersWidth = 51;
			this->dataListadoHorarios->RowTemplate->Height = 24;
			this->dataListadoHorarios->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoHorarios->Size = System::Drawing::Size(761, 339);
			this->dataListadoHorarios->TabIndex = 1;
			this->dataListadoHorarios->DoubleClick += gcnew System::EventHandler(this, &FormListadoHorarioAnimales::dataListadoHorarios_DoubleClick);
			// 
			// btnBorrarHorario
			// 
			this->btnBorrarHorario->BackColor = System::Drawing::Color::Red;
			this->btnBorrarHorario->Location = System::Drawing::Point(12, 390);
			this->btnBorrarHorario->Name = L"btnBorrarHorario";
			this->btnBorrarHorario->Size = System::Drawing::Size(127, 39);
			this->btnBorrarHorario->TabIndex = 2;
			this->btnBorrarHorario->Text = L"Eliminar";
			this->btnBorrarHorario->UseVisualStyleBackColor = false;
			this->btnBorrarHorario->Click += gcnew System::EventHandler(this, &FormListadoHorarioAnimales::btnBorrarHorario_Click);
			// 
			// FormListadoHorarioAnimales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarHorario);
			this->Controls->Add(this->dataListadoHorarios);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoHorarioAnimales";
			this->Text = L"FormListadoHorarioAnimales";
			this->Load += gcnew System::EventHandler(this, &FormListadoHorarioAnimales::FormListadoHorarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoHorarios))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FormListadoHorarios_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoHorarios->DataSource = this->data->ListadoHorariosComida();
		this->data->CerrarConexion();
	}

	private: System::Void dataListadoHorarios_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ animal = Convert::ToString(dataListadoHorarios->SelectedRows[0]->Cells[0]->Value);
		String^ usuario = Convert::ToString(dataListadoHorarios->SelectedRows[0]->Cells[1]->Value);
		String^ horario = Convert::ToString(dataListadoHorarios->SelectedRows[0]->Cells[2]->Value);
		String^ comida = Convert::ToString(dataListadoHorarios->SelectedRows[0]->Cells[3]->Value);
		Login::FormEditarHorario^ form = gcnew Login::FormEditarHorario();


		form->comboAnimal->SelectedValue = animal;
		form->comboUsuario->SelectedValue = usuario;
		form->txtEditarHorarioComida->Text = horario;
		form->comboComida->SelectedValue = comida;
		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarHorariosComida(form->comboAnimal->SelectedValue, form->comboUsuario->SelectedValue, form->txtEditarHorarioComida->Text, form->comboComida->SelectedValue, animal);
		data->CerrarConexion();
	}
	private: System::Void btnBorrarHorario_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ animal = Convert::ToString(dataListadoHorarios->SelectedRows[0]->Cells[0]->Value);


		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarHorariosComida(animal);
		data->CerrarConexion();
	}
};
}
