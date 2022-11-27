#pragma once
#include "DB.h"
#include "FormEditarRevision.h"


namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoRevisiones
	/// </summary>
	public ref class FormListadoRevisiones : public System::Windows::Forms::Form
	{
	public:
		FormListadoRevisiones(void)
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
		~FormListadoRevisiones()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::DataGridView^ dataListadoRevisiones;
	private: System::Windows::Forms::Button^ btnBorrarRevision;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoRevisiones::typeid));
			this->dataListadoRevisiones = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarRevision = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoRevisiones))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoRevisiones
			// 
			this->dataListadoRevisiones->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoRevisiones->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoRevisiones->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataListadoRevisiones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoRevisiones->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataListadoRevisiones->Location = System::Drawing::Point(12, 32);
			this->dataListadoRevisiones->Name = L"dataListadoRevisiones";
			this->dataListadoRevisiones->ReadOnly = true;
			this->dataListadoRevisiones->RowHeadersVisible = false;
			this->dataListadoRevisiones->RowHeadersWidth = 51;
			this->dataListadoRevisiones->RowTemplate->Height = 24;
			this->dataListadoRevisiones->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoRevisiones->Size = System::Drawing::Size(761, 352);
			this->dataListadoRevisiones->TabIndex = 2;
			this->dataListadoRevisiones->DoubleClick += gcnew System::EventHandler(this, &FormListadoRevisiones::dataListadoRevisiones_DoubleClick);
			// 
			// btnBorrarRevision
			// 
			this->btnBorrarRevision->BackColor = System::Drawing::Color::Red;
			this->btnBorrarRevision->Location = System::Drawing::Point(12, 390);
			this->btnBorrarRevision->Name = L"btnBorrarRevision";
			this->btnBorrarRevision->Size = System::Drawing::Size(127, 39);
			this->btnBorrarRevision->TabIndex = 3;
			this->btnBorrarRevision->Text = L"Eliminar";
			this->btnBorrarRevision->UseVisualStyleBackColor = false;
			this->btnBorrarRevision->Click += gcnew System::EventHandler(this, &FormListadoRevisiones::btnBorrarRevision_Click);
			// 
			// FormListadoRevisiones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarRevision);
			this->Controls->Add(this->dataListadoRevisiones);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoRevisiones";
			this->Text = L"FormListadoRevisiones";
			this->Load += gcnew System::EventHandler(this, &FormListadoRevisiones::FormListadoRevisiones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoRevisiones))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoRevisiones_Load(System::Object^ sender, System::EventArgs^ e) {
			this->Consulta();
		}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoRevisiones->DataSource = this->data->ListadoRevision();
		this->data->CerrarConexion();
	}
	private: System::Void dataListadoRevisiones_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ animal = Convert::ToString(dataListadoRevisiones->SelectedRows[0]->Cells[0]->Value);
		String^ motivo = Convert::ToString(dataListadoRevisiones->SelectedRows[0]->Cells[1]->Value);
		String^ usuario = Convert::ToString(dataListadoRevisiones->SelectedRows[0]->Cells[2]->Value);
		Login::FormEditarRevision^ form = gcnew Login::FormEditarRevision();


		form->comboAnimal->SelectedValue = animal;
		form->txtEditarNombreMotivo->Text = motivo;
		form->comboUsuario->SelectedValue = usuario;

		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarRevision(form->comboAnimal->SelectedValue, form->txtEditarNombreMotivo->Text, form->comboUsuario->SelectedValue, animal);
		data->CerrarConexion();
	}
	private: System::Void btnBorrarRevision_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ animal = Convert::ToString(dataListadoRevisiones->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarRevision(animal);
		data->CerrarConexion();

	}
};
}
