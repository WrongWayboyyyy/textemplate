#pragma once
#include <set>

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
	private: System::Windows::Forms::DataGridView^ grid;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mas;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnRemove;

	private: System::Windows::Forms::TextBox^ txtX;



	private: System::Windows::Forms::Button^ btnSummary;
	private: System::Windows::Forms::Button^ btnFindMaxEven;

	private: System::Windows::Forms::TextBox^ txtOutput;
	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::Label^ txt;

	private: System::Windows::Forms::Label^ lblX;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
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
			this->grid = (gcnew System::Windows::Forms::DataGridView());
			this->mas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->txtX = (gcnew System::Windows::Forms::TextBox());
			this->btnSummary = (gcnew System::Windows::Forms::Button());
			this->btnFindMaxEven = (gcnew System::Windows::Forms::Button());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->txt = (gcnew System::Windows::Forms::Label());
			this->lblX = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// grid
			// 
			this->grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->mas });
			this->grid->Location = System::Drawing::Point(0, 0);
			this->grid->Name = L"grid";
			this->grid->RowHeadersWidth = 51;
			this->grid->RowTemplate->Height = 24;
			this->grid->Size = System::Drawing::Size(240, 434);
			this->grid->TabIndex = 0;
			this->grid->CellLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::grid_CellLeave);
			// 
			// mas
			// 
			this->mas->HeaderText = L"Массив";
			this->mas->MinimumWidth = 6;
			this->mas->Name = L"mas";
			this->mas->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(0, 445);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(116, 28);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Добавить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(122, 445);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(118, 28);
			this->btnRemove->TabIndex = 2;
			this->btnRemove->Text = L"Удалить";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// txtX
			// 
			this->txtX->Location = System::Drawing::Point(358, 166);
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(74, 22);
			this->txtX->TabIndex = 4;
			// 
			// btnSummary
			// 
			this->btnSummary->Location = System::Drawing::Point(279, 241);
			this->btnSummary->Name = L"btnSummary";
			this->btnSummary->Size = System::Drawing::Size(153, 101);
			this->btnSummary->TabIndex = 8;
			this->btnSummary->Text = L"Сумма на интервале, удовлетворяющие заданному условию";
			this->btnSummary->UseVisualStyleBackColor = true;
			this->btnSummary->Click += gcnew System::EventHandler(this, &MyForm::btnSummary_Click);
			// 
			// btnFindMaxEven
			// 
			this->btnFindMaxEven->Location = System::Drawing::Point(279, 359);
			this->btnFindMaxEven->Name = L"btnFindMaxEven";
			this->btnFindMaxEven->Size = System::Drawing::Size(153, 63);
			this->btnFindMaxEven->TabIndex = 9;
			this->btnFindMaxEven->Text = L"Максимальный четный элемент";
			this->btnFindMaxEven->UseVisualStyleBackColor = true;
			this->btnFindMaxEven->Click += gcnew System::EventHandler(this, &MyForm::btnFindMaxEven_Click);
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(358, 204);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(74, 22);
			this->txtOutput->TabIndex = 10;
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Location = System::Drawing::Point(272, 204);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(54, 17);
			this->lblOutput->TabIndex = 11;
			this->lblOutput->Text = L"Вывод:";
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(257, 24);
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(455, 121);
			this->txt->TabIndex = 12;
			this->txt->Text = L"Задание: Найти сумму нечетных элементов, меньших заданного числа. Вывести максима"
				L"льный четный элемент";
			// 
			// lblX
			// 
			this->lblX->AutoSize = true;
			this->lblX->Location = System::Drawing::Point(272, 166);
			this->lblX->Name = L"lblX";
			this->lblX->Size = System::Drawing::Size(80, 17);
			this->lblX->TabIndex = 13;
			this->lblX->Text = L"Введите X:";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 545);
			this->Controls->Add(this->lblX);
			this->Controls->Add(this->txt);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->btnFindMaxEven);
			this->Controls->Add(this->btnSummary);
			this->Controls->Add(this->txtX);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->grid);
			this->Name = L"MyForm";
			this->Text = L"Браузер \"Амиго\"";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::set<int>* WrongCells = new std::set<int>();

		void ClearOutput() {
			txtOutput->Text = "";
		}

		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			this->grid->Rows->Add(1);
		}

		private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!this->grid->CurrentRow->IsNewRow) {
				int i = this->grid->CurrentRow->Index;
				this->grid->Rows->Remove(this->grid->Rows[i]);
			}
		}
		private: System::Void btnSummary_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearOutput();
			bool noBadCells = true;
			bool check2 = true;
			if ((int)WrongCells->size() > 0) {
				noBadCells = false;
			}
			int xValue;
			bool isCorrectValue = Int32::TryParse(txtX->Text, xValue);
			if (!isCorrectValue) {
				errorProvider1->SetError(txtX, "Неверное значение для X");
			}
			if (!isCorrectValue) {
				return;
			}
			else {
				errorProvider1->SetError(txtX, String::Empty);
			}
			if (!noBadCells) {
				return;
			}
			int summary = 0;
			for (int i = 0; i < this->grid->RowCount; ++i) {
				int val = System::Convert::ToInt32(this->grid->Rows[i]->Cells[0]->Value);
				if (val % 2 == 1 && val < xValue) {
					summary += val;
				}

			}
			ClearOutput();
			txtOutput->Text = System::Convert::ToString(summary);
		}
		private: System::Void btnFindMaxEven_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearOutput();
			if (WrongCells->size() > 0) {
				return;
			}
			int max_val = -1e9;
			int max_ind = -1;
			for (int i = 0; i < this->grid->RowCount; ++i) {
				int val = System::Convert::ToInt32(this->grid->Rows[i]->Cells[0]->Value);
				if (val > max_val && val % 2 == 0) {
					max_val = val;
					max_ind = i;
				}
			}
			ClearOutput();
			txtOutput->Text = System::Convert::ToString(max_val);
		}
		private: System::Void grid_CellLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			int val = 0;

			System::String^ Value = System::Convert::ToString(this->grid->Rows[grid->CurrentRow->Index]->Cells[0]->EditedFormattedValue);
			
			bool isCorrectValue = Int32::TryParse(Value, val); // Пробуем записать в InputNumber число из потока
			if (!isCorrectValue && (Value != "" && grid->CurrentRow->Index != grid->RowCount)) {
				errorProvider1->SetError(grid, "Неверный тип для ячейки");
				WrongCells->insert(grid->CurrentRow->Index);
			}
			else {
				WrongCells->erase(grid->CurrentRow->Index);
				if ((int)WrongCells->size() == 0) {
					errorProvider1->SetError(grid, String::Empty);
				}
			}
			
		}
	};
}