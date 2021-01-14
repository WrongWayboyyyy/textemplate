#pragma once
#include <set>
#include <iostream>
#include "Misc.h"
#include "Matrix.h"

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
	private: System::Windows::Forms::DataGridView^ gridResult;

	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::TextBox^ NameTextBox;
	private: System::Windows::Forms::Label^ PositionLabel;
	private: System::Windows::Forms::TextBox^ PosTextBox;
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Button^ AddBtn;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ ResultBtn;
	private: System::Windows::Forms::TextBox^ ResultTextBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PositionColumn;
	private: System::Windows::Forms::Button^ ResetBtn;
	private: System::Windows::Forms::Button^ RemoveBtn;
	private: System::Windows::Forms::RadioButton^ GetPositionBtn;
	private: System::Windows::Forms::RadioButton^ GetNamesBtn;





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
			this->gridResult = (gcnew System::Windows::Forms::DataGridView());
			this->NameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PositionColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->PosTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PositionLabel = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ResultBtn = (gcnew System::Windows::Forms::Button());
			this->ResultTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ResetBtn = (gcnew System::Windows::Forms::Button());
			this->RemoveBtn = (gcnew System::Windows::Forms::Button());
			this->GetNamesBtn = (gcnew System::Windows::Forms::RadioButton());
			this->GetPositionBtn = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResult))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// gridResult
			// 
			this->gridResult->AllowUserToAddRows = false;
			this->gridResult->AllowUserToDeleteRows = false;
			this->gridResult->AllowUserToResizeColumns = false;
			this->gridResult->AllowUserToResizeRows = false;
			this->gridResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->NameColumn,
					this->PositionColumn
			});
			this->gridResult->Location = System::Drawing::Point(431, 37);
			this->gridResult->Margin = System::Windows::Forms::Padding(2);
			this->gridResult->Name = L"gridResult";
			this->gridResult->ReadOnly = true;
			this->gridResult->RowHeadersWidth = 51;
			this->gridResult->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gridResult->RowTemplate->Height = 24;
			this->gridResult->Size = System::Drawing::Size(504, 428);
			this->gridResult->TabIndex = 16;
			// 
			// NameColumn
			// 
			this->NameColumn->HeaderText = L"ФИО";
			this->NameColumn->Name = L"NameColumn";
			this->NameColumn->ReadOnly = true;
			this->NameColumn->Width = 300;
			// 
			// PositionColumn
			// 
			this->PositionColumn->HeaderText = L"Должность";
			this->PositionColumn->Name = L"PositionColumn";
			this->PositionColumn->ReadOnly = true;
			this->PositionColumn->Width = 150;
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(633, 485);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(111, 13);
			this->resultLabel->TabIndex = 21;
			this->resultLabel->Text = L"Список сотрудников";
			// 
			// NameTextBox
			// 
			this->NameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NameTextBox->Location = System::Drawing::Point(215, 80);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(117, 20);
			this->NameTextBox->TabIndex = 22;
			// 
			// AddBtn
			// 
			this->AddBtn->Location = System::Drawing::Point(201, 153);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(66, 53);
			this->AddBtn->TabIndex = 23;
			this->AddBtn->Text = L"Добавить";
			this->AddBtn->UseVisualStyleBackColor = true;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MyForm::AddBtn_Click);
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Location = System::Drawing::Point(141, 82);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(68, 13);
			this->NameLabel->TabIndex = 24;
			this->NameLabel->Text = L"ФИО (ключ)";
			// 
			// PosTextBox
			// 
			this->PosTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PosTextBox->Location = System::Drawing::Point(215, 116);
			this->PosTextBox->Name = L"PosTextBox";
			this->PosTextBox->Size = System::Drawing::Size(117, 20);
			this->PosTextBox->TabIndex = 25;
			// 
			// PositionLabel
			// 
			this->PositionLabel->AutoSize = true;
			this->PositionLabel->Location = System::Drawing::Point(88, 118);
			this->PositionLabel->Name = L"PositionLabel";
			this->PositionLabel->Size = System::Drawing::Size(121, 13);
			this->PositionLabel->TabIndex = 26;
			this->PositionLabel->Text = L"Должность (значение)";
			// 
			// ResultBtn
			// 
			this->ResultBtn->Location = System::Drawing::Point(235, 292);
			this->ResultBtn->Name = L"ResultBtn";
			this->ResultBtn->Size = System::Drawing::Size(75, 43);
			this->ResultBtn->TabIndex = 28;
			this->ResultBtn->Text = L"Получить результат";
			this->ResultBtn->UseVisualStyleBackColor = true;
			this->ResultBtn->Click += gcnew System::EventHandler(this, &MyForm::ResultBtn_Click);
			// 
			// ResultTextBox
			// 
			this->ResultTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ResultTextBox->Location = System::Drawing::Point(215, 247);
			this->ResultTextBox->Name = L"ResultTextBox";
			this->ResultTextBox->Size = System::Drawing::Size(117, 20);
			this->ResultTextBox->TabIndex = 27;
			// 
			// ResetBtn
			// 
			this->ResetBtn->Location = System::Drawing::Point(235, 354);
			this->ResetBtn->Name = L"ResetBtn";
			this->ResetBtn->Size = System::Drawing::Size(75, 43);
			this->ResetBtn->TabIndex = 29;
			this->ResetBtn->Text = L"Сбросить фильтр";
			this->ResetBtn->UseVisualStyleBackColor = true;
			this->ResetBtn->Click += gcnew System::EventHandler(this, &MyForm::ResetBtn_Click);
			// 
			// RemoveBtn
			// 
			this->RemoveBtn->Location = System::Drawing::Point(273, 153);
			this->RemoveBtn->Name = L"RemoveBtn";
			this->RemoveBtn->Size = System::Drawing::Size(66, 53);
			this->RemoveBtn->TabIndex = 30;
			this->RemoveBtn->Text = L"Удалить по ключу";
			this->RemoveBtn->UseVisualStyleBackColor = true;
			this->RemoveBtn->Click += gcnew System::EventHandler(this, &MyForm::RemoveBtn_Click);
			// 
			// GetNamesBtn
			// 
			this->GetNamesBtn->AutoSize = true;
			this->GetNamesBtn->Location = System::Drawing::Point(29, 269);
			this->GetNamesBtn->Name = L"GetNamesBtn";
			this->GetNamesBtn->Size = System::Drawing::Size(180, 17);
			this->GetNamesBtn->TabIndex = 31;
			this->GetNamesBtn->TabStop = true;
			this->GetNamesBtn->Text = L"Получить ключи по профессии";
			this->GetNamesBtn->UseVisualStyleBackColor = true;
			// 
			// GetPositionBtn
			// 
			this->GetPositionBtn->AutoSize = true;
			this->GetPositionBtn->Location = System::Drawing::Point(29, 292);
			this->GetPositionBtn->Name = L"GetPositionBtn";
			this->GetPositionBtn->Size = System::Drawing::Size(181, 17);
			this->GetPositionBtn->TabIndex = 32;
			this->GetPositionBtn->TabStop = true;
			this->GetPositionBtn->Text = L"Получить профессию по ключу";
			this->GetPositionBtn->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 603);
			this->Controls->Add(this->GetPositionBtn);
			this->Controls->Add(this->GetNamesBtn);
			this->Controls->Add(this->RemoveBtn);
			this->Controls->Add(this->ResetBtn);
			this->Controls->Add(this->ResultBtn);
			this->Controls->Add(this->ResultTextBox);
			this->Controls->Add(this->PositionLabel);
			this->Controls->Add(this->PosTextBox);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->NameTextBox);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->gridResult);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Браузер \"Амиго\"";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Collections::Generic::Dictionary<String^, String^> d;
		private: System::Collections::Generic::Dictionary<String^, System::Collections::Generic::List<String^>^> p;
		void CreateEmptyMatrix(DataGridView^ grid, int x) { // Создание пустой матрицы
			while (grid->Rows->Count > 0) {
				grid->Rows->Remove(grid->Rows[grid->Rows->Count - 1]);
			}
			grid->Rows->Add(x);
		}

		void ClearOutput() { // Очистка таблицы
			errorProvider1->SetError(AddBtn, String::Empty);
			errorProvider1->SetError(RemoveBtn, String::Empty);
		}
		void FillRowWithDict(DataGridViewRow^ row, System::Collections::Generic::KeyValuePair<String^, String^>^ p) { // Заполнение ряда значениями
			row->Cells[0]->Value = p->Key->ToString();
			row->Cells[1]->Value = p->Value->ToString();
		};
		private: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) { // Добавление пары ключ - значение
			String^ name = NameTextBox->Text->ToString();
			String^ position = PosTextBox->Text->ToString();
			if (name == String::Empty || position == String::Empty) { // Если что-то не ввели - сообщим об этом
				errorProvider1->SetError(AddBtn, "Недопустимые значения");
				return;
			}
			if (!d.ContainsKey(name)) { // Если ключа нет, добавим
				d.Add(name, position);
				System::Collections::Generic::List<String^>^ lst = gcnew System::Collections::Generic::List<String^>(); // Создадим новый объект
				if (!p.ContainsKey(position)) 
					p.Add(position, lst);
				p[position]->Add(name); // Добавим в лист по этому ключу новое значение
				gridResult->Rows->Add(1);
				int _row = gridResult->RowCount;
				auto ResultPair = System::Collections::Generic::KeyValuePair<String^, String^>(name, position);
				FillRowWithDict(gridResult->Rows[_row - 1], ResultPair);
			}
			
		}
		private: System::Void ResultBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearOutput(); // Очищаем вывод
			if (GetPositionBtn->Checked) { // Если хотим получить профессию по имени
				String^ _key = ResultTextBox->Text->ToString();
				bool found = d.ContainsKey(_key); // Если ключа нет
				if (!found) {
					errorProvider1->SetError(ResultBtn, "Этого человека нет в списке");  // Выведем сообщение об ошибке
					return;
				}
				CreateEmptyMatrix(gridResult, 1); // Создадим пустую матрицу
				String^ _value; 
				d.TryGetValue(_key, _value); // Пытаемся получить значение
				auto ResultPair = System::Collections::Generic::KeyValuePair<String^, String^>(_key, _value);
				FillRowWithDict(gridResult->Rows[0], ResultPair); // Заполним имя и профессию
				return;
			}
			if (GetNamesBtn->Checked) { // Если хотим получить имена по профессии
				String^ _key = ResultTextBox->Text->ToString();
				if (!p.ContainsKey(_key)) { // Если ключа нет - сообщим об этом
					errorProvider1->SetError(ResultBtn, "Нет подходящего результата");
					return;
				}
				System::Collections::Generic::List<String^>^ lst;
				p.TryGetValue(_key, lst);
				CreateEmptyMatrix(gridResult, lst->Count); // Создадим соответствующую матрицу
				int idx = 0;
				
				for each (String^ str in lst) { // Выведем результат в GridResult
					gridResult->Rows[idx]->Cells[0]->Value = str;
					gridResult->Rows[idx]->Cells[1]->Value = _key;
					++idx;
				}
			}
			
			
		}
		private: System::Void ResetBtn_Click(System::Object^ sender, System::EventArgs^ e) { // Сброс фильтра
			CreateEmptyMatrix(gridResult, d.Count);
			int idx = 0;
			for each (System::Collections::Generic::KeyValuePair<String^, String^> CurrentPair in d) { // Достанем все пары из словаря и заполним ими таблицу
				FillRowWithDict(gridResult->Rows[idx++], CurrentPair);
			}
		}
		private: System::Void RemoveBtn_Click(System::Object^ sender, System::EventArgs^ e) { // Удаляем пару по ключу
			ClearOutput();
			d.Remove(NameTextBox->Text);
			for each (System::Collections::Generic::KeyValuePair<String^, System::Collections::Generic::List<String^>^> lst in p) {
				lst.Value->Remove(NameTextBox->Text);
			}
			for (int i = 0; i < gridResult->RowCount; ++i) {
				if (gridResult->Rows[i]->Cells[0]->Value->ToString() == NameTextBox->Text) {
					gridResult->Rows->RemoveAt(i);
				}
			}
		}
	};
}