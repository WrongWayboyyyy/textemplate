#pragma once

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
	private: System::Windows::Forms::TextBox^ xInput;
	private: System::Windows::Forms::TextBox^ yInput;

	protected:

	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::TextBox^ txtOutput;

	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ yLabel;
	private: System::Windows::Forms::Label^ xLabel;


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
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->xInput = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->yInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->yLabel = (gcnew System::Windows::Forms::Label());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(132, 191);
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
			// xInput
			// 
			this->xInput->Location = System::Drawing::Point(132, 64);
			this->xInput->Name = L"xInput";
			this->xInput->Size = System::Drawing::Size(100, 20);
			this->xInput->TabIndex = 2;
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
			// yInput
			// 
			this->yInput->Location = System::Drawing::Point(132, 100);
			this->yInput->Name = L"yInput";
			this->yInput->Size = System::Drawing::Size(100, 20);
			this->yInput->TabIndex = 4;
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
			// yLabel
			// 
			this->yLabel->AutoSize = true;
			this->yLabel->Location = System::Drawing::Point(38, 103);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(62, 13);
			this->yLabel->TabIndex = 7;
			this->yLabel->Text = L"Введите Y:";
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Location = System::Drawing::Point(38, 67);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(62, 13);
			this->xLabel->TabIndex = 8;
			this->xLabel->Text = L"Введите X:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->xLabel);
			this->Controls->Add(this->yLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->yInput);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->xInput);
			this->Controls->Add(this->lblInput);
			this->Controls->Add(this->btnCalculate);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Вычислить значение ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	void ClearAll() { // Очистка полей
		txtOutput->Text = "";
		errorProvider1->SetError(xInput, String::Empty);
		errorProvider1->SetError(yInput, String::Empty);
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

		ll x = 0;
		ll y = 0;

		bool XisOkay = VarValidation(xInput, x); // Проверяем корректность x
		bool YisOkay = VarValidation(yInput, y); // Проверяем корректность y

		if (!XisOkay || !YisOkay) return; // Если какая-то из них некорректна - завершим работу. Все необходимые выводы исключений уже были произведены

		ll summary = x + y; // Считаем сумму для логарифма

		if (summary == 1) { // Если аргумент равен единице - логарифм равен нулю
			errorProvider1->SetError(txtOutput, "Деление на ноль");
			return;
		}

		if (summary <= 0) { // Если аргумент меньше нуля - неверно
			errorProvider1->SetError(txtOutput, "Недопустимое значение для логарифма");
			return;
		}

		double OutputNumber = f(x, y); // Получаем значение функции для заданных чисел х, у

		txtOutput->Text = System::Convert::ToString(OutputNumber); // Отображаем ответ
	}
};
}
