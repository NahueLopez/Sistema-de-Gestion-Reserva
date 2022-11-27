#pragma once
#include "DB.h"
#include "FormEditarArea.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoArea
	/// </summary>
	public ref class FormListadoArea : public System::Windows::Forms::Form
	{
	public:
		FormListadoArea(void)
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
		~FormListadoArea()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::DataGridView^ dataListadoArea;
	private: System::Windows::Forms::Button^ btnBorrarArea;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoArea::typeid));
			this->dataListadoArea = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarArea = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoArea))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoArea
			// 
			this->dataListadoArea->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoArea->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoArea->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataListadoArea->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoArea->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataListadoArea->Location = System::Drawing::Point(12, 32);
			this->dataListadoArea->Name = L"dataListadoArea";
			this->dataListadoArea->ReadOnly = true;
			this->dataListadoArea->RowHeadersVisible = false;
			this->dataListadoArea->RowHeadersWidth = 51;
			this->dataListadoArea->RowTemplate->Height = 24;
			this->dataListadoArea->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoArea->Size = System::Drawing::Size(761, 339);
			this->dataListadoArea->TabIndex = 2;
			this->dataListadoArea->DoubleClick += gcnew System::EventHandler(this, &FormListadoArea::dataListadoArea_DoubleClick);
			// 
			// btnBorrarArea
			// 
			this->btnBorrarArea->BackColor = System::Drawing::Color::Red;
			this->btnBorrarArea->Location = System::Drawing::Point(12, 390);
			this->btnBorrarArea->Name = L"btnBorrarArea";
			this->btnBorrarArea->Size = System::Drawing::Size(127, 39);
			this->btnBorrarArea->TabIndex = 3;
			this->btnBorrarArea->Text = L"Eliminar";
			this->btnBorrarArea->UseVisualStyleBackColor = false;
			this->btnBorrarArea->Click += gcnew System::EventHandler(this, &FormListadoArea::btnBorrarArea_Click);
			// 
			// FormListadoArea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarArea);
			this->Controls->Add(this->dataListadoArea);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoArea";
			this->Text = L"FormListadoArea";
			this->Load += gcnew System::EventHandler(this, &FormListadoArea::FormListadoArea_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoArea))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoArea_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoArea->DataSource = this->data->ListadoArea();
		this->data->CerrarConexion();
	}

	private: System::Void dataListadoArea_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoArea->SelectedRows[0]->Cells[0]->Value);
		Login::FormEditarArea^ form = gcnew Login::FormEditarArea();


		form->txtEditarNombreArea->Text = nombre;

		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarArea(form->txtEditarNombreArea->Text, nombre);
		data->CerrarConexion();
	}

	private: System::Void btnBorrarArea_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoArea->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarArea(nombre);
		data->CerrarConexion();
	}
};
}
