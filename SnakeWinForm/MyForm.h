#pragma once
#include"MyForm1.h"
namespace SnakeWinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ START;
	private: System::Windows::Forms::Button^ SETTINGS;
	private: System::Windows::Forms::Button^ OUT;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->START = (gcnew System::Windows::Forms::Button());
			this->SETTINGS = (gcnew System::Windows::Forms::Button());
			this->OUT = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->START, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->SETTINGS, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->OUT, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(454, 533);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// START
			// 
			this->START->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->START->BackColor = System::Drawing::SystemColors::Info;
			this->START->ForeColor = System::Drawing::SystemColors::ControlText;
			this->START->Location = System::Drawing::Point(3, 3);
			this->START->Name = L"START";
			this->START->Size = System::Drawing::Size(448, 171);
			this->START->TabIndex = 0;
			this->START->Text = L"START";
			this->START->UseVisualStyleBackColor = false;
			this->START->Click += gcnew System::EventHandler(this, &MyForm::START_Click);
			// 
			// SETTINGS
			// 
			this->SETTINGS->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SETTINGS->BackColor = System::Drawing::SystemColors::Info;
			this->SETTINGS->Location = System::Drawing::Point(3, 180);
			this->SETTINGS->Name = L"SETTINGS";
			this->SETTINGS->Size = System::Drawing::Size(448, 171);
			this->SETTINGS->TabIndex = 1;
			this->SETTINGS->Text = L"SETTINGS";
			this->SETTINGS->UseVisualStyleBackColor = false;
			this->SETTINGS->Click += gcnew System::EventHandler(this, &MyForm::SETTINGS_Click);
			// 
			// OUT
			// 
			this->OUT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OUT->BackColor = System::Drawing::SystemColors::Info;
			this->OUT->Location = System::Drawing::Point(3, 357);
			this->OUT->Name = L"OUT";
			this->OUT->Size = System::Drawing::Size(448, 173);
			this->OUT->TabIndex = 2;
			this->OUT->Text = L"OUT";
			this->OUT->UseVisualStyleBackColor = false;
			this->OUT->Click += gcnew System::EventHandler(this, &MyForm::OUT_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(478, 549);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(500, 600);
			this->MinimumSize = System::Drawing::Size(500, 600);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void START_Click(System::Object^ sender, System::EventArgs^ e) {
		//SnakeWinForm1::MyForm1^ GameForm = gcnew SnakeWinForm1::MyForm1;
		//GameForm->ShowDialog();
	}
	private: System::Void SETTINGS_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void OUT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
