#pragma once
#include "DB.h"
#include "FormEditarComida.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoComidas
	/// </summary>
	public ref class FormListadoComidas : public System::Windows::Forms::Form
	{
	public:
		FormListadoComidas(void)
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
		~FormListadoComidas()
		{
			if (components)
			{
				delete components;
			}
		}

	private:DB^ data;

	private: System::Windows::Forms::DataGridView^ dataListadoComidas;
	private: System::Windows::Forms::Button^ btnBorrarComida;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoComidas::typeid));
			this->dataListadoComidas = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarComida = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoComidas))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoComidas
			// 
			this->dataListadoComidas->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoComidas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoComidas->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataListadoComidas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoComidas->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataListadoComidas->Location = System::Drawing::Point(12, 32);
			this->dataListadoComidas->Name = L"dataListadoComidas";
			this->dataListadoComidas->ReadOnly = true;
			this->dataListadoComidas->RowHeadersVisible = false;
			this->dataListadoComidas->RowHeadersWidth = 51;
			this->dataListadoComidas->RowTemplate->Height = 24;
			this->dataListadoComidas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoComidas->Size = System::Drawing::Size(761, 339);
			this->dataListadoComidas->TabIndex = 2;
			this->dataListadoComidas->DoubleClick += gcnew System::EventHandler(this, &FormListadoComidas::dataListadoComidas_DoubleClick);
			// 
			// btnBorrarComida
			// 
			this->btnBorrarComida->BackColor = System::Drawing::Color::Red;
			this->btnBorrarComida->Location = System::Drawing::Point(12, 390);
			this->btnBorrarComida->Name = L"btnBorrarComida";
			this->btnBorrarComida->Size = System::Drawing::Size(127, 39);
			this->btnBorrarComida->TabIndex = 3;
			this->btnBorrarComida->Text = L"Eliminar";
			this->btnBorrarComida->UseVisualStyleBackColor = false;
			this->btnBorrarComida->Click += gcnew System::EventHandler(this, &FormListadoComidas::btnBorrarComida_Click);
			// 
			// FormListadoComidas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarComida);
			this->Controls->Add(this->dataListadoComidas);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoComidas";
			this->Text = L"FormListadoComidas";
			this->Load += gcnew System::EventHandler(this, &FormListadoComidas::FormListadoComidas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoComidas))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoComidas_Load(System::Object^ sender, System::EventArgs^ e) {
			this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoComidas->DataSource = this->data->ListadoComida();
		this->data->CerrarConexion();
	}
	private: System::Void dataListadoComidas_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoComidas->SelectedRows[0]->Cells[0]->Value);
		Login::FormEditarComida^ form = gcnew Login::FormEditarComida();


		form->txtNombreComida->Text = nombre;

		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarComida(form->txtNombreComida->Text, nombre);
		data->CerrarConexion();
	}


	private: System::Void btnBorrarComida_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoComidas->SelectedRows[0]->Cells[0]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarComida(nombre);
		data->CerrarConexion();
	}
};
}
