#pragma once

namespace Includeme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//to connect to database
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{
		
	public:
		MyForm13(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm13::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(160, -2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(723, 37);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"Welcome to teacher login page";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-3, 274);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(331, 329);
			this->panel1->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(53, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 37);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Attendance";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(37, 221);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(258, 81);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Check Attendance";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(37, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 83);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Do Attendance";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(328, 274);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(303, 329);
			this->panel2->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(77, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 81);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Browse";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm13::Button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(28, 46);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(258, 169);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(18, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(226, 37);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Assignment";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->richTextBox1);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Location = System::Drawing::Point(631, 274);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(344, 329);
			this->panel3->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(15, 3);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 37);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"Date";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(130, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(174, 39);
			this->textBox5->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(46, 87);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(258, 157);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(46, 251);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(258, 57);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Publish";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm13::Button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(24, 46);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 37);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Notice";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(973, 594);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm13";
			this->Text = L"Teacher Login";
			this->Load += gcnew System::EventHandler(this, &MyForm13::MyForm13_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm13_Load(System::Object^ sender, System::EventArgs^ e) {
	}
			 // yo bata chai photo halney hai 
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {

/*	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp1";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd;
		String^ imgLoc = "";
		OpenFileDialog^ dlg = gcnew OpenFileDialog();
		dlg->Title = "Select notice picture";
		if (dlg->ShowDialog == DialogResult.Equals)
		{
			imgLoc = dlg->FileName->ToString();
			
		}


	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);


	}*/
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// yo bata chai teacher ko notice aaucha
	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp1";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
	
		String^ Date = textBox5->Text;
		String^ Notice = richTextBox1->Text;
		
	
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into notice_teacher values('" + Date + "','" + Notice + "')", con);
		MySqlDataReader^ dr;
		if (Date == "")
		{
			MessageBox::Show("please enter date");

		}

		else
		{
			con->Open();

			dr = cmd->ExecuteReader();
			textBox5->Text = "";

			richTextBox1->Text = "";
			MessageBox::Show("notice saved");
		
		}
		
		
		
	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);


	}
}
};
}
