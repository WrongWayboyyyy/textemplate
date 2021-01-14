#pragma once
#include <string>

namespace MyOwnApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MyForm1(int rightAnswers) {
			InitializeComponent();
			GreatLabel->Visible = 0;
			BadLabel->Visible = 0;
			RightAnswersLabel->Visible = 1;
			std::string expected = "0";
			if (rightAnswers < 10) {
				expected[0] += rightAnswers;
			}
			else
				expected = "10";
			String^ str = (gcnew String(expected.c_str()));
			RightAnswersCount->Text = str;
			RightAnswersCount->Visible = 1;
		}
		MyForm1(bool ok) {
			InitializeComponent();
			GreatLabel->Visible = ok;
			BadLabel->Visible = !ok;
			if (ok) {
				this->Text = "Wew!";
			}
			else {
				this->Text = "Ooops";
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ContinueBtn;
	protected:
	private: System::Windows::Forms::Label^ GreatLabel;
	private: System::Windows::Forms::Label^ RightAnswersLabel;
	private: System::Windows::Forms::Label^ BadLabel;


	private: System::Windows::Forms::Label^ RightAnswersCount;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ContinueBtn = (gcnew System::Windows::Forms::Button());
			this->GreatLabel = (gcnew System::Windows::Forms::Label());
			this->RightAnswersLabel = (gcnew System::Windows::Forms::Label());
			this->BadLabel = (gcnew System::Windows::Forms::Label());
			this->RightAnswersCount = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ContinueBtn
			// 
			this->ContinueBtn->Location = System::Drawing::Point(103, 212);
			this->ContinueBtn->Name = L"ContinueBtn";
			this->ContinueBtn->Size = System::Drawing::Size(86, 23);
			this->ContinueBtn->TabIndex = 0;
			this->ContinueBtn->Text = L"Продолжить";
			this->ContinueBtn->UseVisualStyleBackColor = true;
			this->ContinueBtn->Click += gcnew System::EventHandler(this, &MyForm1::ContinueBtn_Click);
			// 
			// GreatLabel
			// 
			this->GreatLabel->AutoSize = true;
			this->GreatLabel->Location = System::Drawing::Point(56, 110);
			this->GreatLabel->Name = L"GreatLabel";
			this->GreatLabel->Size = System::Drawing::Size(170, 13);
			this->GreatLabel->TabIndex = 1;
			this->GreatLabel->Text = L"Респект! Ты ответил правильно";
			// 
			// RightAnswersLabel
			// 
			this->RightAnswersLabel->AutoSize = true;
			this->RightAnswersLabel->Location = System::Drawing::Point(50, 63);
			this->RightAnswersLabel->Name = L"RightAnswersLabel";
			this->RightAnswersLabel->Size = System::Drawing::Size(176, 13);
			this->RightAnswersLabel->TabIndex = 2;
			this->RightAnswersLabel->Text = L"Количество правильных ответов:";
			this->RightAnswersLabel->Visible = false;
			// 
			// BadLabel
			// 
			this->BadLabel->AutoSize = true;
			this->BadLabel->Location = System::Drawing::Point(78, 110);
			this->BadLabel->Name = L"BadLabel";
			this->BadLabel->Size = System::Drawing::Size(128, 13);
			this->BadLabel->TabIndex = 3;
			this->BadLabel->Text = L"Не пошло не фортануло";
			// 
			// RightAnswersCount
			// 
			this->RightAnswersCount->AutoSize = true;
			this->RightAnswersCount->Location = System::Drawing::Point(232, 63);
			this->RightAnswersCount->Name = L"RightAnswersCount";
			this->RightAnswersCount->Size = System::Drawing::Size(13, 13);
			this->RightAnswersCount->TabIndex = 4;
			this->RightAnswersCount->Text = L"0";
			this->RightAnswersCount->Visible = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->RightAnswersCount);
			this->Controls->Add(this->BadLabel);
			this->Controls->Add(this->RightAnswersLabel);
			this->Controls->Add(this->GreatLabel);
			this->Controls->Add(this->ContinueBtn);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void ContinueBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (RightAnswersCount->Visible == 1) {
				exit(0);
			}
			else
				this->Hide();
		}
	};
}
