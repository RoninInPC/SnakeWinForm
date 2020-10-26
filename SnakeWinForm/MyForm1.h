#pragma once
#include"shake.hpp"
void MyPoint::ShowPoint(Graphics^ graphics, Color color, int r) {
	SolidBrush^ pen = gcnew SolidBrush(color);
	graphics->FillEllipse(pen, x*r, y*r, r, r);
}
void Snake::ShowSnake(Graphics^ graphics, int r) {
	this->Before.ShowPoint(graphics, Color::FromArgb(255, 128, 0), r);
	for (int i = 0; i < this->Size; i++) {
		this->Body[i].ShowPoint(graphics, Color::Red, r);
	}
}
void Box::ShowBox(Graphics^ graphics, int Height, int Width) {
	int r = Height / SIZEX;
	Pen^ pen1 = gcnew Pen(Color::Black);
	graphics->DrawRectangle(pen1, 0, 0, Height / SIZEX * SIZEX -1, Width / SIZEY * SIZEY -1);
	this->GetSnake().ShowSnake(graphics, r);
}
void Game::ShowGame(Graphics^ graphics, PictureBox^ pictureBox1) {
	int r = pictureBox1->Height / SIZEX;
	this->box.ShowBox(graphics, pictureBox1->Height,pictureBox1->Width);
	this->Apple.ShowPoint(graphics, Color::Green, r);
}
Game game;
namespace SnakeWinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		Graphics^ graphics;
		Bitmap^ bitmap;
		Pen^ pen;
		Color^ color;





	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ PAUSE;
	private: System::Windows::Forms::Button^ RESTART;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->PAUSE = (gcnew System::Windows::Forms::Button());
			this->RESTART = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::OnTick);
			// 
			// PAUSE
			// 
			this->PAUSE->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PAUSE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PAUSE.BackgroundImage")));
			this->PAUSE->Font = (gcnew System::Drawing::Font(L"Broadway", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PAUSE->Location = System::Drawing::Point(703, 461);
			this->PAUSE->Name = L"PAUSE";
			this->PAUSE->Size = System::Drawing::Size(72, 210);
			this->PAUSE->TabIndex = 3;
			this->PAUSE->Text = L"PAUSE";
			this->PAUSE->UseVisualStyleBackColor = false;
			// 
			// RESTART
			// 
			this->RESTART->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RESTART->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RESTART.BackgroundImage")));
			this->RESTART->Font = (gcnew System::Drawing::Font(L"Broadway", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RESTART->Location = System::Drawing::Point(438, 677);
			this->RESTART->Name = L"RESTART";
			this->RESTART->Size = System::Drawing::Size(259, 69);
			this->RESTART->TabIndex = 2;
			this->RESTART->Text = L"RESTART";
			this->RESTART->UseVisualStyleBackColor = false;
			this->RESTART->Click += gcnew System::EventHandler(this, &MyForm1::RESTART_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->pictureBox2->Location = System::Drawing::Point(703, 677);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(72, 69);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->Location = System::Drawing::Point(20, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(660, 660);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoScroll = true;
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel1.BackgroundImage")));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				90)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->RESTART, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->PAUSE, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(778, 749);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::tableLayoutPanel1_Paint);
			// 
			// MyForm1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(778, 749);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(800, 800);
			this->MinimumSize = System::Drawing::Size(800, 800);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"JOJOSnake";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::OnKeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OnTick(System::Object^ sender, System::EventArgs^ e) {
		if (game.GInfo != END) {
			game.ShowGame(graphics, this->pictureBox1);
		}
		int difX;
		int difY;
		if (game.MoInfo == ZERO) {
			difX = 0;
			difY = 0;
		}
		if (game.MoInfo == LEFT) {
			difX = -1;
			difY = 0;
		}
		if (game.MoInfo == RIGHT) {
			difX = 1;
			difY = 0;
		}
		if (game.MoInfo == UP) {
			difX = 0;
			difY = -1;
		}
		if (game.MoInfo == DOWN) {
			difX = 0;
			difY = 1;
		}
		MyPoint New;
		New.x = game.box.GetSnake().GetBody()[game.box.GetSnake().GetSize() - 1].x + difX;
		New.y = game.box.GetSnake().GetBody()[game.box.GetSnake().GetSize() - 1].y + difY;
		if (game.GInfo != END) {
			if (New.x == game.Apple.x && New.y == game.Apple.y) {
				Snake snake1 = game.box.GetSnake();
				snake1.SnakeGrow(game.Apple);
				game.box.SetSnake(snake1);
				game.NewApple();
			}
			else {
				Snake snake2 = game.box.GetSnake();
				snake2.SnakeMove(New);
				game.box.SetSnake(snake2);
				if (game.IfGameEnd()) {
					this->timer1->Enabled = false;
					game.GInfo = END;
				}
			}
		}
	}
	private: System::Void OnKeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {	
		if (e->KeyCode == Keys::Up || e->KeyCode==Keys::W) {
			if (game.MoInfo != DOWN) {
				game.MoInfo = UP;
			}
		}
		if (e->KeyCode == Keys::Down || e->KeyCode == Keys::S) {
			if (game.MoInfo != UP) {
				game.MoInfo = DOWN;
			}
		}
		if (e->KeyCode == Keys::Left || e->KeyCode == Keys::A) {
			if (game.MoInfo != RIGHT) {
				game.MoInfo = LEFT;
			}
		}
		if (e->KeyCode == Keys::Right || e->KeyCode == Keys::D) {
			if (game.MoInfo != LEFT) {
				game.MoInfo = RIGHT;
			}
		}
	}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	graphics = this->pictureBox1->CreateGraphics();
	Game gam1;
	game = gam1;
	game.NewApple();
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void RESTART_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
