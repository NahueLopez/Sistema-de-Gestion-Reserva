#pragma once
#include "DB.h"
#include "FormEditarUsuario.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormListadoUsuarios
	/// </summary>
	public ref class FormListadoUsuarios : public System::Windows::Forms::Form
	{
	public:
		FormListadoUsuarios(void)
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
		~FormListadoUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}

	

	private:DB^ data;

	private: System::Windows::Forms::Button^ btnBorrarUsuario;
	private: System::Windows::Forms::DataGridView^ dataListadoUsuarios;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListadoUsuarios::typeid));
			this->dataListadoUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->btnBorrarUsuario = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoUsuarios))->BeginInit();
			this->SuspendLayout();
			// 
			// dataListadoUsuarios
			// 
			this->dataListadoUsuarios->AllowUserToOrderColumns = true;
			this->dataListadoUsuarios->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataListadoUsuarios->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataListadoUsuarios->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataListadoUsuarios->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->dataListadoUsuarios->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataListadoUsuarios->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataListadoUsuarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataListadoUsuarios->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataListadoUsuarios->Location = System::Drawing::Point(12, 32);
			this->dataListadoUsuarios->Name = L"dataListadoUsuarios";
			this->dataListadoUsuarios->RowHeadersVisible = false;
			this->dataListadoUsuarios->RowHeadersWidth = 51;
			this->dataListadoUsuarios->RowTemplate->Height = 24;
			this->dataListadoUsuarios->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListadoUsuarios->Size = System::Drawing::Size(761, 345);
			this->dataListadoUsuarios->TabIndex = 0;
			this->dataListadoUsuarios->DoubleClick += gcnew System::EventHandler(this, &FormListadoUsuarios::dataListadoUsuarios_DoubleClick);
			// 
			// btnBorrarUsuario
			// 
			this->btnBorrarUsuario->BackColor = System::Drawing::Color::Red;
			this->btnBorrarUsuario->Location = System::Drawing::Point(12, 390);
			this->btnBorrarUsuario->Name = L"btnBorrarUsuario";
			this->btnBorrarUsuario->Size = System::Drawing::Size(127, 39);
			this->btnBorrarUsuario->TabIndex = 1;
			this->btnBorrarUsuario->Text = L"Eliminar";
			this->btnBorrarUsuario->UseVisualStyleBackColor = false;
			this->btnBorrarUsuario->Click += gcnew System::EventHandler(this, &FormListadoUsuarios::btnBorrarUsuario_Click_1);
			// 
			// FormListadoUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 446);
			this->Controls->Add(this->btnBorrarUsuario);
			this->Controls->Add(this->dataListadoUsuarios);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormListadoUsuarios";
			this->Text = L"FormListadoUsuarios";
			this->Load += gcnew System::EventHandler(this, &FormListadoUsuarios::FormListadoUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataListadoUsuarios))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormListadoUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}
	
	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->dataListadoUsuarios->DataSource = this->data->getData();
		this->data->CerrarConexion();
	}

	private: System::Void dataListadoUsuarios_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataListadoUsuarios->SelectedRows[0]->Cells[0]->Value);
		String^ apellido = Convert::ToString(dataListadoUsuarios->SelectedRows[0]->Cells[1]->Value);
		String^ dni = Convert::ToString(dataListadoUsuarios->SelectedRows[0]->Cells[2]->Value);
		//String^ nacimiento = Convert::ToString(dataListadoUsuarios->SelectedRows[0]->Cells[3]->Value);
		//String^ direccion = Convert::ToString(dataListadoUsuarios->SelectedRows[0]->Cells[4]->Value);
		String^ matricula = Convert::ToString(dataListadoUsuarios->SelectedRows[0]->Cells[3]->Value);
		Object^ area = Convert::ToString(dataListadoUsuarios->SelectedRows[0]->Cells[4]->Value);
		Login::FormEditarUsuario^ form = gcnew Login::FormEditarUsuario();

		
		form->txtEditarNombreUsuario->Text = nombre;
		form->txtEditarApellidoUsuario->Text = apellido;
		form->txtEditarDniUsuario->Text = dni;
		//form->txtEditarNacimientoUsuario->Text = nacimiento;
		//form->txtEditarDireccionUsuario->Text = direccion;
		form->txtEditarMatriculaUsuario->Text = matricula;
		form->comboArea->SelectedValue = area;
		form->ShowDialog();
		
		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->ModificarUsuario(form->txtEditarNombreUsuario->Text, form->txtEditarApellidoUsuario->Text, form->txtEditarDniUsuario->Text, form->txtEditarMatriculaUsuario->Text, form->comboArea->SelectedValue, dni);
		data->CerrarConexion();
	}

	private: System::Void btnBorrarUsuario_Click_1(System::Object^ sender, System::EventArgs^ e) {

		String^ dni = Convert::ToString(dataListadoUsuarios->SelectedRows[0]->Cells[2]->Value);
		
		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarUsuario(dni);
		data->CerrarConexion();
	}
};
}
