#pragma once

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormEditarArea
	/// </summary>
	public ref class FormEditarArea : public System::Windows::Forms::Form
	{
	public:
		FormEditarArea(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormEditarArea()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ txtEditarNombreArea;
	private: System::Windows::Forms::Button^ btnEditarArea;
	private: System::Windows::Forms::Button^ Atras;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarArea::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtEditarNombreArea = (gcnew System::Windows::Forms::TextBox());
			this->btnEditarArea = (gcnew System::Windows::Forms::Button());
			this->Atras = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(21, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Area";
			// 
			// txtEditarNombreArea
			// 
			this->txtEditarNombreArea->Location = System::Drawing::Point(190, 30);
			this->txtEditarNombreArea->Multiline = true;
			this->txtEditarNombreArea->Name = L"txtEditarNombreArea";
			this->txtEditarNombreArea->Size = System::Drawing::Size(248, 35);
			this->txtEditarNombreArea->TabIndex = 11;
			// 
			// btnEditarArea
			// 
			this->btnEditarArea->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnEditarArea->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditarArea->ForeColor = System::Drawing::Color::White;
			this->btnEditarArea->Location = System::Drawing::Point(492, 352);
			this->btnEditarArea->Name = L"btnEditarArea";
			this->btnEditarArea->Size = System::Drawing::Size(254, 46);
			this->btnEditarArea->TabIndex = 12;
			this->btnEditarArea->Text = L"Guardar";
			this->btnEditarArea->UseVisualStyleBackColor = false;
			this->btnEditarArea->Click += gcnew System::EventHandler(this, &FormEditarArea::btnEditarArea_Click);
			// 
			// Atras
			// 
			this->Atras->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Atras->ForeColor = System::Drawing::Color::White;
			this->Atras->Location = System::Drawing::Point(40, 352);
			this->Atras->Name = L"Atras";
			this->Atras->Size = System::Drawing::Size(254, 44);
			this->Atras->TabIndex = 23;
			this->Atras->Text = L"Atras";
			this->Atras->UseVisualStyleBackColor = false;
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarArea::Atras_Click);
			// 
			// FormEditarArea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->btnEditarArea);
			this->Controls->Add(this->txtEditarNombreArea);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarArea";
			this->Text = L"FormEditarArea";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnEditarArea_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}
};
}
