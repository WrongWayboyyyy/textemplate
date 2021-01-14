#pragma once

#include "f.h"

namespace WindowsForms {

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
	private: System::Windows::Forms::Button^ btnCalculate;
	protected:

	private: System::Windows::Forms::Label^ lblInput;
	private: System::Windows::Forms::TextBox^ nInput;



	protected:

	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::TextBox^ txtOutput;

	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::Label^ formulaText;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->nInput = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->formulaText = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(132, 180);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(75, 23);
			this->btnCalculate->TabIndex = 0;
			this->btnCalculate->Text = L"Отправить";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// lblInput
			// 
			this->lblInput->Location = System::Drawing::Point(0, 0);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(100, 23);
			this->lblInput->TabIndex = 6;
			// 
			// nInput
			// 
			this->nInput->Location = System::Drawing::Point(132, 103);
			this->nInput->Name = L"nInput";
			this->nInput->Size = System::Drawing::Size(100, 20);
			this->nInput->TabIndex = 2;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Location = System::Drawing::Point(36, 141);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(62, 13);
			this->lblOutput->TabIndex = 3;
			this->lblOutput->Text = L"Результат:";
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(132, 138);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(100, 20);
			this->txtOutput->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 0;
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Location = System::Drawing::Point(39, 110);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(61, 13);
			this->xLabel->TabIndex = 8;
			this->xLabel->Text = L"Введите n:";
			// 
			// formulaText
			// 
			this->formulaText->AutoSize = true;
			this->formulaText->Location = System::Drawing::Point(31, 45);
			this->formulaText->Name = L"formulaText";
			this->formulaText->Size = System::Drawing::Size(130, 13);
			this->formulaText->TabIndex = 10;
			this->formulaText->Text = L"Вычисление выражения";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = Image::FromFile("picture.png");


			this->pictureBox1->Location = System::Drawing::Point(172, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->formulaText);
			this->Controls->Add(this->xLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->nInput);
			this->Controls->Add(this->lblInput);
			this->Controls->Add(this->btnCalculate);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Вычислить значение ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		typedef long long ll;
#pragma endregion

		void ClearAll() { // Очистка полей
			txtOutput->Text = "";
			errorProvider1->SetError(nInput, String::Empty);
			errorProvider1->SetError(txtOutput, String::Empty);
		}
		bool VarValidation(System::Windows::Forms::TextBox^ Input, ll& x) { // Проверка числа для поля x из потока Input

			ll InputNumber;
			bool IsVariableValid = Int64::TryParse(Input->Text, InputNumber); // Пробуем записать в InputNumber число из потока

			if (!IsVariableValid) { // Если не вышло
				errorProvider1->SetError(Input, "Переменная не целое число");
				return 0;
			}
			x = InputNumber; // Обновляем значение переменной
			return 1;
		}
	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();

		ll n = 0;

		bool NisOkay = VarValidation(nInput, n); // Проверяем корректность n

		if (n <= 0) {
			errorProvider1->SetError(nInput, "Недопустимая степень");
			return;
		}
			

		if (!NisOkay) return; // Если число некорректно - завершим работу. Все необходимые выводы исключений уже были произведены

		ll OutputNumber = f(n); // Получаем значение ряда для заданного n

		txtOutput->Text = System::Convert::ToString(OutputNumber); // Отображаем ответ
	}
};
}
