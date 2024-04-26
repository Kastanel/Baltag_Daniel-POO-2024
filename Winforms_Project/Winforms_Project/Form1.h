#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ output;
		   double data;
		   char operation;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ clear;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// output
			// 
			this->output->Dock = System::Windows::Forms::DockStyle::Top;
			this->output->Location = System::Drawing::Point(0, 0);
			this->output->Margin = System::Windows::Forms::Padding(10);
			this->output->Multiline = true;
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(299, 50);
			this->output->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(0, 145);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(76, 145);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(152, 145);
			this->button3->Margin = System::Windows::Forms::Padding(5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(0, 104);
			this->button4->Margin = System::Windows::Forms::Padding(5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(76, 104);
			this->button5->Margin = System::Windows::Forms::Padding(5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 35);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(152, 104);
			this->button6->Margin = System::Windows::Forms::Padding(5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 35);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Silver;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(0, 63);
			this->button7->Margin = System::Windows::Forms::Padding(5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 35);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(76, 63);
			this->button8->Margin = System::Windows::Forms::Padding(5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 35);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(152, 63);
			this->button9->Margin = System::Windows::Forms::Padding(5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 35);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::Silver;
			this->zero->FlatAppearance->BorderSize = 0;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero->Location = System::Drawing::Point(76, 186);
			this->zero->Margin = System::Windows::Forms::Padding(5);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(70, 35);
			this->zero->TabIndex = 10;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &Form1::zero_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::Gray;
			this->divide->FlatAppearance->BorderSize = 0;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide->ForeColor = System::Drawing::SystemColors::Control;
			this->divide->Location = System::Drawing::Point(228, 63);
			this->divide->Margin = System::Windows::Forms::Padding(5);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(70, 35);
			this->divide->TabIndex = 11;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &Form1::divide_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::Gray;
			this->multiply->FlatAppearance->BorderSize = 0;
			this->multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiply->ForeColor = System::Drawing::SystemColors::Control;
			this->multiply->Location = System::Drawing::Point(228, 104);
			this->multiply->Margin = System::Windows::Forms::Padding(5);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(70, 35);
			this->multiply->TabIndex = 12;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &Form1::multiply_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Gray;
			this->minus->FlatAppearance->BorderSize = 0;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->ForeColor = System::Drawing::SystemColors::Control;
			this->minus->Location = System::Drawing::Point(228, 145);
			this->minus->Margin = System::Windows::Forms::Padding(5);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(70, 35);
			this->minus->TabIndex = 13;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Gray;
			this->plus->FlatAppearance->BorderSize = 0;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->ForeColor = System::Drawing::SystemColors::Control;
			this->plus->Location = System::Drawing::Point(228, 186);
			this->plus->Margin = System::Windows::Forms::Padding(5);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(70, 35);
			this->plus->TabIndex = 14;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::Gray;
			this->equal->FlatAppearance->BorderSize = 0;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equal->ForeColor = System::Drawing::SystemColors::Control;
			this->equal->Location = System::Drawing::Point(152, 186);
			this->equal->Margin = System::Windows::Forms::Padding(5);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(70, 35);
			this->equal->TabIndex = 15;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &Form1::equal_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::RosyBrown;
			this->clear->FlatAppearance->BorderSize = 0;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear->Location = System::Drawing::Point(0, 186);
			this->clear->Margin = System::Windows::Forms::Padding(5);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(70, 35);
			this->clear->TabIndex = 16;
			this->clear->Text = L"CLEAR";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(299, 221);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->output);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "0";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text += "9";
	}

	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Text = "";
		data = double::NaN;
		operation = '_';
	}
	private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(output->Text)) {
			double number;
			if (double::TryParse(output->Text, number)) {
				data = number;
				output->Text = "";
				operation = '/';
			}
			else {
				MessageBox::Show("Introdu un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua impartirea", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(output->Text)) {
			double number;
			if (double::TryParse(output->Text, number)) {
				data = number;
				output->Text = "";
				operation = '*';
			}
			else {
				MessageBox::Show("Introdu un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua inmultirea", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(output->Text)) {
			double number;
			if (double::TryParse(output->Text, number)) {
				data = number;
				output->Text = "";
				operation = '-';
			}
			else {
				MessageBox::Show("Introdu un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua scaderea", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(output->Text)) {
			double number;
			if (double::TryParse(output->Text, number)) {
				data = number;
				output->Text = "";
				operation = '+';
			}
			else {
				MessageBox::Show("Introdu un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua adunarea", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(output->Text)) {
			double number;
			if (double::TryParse(output->Text, number)) {
				double result = 0;

				switch (operation)
				{
				case '+':
					result = data + number;
					break;
				case '-':
					result = data - number;
					break;
				case '*':
					result = data * number;
					break;
				case '/':
					result = data / static_cast<double>(number);
				default:
					MessageBox::Show("Operatie nedefinita!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				output->Text = result.ToString();
				data = result;
			}
			else {
				MessageBox::Show("Introdu un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua egalitatea", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	};
}
