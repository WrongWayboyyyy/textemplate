#pragma once
#include <set>
#include <iostream>
#include <vector>
#include "Status.h"

using std::set;


namespace MyOwnApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::Button^ StartTestBtn;
	private: System::Windows::Forms::Button^ NextQuestionBtn;
	private: System::Windows::Forms::Button^ Option4Btn;
	private: System::Windows::Forms::Button^ Option3Btn;
	private: System::Windows::Forms::Button^ Option2Btn;
	private: System::Windows::Forms::Button^ Option1Btn;
	private: System::Windows::Forms::Label^ RAlabel;
	private: System::Windows::Forms::Label^ RightAnswersLabel;
	private: System::Windows::Forms::Button^ YesBtn;
	private: System::Windows::Forms::Button^ NoBtn;
	private: System::Windows::Forms::Label^ QNumberLabel;
	private: System::Windows::Forms::Label^ QuestionLabel;
	private: System::Windows::Forms::RichTextBox^ QuestionBox;

	private: System::Windows::Forms::Label^ AnswerLabel;
	private: System::Windows::Forms::TextBox^ AnswerTextBox;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->StartTestBtn = (gcnew System::Windows::Forms::Button());
			this->NextQuestionBtn = (gcnew System::Windows::Forms::Button());
			this->AnswerTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AnswerLabel = (gcnew System::Windows::Forms::Label());
			this->QuestionBox = (gcnew System::Windows::Forms::RichTextBox());
			this->QuestionLabel = (gcnew System::Windows::Forms::Label());
			this->QNumberLabel = (gcnew System::Windows::Forms::Label());
			this->NoBtn = (gcnew System::Windows::Forms::Button());
			this->YesBtn = (gcnew System::Windows::Forms::Button());
			this->RightAnswersLabel = (gcnew System::Windows::Forms::Label());
			this->RAlabel = (gcnew System::Windows::Forms::Label());
			this->Option1Btn = (gcnew System::Windows::Forms::Button());
			this->Option2Btn = (gcnew System::Windows::Forms::Button());
			this->Option3Btn = (gcnew System::Windows::Forms::Button());
			this->Option4Btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			this->openFileDialog->Title = L"Открыть файл";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			// 
			// StartTestBtn
			// 
			this->StartTestBtn->Location = System::Drawing::Point(388, 393);
			this->StartTestBtn->Name = L"StartTestBtn";
			this->StartTestBtn->Size = System::Drawing::Size(178, 108);
			this->StartTestBtn->TabIndex = 0;
			this->StartTestBtn->Text = L"Начать тестирование";
			this->StartTestBtn->UseVisualStyleBackColor = true;
			this->StartTestBtn->Click += gcnew System::EventHandler(this, &MyForm::StartTestBtn_Click);
			// 
			// NextQuestionBtn
			// 
			this->NextQuestionBtn->Location = System::Drawing::Point(388, 346);
			this->NextQuestionBtn->Name = L"NextQuestionBtn";
			this->NextQuestionBtn->Size = System::Drawing::Size(178, 23);
			this->NextQuestionBtn->TabIndex = 1;
			this->NextQuestionBtn->Text = L"Ответить";
			this->NextQuestionBtn->UseVisualStyleBackColor = true;
			this->NextQuestionBtn->Visible = false;
			this->NextQuestionBtn->Click += gcnew System::EventHandler(this, &MyForm::NextQuestionBtn_Click);
			// 
			// AnswerTextBox
			// 
			this->AnswerTextBox->Location = System::Drawing::Point(388, 315);
			this->AnswerTextBox->Name = L"AnswerTextBox";
			this->AnswerTextBox->Size = System::Drawing::Size(178, 20);
			this->AnswerTextBox->TabIndex = 2;
			this->AnswerTextBox->Visible = false;
			// 
			// AnswerLabel
			// 
			this->AnswerLabel->AutoSize = true;
			this->AnswerLabel->Location = System::Drawing::Point(342, 318);
			this->AnswerLabel->Name = L"AnswerLabel";
			this->AnswerLabel->Size = System::Drawing::Size(40, 13);
			this->AnswerLabel->TabIndex = 3;
			this->AnswerLabel->Text = L"Ответ:";
			this->AnswerLabel->Visible = false;
			// 
			// QuestionBox
			// 
			this->QuestionBox->Location = System::Drawing::Point(233, 53);
			this->QuestionBox->Name = L"QuestionBox";
			this->QuestionBox->ReadOnly = true;
			this->QuestionBox->Size = System::Drawing::Size(504, 132);
			this->QuestionBox->TabIndex = 4;
			this->QuestionBox->Text = L"";
			this->QuestionBox->Visible = false;
			this->QuestionBox->ZoomFactor = 1.5F;
			// 
			// QuestionLabel
			// 
			this->QuestionLabel->AutoSize = true;
			this->QuestionLabel->Location = System::Drawing::Point(230, 37);
			this->QuestionLabel->Name = L"QuestionLabel";
			this->QuestionLabel->Size = System::Drawing::Size(44, 13);
			this->QuestionLabel->TabIndex = 5;
			this->QuestionLabel->Text = L"Вопрос";
			this->QuestionLabel->Visible = false;
			// 
			// QNumberLabel
			// 
			this->QNumberLabel->AutoSize = true;
			this->QNumberLabel->Location = System::Drawing::Point(280, 37);
			this->QNumberLabel->Name = L"QNumberLabel";
			this->QNumberLabel->Size = System::Drawing::Size(13, 13);
			this->QNumberLabel->TabIndex = 6;
			this->QNumberLabel->Text = L"0";
			this->QNumberLabel->Visible = false;
			// 
			// NoBtn
			// 
			this->NoBtn->Location = System::Drawing::Point(283, 346);
			this->NoBtn->Name = L"NoBtn";
			this->NoBtn->Size = System::Drawing::Size(75, 59);
			this->NoBtn->TabIndex = 7;
			this->NoBtn->Text = L"No";
			this->NoBtn->UseVisualStyleBackColor = true;
			this->NoBtn->Visible = false;
			this->NoBtn->Click += gcnew System::EventHandler(this, &MyForm::NextQuestionBtn_Click);
			// 
			// YesBtn
			// 
			this->YesBtn->Location = System::Drawing::Point(600, 346);
			this->YesBtn->Name = L"YesBtn";
			this->YesBtn->Size = System::Drawing::Size(75, 59);
			this->YesBtn->TabIndex = 8;
			this->YesBtn->Text = L"Yes";
			this->YesBtn->UseVisualStyleBackColor = true;
			this->YesBtn->Visible = false;
			this->YesBtn->Click += gcnew System::EventHandler(this, &MyForm::NextQuestionBtn_Click);
			// 
			// RightAnswersLabel
			// 
			this->RightAnswersLabel->AutoSize = true;
			this->RightAnswersLabel->Location = System::Drawing::Point(593, 37);
			this->RightAnswersLabel->Name = L"RightAnswersLabel";
			this->RightAnswersLabel->Size = System::Drawing::Size(116, 13);
			this->RightAnswersLabel->TabIndex = 9;
			this->RightAnswersLabel->Text = L"Правильных ответов:";
			this->RightAnswersLabel->Visible = false;
			// 
			// RAlabel
			// 
			this->RAlabel->AutoSize = true;
			this->RAlabel->Location = System::Drawing::Point(715, 37);
			this->RAlabel->Name = L"RAlabel";
			this->RAlabel->Size = System::Drawing::Size(13, 13);
			this->RAlabel->TabIndex = 10;
			this->RAlabel->Text = L"0";
			this->RAlabel->Visible = false;
			// 
			// Option1Btn
			// 
			this->Option1Btn->Location = System::Drawing::Point(233, 210);
			this->Option1Btn->Name = L"Option1Btn";
			this->Option1Btn->Size = System::Drawing::Size(75, 57);
			this->Option1Btn->TabIndex = 11;
			this->Option1Btn->Text = L"Вариант 1";
			this->Option1Btn->UseVisualStyleBackColor = true;
			this->Option1Btn->Visible = false;
			this->Option1Btn->Click += gcnew System::EventHandler(this, &MyForm::NextQuestionBtn_Click);
			// 
			// Option2Btn
			// 
			this->Option2Btn->Location = System::Drawing::Point(376, 210);
			this->Option2Btn->Name = L"Option2Btn";
			this->Option2Btn->Size = System::Drawing::Size(75, 57);
			this->Option2Btn->TabIndex = 12;
			this->Option2Btn->Text = L"Вариант 2";
			this->Option2Btn->UseVisualStyleBackColor = true;
			this->Option2Btn->Visible = false;
			this->Option2Btn->Click += gcnew System::EventHandler(this, &MyForm::NextQuestionBtn_Click);
			// 
			// Option3Btn
			// 
			this->Option3Btn->Location = System::Drawing::Point(522, 210);
			this->Option3Btn->Name = L"Option3Btn";
			this->Option3Btn->Size = System::Drawing::Size(75, 57);
			this->Option3Btn->TabIndex = 13;
			this->Option3Btn->Text = L"Вариант 3";
			this->Option3Btn->UseVisualStyleBackColor = true;
			this->Option3Btn->Visible = false;
			this->Option3Btn->Click += gcnew System::EventHandler(this, &MyForm::NextQuestionBtn_Click);
			// 
			// Option4Btn
			// 
			this->Option4Btn->Location = System::Drawing::Point(662, 210);
			this->Option4Btn->Name = L"Option4Btn";
			this->Option4Btn->Size = System::Drawing::Size(75, 57);
			this->Option4Btn->TabIndex = 14;
			this->Option4Btn->Text = L"Вариант 4";
			this->Option4Btn->UseVisualStyleBackColor = true;
			this->Option4Btn->Visible = false;
			this->Option4Btn->Click += gcnew System::EventHandler(this, &MyForm::NextQuestionBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 603);
			this->Controls->Add(this->Option4Btn);
			this->Controls->Add(this->Option3Btn);
			this->Controls->Add(this->Option2Btn);
			this->Controls->Add(this->Option1Btn);
			this->Controls->Add(this->RAlabel);
			this->Controls->Add(this->RightAnswersLabel);
			this->Controls->Add(this->YesBtn);
			this->Controls->Add(this->NoBtn);
			this->Controls->Add(this->QNumberLabel);
			this->Controls->Add(this->QuestionLabel);
			this->Controls->Add(this->QuestionBox);
			this->Controls->Add(this->AnswerLabel);
			this->Controls->Add(this->AnswerTextBox);
			this->Controls->Add(this->NextQuestionBtn);
			this->Controls->Add(this->StartTestBtn);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Браузер \"Амиго\"";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		ref struct Question {
		public: int questionId;
		public: Question() {};
		public: Question(int questionId, String^ text) : questionId(questionId), text(text) {};
		public: String^ text;
		public: virtual bool CheckAnswer() = 0;
		public: virtual Question^ Clone() = 0;

		};

		ref struct ShortAnswerQuestion : Question {
		public: String^ expectedAnswer;
		public: String^ userAnswer;
		public: ShortAnswerQuestion() {};
		public: ShortAnswerQuestion(int questionId, String^ expectedAnswer) {
			this->questionId = questionId;
			this->expectedAnswer = expectedAnswer;
		}
		public: virtual bool CheckAnswer() override {
			return expectedAnswer->Equals(userAnswer);
		}
		public: virtual Question^ Clone() override {
			ShortAnswerQuestion^ obj = (gcnew ShortAnswerQuestion());
			obj->expectedAnswer = this->expectedAnswer;
			obj->questionId = this->questionId;
			obj->text = this->text;
			obj->userAnswer = this->userAnswer;
			Question^ toBeReturned = obj;
			return toBeReturned;
		}
		};

		ref struct SeveralAnswerQuestion : Question {
		public: int count;
		public: int userAnswerId;
		public: int expectedAnswerId;
		public: virtual bool CheckAnswer() override {
			return userAnswerId == expectedAnswerId;
		}
		public: SeveralAnswerQuestion() {};
		public: SeveralAnswerQuestion(int questionId, int expectedAnswer, int count) {
			this->questionId = questionId;
			this->expectedAnswerId = expectedAnswerId;
			this->count = count;
		}
		public: virtual Question^ Clone() override {
			SeveralAnswerQuestion^ obj = (gcnew SeveralAnswerQuestion());
			obj->expectedAnswerId = this->expectedAnswerId;
			obj->questionId = this->questionId;
			obj->text = this->text;
			obj->count = this->count;
			Question^ toBeReturned = obj;
			return toBeReturned;
		}
		};


		System::Collections::Generic::List<Question^>^ questions;
		System::Collections::Generic::Dictionary<Button^, int> dict;
		static int rightAnswers = 0;

		public: String^ ReadNextQuestion(System::IO::StreamReader^ sr) { // Читаем следующий вопрос в строку
			std::string s = "";
			while  (sr->Peek() !=  '$') { // Если следующая считанная строка существует и не равна пустой
						s += sr->Read();
			}
			String^ str = (gcnew String(s.c_str()));
			return str;
		}


		public: void ReadQuestionsFromFile(System::Collections::Generic::List<Question^>^ myList){
			System::IO::Stream^ myStream; // Поток
			if (this->openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // Если открыли файл
				if ((myStream = openFileDialog->OpenFile()) != nullptr) { // Если успешно связали поток с файлом
					System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(myStream, System::Text::Encoding::
						GetEncoding(65001)); // UTF-8
					System::String^ s = "1";
					int innerIdx = 0;
					while (sr->Peek() != -1) { // Пока есть что читать
						int question_id = sr->Read() - '0';
						if (question_id != 0 && question_id != 1)
							return;
						sr->Read();
						
						int expected;
						std::string expectedString;
						Question^ newQuestion;
						if (question_id == 0) { // Если вопрос из серии "несколько вариантов ответа"
							expected = sr->Read() - '0';
							sr->Read();
							int count = sr->Read() - '0';
							SeveralAnswerQuestion^ question = (gcnew SeveralAnswerQuestion());
							question->count = count;
							question->questionId = question_id;
							question->expectedAnswerId = expected;
							newQuestion = question;
						}
						if (question_id == 1) { // Если вопрос из серии "короткий ответ на вопрос"
							while (sr->Peek() != ' ') {
								auto symb = sr->Read();
								expectedString += symb;
							}
							String^ str = (gcnew String(expectedString.c_str()));
							ShortAnswerQuestion^ question = (gcnew ShortAnswerQuestion());
							question->questionId = question_id;
							question->expectedAnswer = str;
							newQuestion = question;
						}
						newQuestion->text = ReadNextQuestion(sr);
						questions->Add(newQuestion);
						auto var1 = sr->Read();
						auto var2 =sr->Read();
						auto var3 = sr->Read();
					}
					sr->Close();
				}
			}
		}

		public: void InitializeTest() { // Инициализация структур для работы теста
			questions = (gcnew System::Collections::Generic::List<Question^>());
			dict.Add(Option1Btn, 1);
			dict.Add(Option2Btn, 2);
			dict.Add(Option3Btn, 3);
			dict.Add(Option4Btn, 4);
			dict.Add(NoBtn, 5);
			dict.Add(YesBtn, 6);

			ReadQuestionsFromFile(questions);
			Random^ rand = (gcnew Random());
			for (int i = 0; i < 100; ++i) {
				int t = rand->Next(questions->Count - 1);
				int j = rand->Next(questions->Count - 1);
				auto tmp = questions[t]->Clone();
				questions[t] = questions[j];
				questions[j] = tmp;
			}
		}

		
		static int currentQuestion = -1;
		private: void UpdateQuestion() { // Обновляем вопрос и интерфейс формы
			AnswerTextBox->Text = String::Empty;

			Question^ question = questions[++currentQuestion];
			if (questions[currentQuestion]->questionId == 0) {
				auto q = reinterpret_cast<SeveralAnswerQuestion^>(questions[currentQuestion]);
				NextQuestionBtn->Visible = false;
				if (q->count == 4) {
					YesBtn->Visible = 0;
					NoBtn->Visible = 0;
					Option1Btn->Visible = 1;
					Option2Btn->Visible = 1;
					Option3Btn->Visible = 1;
					Option4Btn->Visible = 1;
				}
				else {
					YesBtn->Visible = 1;
					NoBtn->Visible = 1;
					Option1Btn->Visible = 0;
					Option2Btn->Visible = 0;
					Option3Btn->Visible = 0;
					Option4Btn->Visible = 0;
				}
				
				AnswerTextBox->Visible = 0;
				AnswerLabel->Visible = 0;
			}
			else {
				NextQuestionBtn->Visible = 1;
				Option1Btn->Visible = 0;
				Option2Btn->Visible = 0;
				Option3Btn->Visible = 0;
				Option4Btn->Visible = 0;
				YesBtn->Visible = 0;
				NoBtn->Visible = 0;
				AnswerLabel->Visible = 1;
				AnswerTextBox->Visible = 1;
			}

			String^ num = gcnew String(String::Empty);
			num = num->Format("{0}", currentQuestion + 1);
			QNumberLabel->Text = num;
			QuestionBox->Text = question->text;
			RAlabel->Text = num->Format("{0}", rightAnswers);
	
		}

		private: System::Void StartTestBtn_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка начала теста
			NextQuestionBtn->Visible = true;
			StartTestBtn->Visible = false;
			QuestionBox->Visible = true;
			RAlabel->Visible = true;
			RightAnswersLabel->Visible = true;
			QNumberLabel->Visible = true;
			QuestionLabel->Visible = true;

			InitializeTest();
			UpdateQuestion();

		}

		public: void TerminateTest() {
			MyForm1^ form = (gcnew MyForm1(rightAnswers));
			form->Show();

		}

		public: void ShowAnswer(bool correct){
			MyForm1^ form = (gcnew MyForm1(correct));
			form->Show();
		}
		private: System::Void NextQuestionBtn_Click(System::Object^ sender, System::EventArgs^ e) { // Проверка введенного на корректность и обновление вопроса
			bool correct;
			if (questions[currentQuestion]->questionId == 0) {
				SeveralAnswerQuestion^ question = 
					reinterpret_cast<SeveralAnswerQuestion^>(questions[currentQuestion]);
				Button^ btn = reinterpret_cast<Button^>(sender);
				if (question->count == 2) { // Если вопрос "да или нет"
					correct = (5 + question->expectedAnswerId == dict[btn]); // Если нажатая кнопка совпадает с ожидаемой
				}
				else // Иначе
					correct = (question->expectedAnswerId == dict[btn]);
				
			}
			if (questions[currentQuestion]->questionId == 1) {
				ShortAnswerQuestion^ question = reinterpret_cast<ShortAnswerQuestion^>(questions[currentQuestion]);
				correct = (AnswerTextBox->Text == question->expectedAnswer);
			}
			if (correct) {
				rightAnswers++;
			}
			

			if (currentQuestion == questions->Count - 1) {
				TerminateTest();
				return;
			}
			else
				ShowAnswer(correct);
			
			UpdateQuestion();
			
		}
	};
}
