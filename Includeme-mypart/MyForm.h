#pragma once
//guys haru maile mero part gareko ma nabujini tham explain gareko chu hai hernu ni ramrari
//to link one form to another remember hai aayush
#include "MyForm13.h"
//teacher ma redirect garxa
#include "MyForm14.h"

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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox14;

	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::GhostWhite;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->textBox17);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Location = System::Drawing::Point(-2, 285);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(487, 312);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Panel1_Paint);
			// 
			// button2
			// 
			this->button2->AutoEllipsis = true;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(211, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 58);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Log in";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(158, 150);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(311, 32);
			this->textBox16->TabIndex = 7;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox16_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Location = System::Drawing::Point(3, 150);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(82, 25);
			this->textBox11->TabIndex = 2;
			this->textBox11->Text = L"Name:-";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->Location = System::Drawing::Point(157, 112);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(311, 32);
			this->textBox15->TabIndex = 6;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox15_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Location = System::Drawing::Point(6, 188);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(119, 25);
			this->textBox12->TabIndex = 3;
			this->textBox12->Text = L"Password:-";
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(0, 16);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(173, 37);
			this->textBox17->TabIndex = 5;
			this->textBox17->Text = L"Sign in";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Location = System::Drawing::Point(3, 112);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(40, 25);
			this->textBox14->TabIndex = 5;
			this->textBox14->Text = L"Id:-";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(157, 188);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(314, 32);
			this->textBox13->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::GhostWhite;
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Location = System::Drawing::Point(485, 285);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(488, 309);
			this->panel2->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->AutoEllipsis = true;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(360, 239);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 58);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Teacher";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button1
			// 
			this->button1->AutoEllipsis = true;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(62, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 58);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Student ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(165, 152);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(311, 32);
			this->textBox10->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Location = System::Drawing::Point(164, 114);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(311, 32);
			this->textBox9->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(0, 114);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(40, 25);
			this->textBox8->TabIndex = 5;
			this->textBox8->Text = L"Id:-";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(164, 190);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(314, 32);
			this->textBox7->TabIndex = 4;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(3, 190);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(119, 25);
			this->textBox6->TabIndex = 3;
			this->textBox6->Text = L"Password:-";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(0, 152);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(82, 25);
			this->textBox5->TabIndex = 2;
			this->textBox5->Text = L"Name:-";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(22, 45);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(224, 25);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"Register here!!";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Location = System::Drawing::Point(7, 4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 35);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"New user\?";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::SlateGray;
			this->textBox1->Location = System::Drawing::Point(100, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 25);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"#include<me>";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::SlateGray;
			this->textBox2->Location = System::Drawing::Point(100, 1);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(303, 25);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"KATHMANDU UNIVERSITY";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 93);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(973, 594);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"#include<me>";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TextBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}



		 // from this line we register thye data into the database



private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ id = textBox9->Text;
		String^ name = textBox10->Text;
		String^ password = textBox7->Text;
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into register_data values('" + id + "','" + name + "','" + password + "')", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("student info saved");
	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);


	}
}

		 //yesbata chai teacher ko save hunxa



		 private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
			 try
			 {
				 String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp1";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 String^ id = textBox9->Text;
				 String^ name = textBox10->Text;
				 String^ password = textBox7->Text;
				 MySqlCommand^ cmd = gcnew MySqlCommand("insert into register_data_teacher values('" + id + "','" + name + "','" + password + "')", con);
				 MySqlDataReader^ dr;
				 con->Open();
				 dr = cmd->ExecuteReader();
				 MessageBox::Show("teacher info saved");
			 }
			 catch (Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);


			 }
		 }




		 //aba yo bata chai sign in click garda page change huney!!!





private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {

	
	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ id = textBox15->Text;
		String^ name = textBox16->Text;
		String^ password = textBox13->Text;
		//to check the data base values
		//yesma select garda chai yaad garnu ki harek database name pachi and rakhe vanye jancha
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT `id`, `name`, `password` FROM `register_data` WHERE   id= '" + this->textBox15->Text + "'AND name= '" + this->textBox16->Text + "' AND password= '" + this->textBox13->Text + "';", con);

		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		//initilization of count to log in using if else
		int count_student = 0;
		//dr->Read() ley database vitra read garxa ani yedi user input sanga milyo vaney count badhcha
		while (dr->Read())
		{
			count_student += 1;

		}
		if (count_student == 1)
		{//yesley chai teacher ko dekhauxa
			this->Hide();
			MyForm14^ f14 = gcnew MyForm14();
			f14->ShowDialog();

		}
	
		else
		{
			
			//paila student ko database jancha ani vayena vaney chai teacher ko ma janxa ani kunai ma vayena vaney chai error dinxa

			try

			{
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp1";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				String^ id = textBox15->Text;
				String^ name = textBox16->Text;
				String^ password = textBox13->Text;
				//to check the data base values
				//yesma select garda chai yaad garnu ki harek database name pachi and rakhe vanye jancha
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT `id`, `name`, `password` FROM `register_data_teacher` WHERE   id= '" + this->textBox15->Text + "'AND name= '" + this->textBox16->Text + "' AND password= '" + this->textBox13->Text + "';", con);

				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				//initilization of count to log in using if else
				int count_teacher = 0;
				//dr->Read() ley database vitra read garxa ani yedi user input sanga milyo vaney count badhcha
				while (dr->Read())
				{
					count_teacher += 1;

				}
				if (count_teacher == 1)
				{
					this->Hide();
					MyForm13^ f13 = gcnew MyForm13();
					f13->ShowDialog();

				}

				else
				{
					MessageBox::Show("wrong input...try again");

				}

			}
			catch (Exception ^ ex)
			{
				MessageBox::Show(ex->Message);


			}


		}
		
	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);


	}

	

	






	
	
}

};
}
