#pragma once
#include <iostream>
#include <ctime>

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
	private: System::Windows::Forms::Button^ getBtn;
	private: System::Windows::Forms::Button^ resetBtn;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->getBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// getBtn
			// 
			this->getBtn->AutoSize = true;
			this->getBtn->BackColor = System::Drawing::Color::LavenderBlush;
			this->getBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->getBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->getBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->getBtn->Location = System::Drawing::Point(15, 19);
			this->getBtn->Name = L"getBtn";
			this->getBtn->Size = System::Drawing::Size(96, 27);
			this->getBtn->TabIndex = 0;
			this->getBtn->Text = L"Generate";
			this->getBtn->UseVisualStyleBackColor = false;
			this->getBtn->Click += gcnew System::EventHandler(this, &Form1::getBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->BackColor = System::Drawing::Color::LavenderBlush;
			this->resetBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->resetBtn->ForeColor = System::Drawing::Color::Maroon;
			this->resetBtn->Location = System::Drawing::Point(383, 19);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(75, 27);
			this->resetBtn->TabIndex = 1;
			this->resetBtn->Text = L"Reset";
			this->resetBtn->UseVisualStyleBackColor = false;
			this->resetBtn->Click += gcnew System::EventHandler(this, &Form1::resetBtn_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(16, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label2->Location = System::Drawing::Point(16, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label3->Location = System::Drawing::Point(16, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label4->Location = System::Drawing::Point(400, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 29);
			this->label4->TabIndex = 5;
			this->label4->Text = L"label4";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label5->Location = System::Drawing::Point(400, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"label5";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label6->Location = System::Drawing::Point(400, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 29);
			this->label6->TabIndex = 7;
			this->label6->Text = L"label6";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(474, 248);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 251);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->getBtn);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Lotto Number Generator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		srand((int)time(0));
		Clear();
	}
	private: System::Void Clear() {
		this->label1->Text = "";
		this->label2->Text = "";
		this->label3->Text = "";
		this->label4->Text = "";
		this->label5->Text = "";
		this->label6->Text = "";
		this->getBtn->Enabled = true;
		this->resetBtn->Enabled = false;
	}
	private: System::Void getBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int i, j, k, nums[50]{};
		for (i = 1; i < 50; i++) nums[i] = i;
		for (i = 1; i < 50; i++) {
			j = (rand() % 49 + 1);
			k = nums[i]; nums[i] = nums[j]; nums[j] = k;
			this->label1->Text = Convert::ToString(nums[1]);
			this->label2->Text = Convert::ToString(nums[2]);
			this->label3->Text = Convert::ToString(nums[3]);
			this->label4->Text = Convert::ToString(nums[4]);
			this->label5->Text = Convert::ToString(nums[5]);
			this->label6->Text = Convert::ToString(nums[6]);
		}
		this->getBtn->Enabled = false;
		this->resetBtn->Enabled = true;
	}
private: System::Void resetBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Clear();
}
};
}
