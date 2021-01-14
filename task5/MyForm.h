#pragma once
#include <set>
#include <iostream>

namespace MyOwnApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ gridInit;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^ btnAddRow;
	private: System::Windows::Forms::Button^ btnRemoveRow;















	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ btnRemoveColumn;

	private: System::Windows::Forms::Button^ btnAddColumn;

	private: System::Windows::Forms::DataGridView^ gridResult;


	private: System::Windows::Forms::Button^ btnCalc;
	private: System::Windows::Forms::DataGridView^ gridToChange;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mas;
	private: System::Windows::Forms::Label^ initLabel;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::Label^ taskLabel;





	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->gridInit = (gcnew System::Windows::Forms::DataGridView());
			this->mas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAddRow = (gcnew System::Windows::Forms::Button());
			this->btnRemoveRow = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->btnAddColumn = (gcnew System::Windows::Forms::Button());
			this->btnRemoveColumn = (gcnew System::Windows::Forms::Button());
			this->gridResult = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCalc = (gcnew System::Windows::Forms::Button());
			this->gridToChange = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->taskLabel = (gcnew System::Windows::Forms::Label());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->initLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridInit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResult))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridToChange))->BeginInit();
			this->SuspendLayout();
			// 
			// gridInit
			// 
			this->gridInit->AllowUserToAddRows = false;
			this->gridInit->AllowUserToDeleteRows = false;
			this->gridInit->AllowUserToResizeColumns = false;
			this->gridInit->AllowUserToResizeRows = false;
			this->gridInit->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridInit->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->mas });
			this->gridInit->Location = System::Drawing::Point(11, 35);
			this->gridInit->Margin = System::Windows::Forms::Padding(2);
			this->gridInit->Name = L"gridInit";
			this->gridInit->RowHeadersWidth = 51;
			this->gridInit->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gridInit->RowTemplate->Height = 24;
			this->gridInit->Size = System::Drawing::Size(355, 353);
			this->gridInit->TabIndex = 0;
			this->gridInit->CellLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::grid_CellLeave);
			// 
			// mas
			// 
			this->mas->HeaderText = L"0";
			this->mas->MinimumWidth = 6;
			this->mas->Name = L"mas";
			this->mas->Width = 25;
			// 
			// btnAddRow
			// 
			this->btnAddRow->Location = System::Drawing::Point(300, 450);
			this->btnAddRow->Margin = System::Windows::Forms::Padding(2);
			this->btnAddRow->Name = L"btnAddRow";
			this->btnAddRow->Size = System::Drawing::Size(66, 43);
			this->btnAddRow->TabIndex = 1;
			this->btnAddRow->Text = L"�������� ������";
			this->btnAddRow->UseVisualStyleBackColor = true;
			this->btnAddRow->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnRemoveRow
			// 
			this->btnRemoveRow->Location = System::Drawing::Point(300, 518);
			this->btnRemoveRow->Margin = System::Windows::Forms::Padding(2);
			this->btnRemoveRow->Name = L"btnRemoveRow";
			this->btnRemoveRow->Size = System::Drawing::Size(67, 43);
			this->btnRemoveRow->TabIndex = 2;
			this->btnRemoveRow->Text = L"������� ������";
			this->btnRemoveRow->UseVisualStyleBackColor = true;
			this->btnRemoveRow->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// btnAddColumn
			// 
			this->btnAddColumn->Location = System::Drawing::Point(587, 450);
			this->btnAddColumn->Margin = System::Windows::Forms::Padding(2);
			this->btnAddColumn->Name = L"btnAddColumn";
			this->btnAddColumn->Size = System::Drawing::Size(66, 43);
			this->btnAddColumn->TabIndex = 14;
			this->btnAddColumn->Text = L"�������� �������";
			this->btnAddColumn->UseVisualStyleBackColor = true;
			this->btnAddColumn->Click += gcnew System::EventHandler(this, &MyForm::btnAddColumn_Click);
			// 
			// btnRemoveColumn
			// 
			this->btnRemoveColumn->Location = System::Drawing::Point(587, 518);
			this->btnRemoveColumn->Margin = System::Windows::Forms::Padding(2);
			this->btnRemoveColumn->Name = L"btnRemoveColumn";
			this->btnRemoveColumn->Size = System::Drawing::Size(67, 43);
			this->btnRemoveColumn->TabIndex = 15;
			this->btnRemoveColumn->Text = L"������� �������";
			this->btnRemoveColumn->UseVisualStyleBackColor = true;
			this->btnRemoveColumn->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveColumn_Click);
			// 
			// gridResult
			// 
			this->gridResult->AllowUserToAddRows = false;
			this->gridResult->AllowUserToDeleteRows = false;
			this->gridResult->AllowUserToResizeColumns = false;
			this->gridResult->AllowUserToResizeRows = false;
			this->gridResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->gridResult->Location = System::Drawing::Point(587, 35);
			this->gridResult->Margin = System::Windows::Forms::Padding(2);
			this->gridResult->Name = L"gridResult";
			this->gridResult->ReadOnly = true;
			this->gridResult->RowHeadersWidth = 51;
			this->gridResult->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gridResult->RowTemplate->Height = 24;
			this->gridResult->Size = System::Drawing::Size(355, 353);
			this->gridResult->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"0";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 25;
			// 
			// btnCalc
			// 
			this->btnCalc->Location = System::Drawing::Point(397, 450);
			this->btnCalc->Name = L"btnCalc";
			this->btnCalc->Size = System::Drawing::Size(165, 103);
			this->btnCalc->TabIndex = 17;
			this->btnCalc->Text = L"���������";
			this->btnCalc->UseVisualStyleBackColor = true;
			this->btnCalc->Click += gcnew System::EventHandler(this, &MyForm::btnCalc_Click);
			// 
			// gridToChange
			// 
			this->gridToChange->AllowUserToAddRows = false;
			this->gridToChange->AllowUserToDeleteRows = false;
			this->gridToChange->AllowUserToResizeColumns = false;
			this->gridToChange->AllowUserToResizeRows = false;
			this->gridToChange->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridToChange->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->gridToChange->Location = System::Drawing::Point(370, 35);
			this->gridToChange->Margin = System::Windows::Forms::Padding(2);
			this->gridToChange->Name = L"gridToChange";
			this->gridToChange->RowHeadersWidth = 51;
			this->gridToChange->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gridToChange->RowTemplate->Height = 24;
			this->gridToChange->Size = System::Drawing::Size(213, 353);
			this->gridToChange->TabIndex = 18;
			this->gridToChange->CellLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::gridToChange_CellLeave);
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"0";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 25;
			// 
			// taskLabel
			// 
			this->taskLabel->Location = System::Drawing::Point(21, 511);
			this->taskLabel->Name = L"taskLabel";
			this->taskLabel->Size = System::Drawing::Size(237, 50);
			this->taskLabel->TabIndex = 19;
			this->taskLabel->Text = L"�������: ��� �������� ������� �������� �������� X. (��������� �������� ������� ��"
				L"�������� � ����.";
			// 
			// xLabel
			// 
			this->xLabel->Location = System::Drawing::Point(454, 401);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(62, 23);
			this->xLabel->TabIndex = 20;
			this->xLabel->Text = L"������� X";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(736, 401);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(59, 13);
			this->resultLabel->TabIndex = 21;
			this->resultLabel->Text = L"���������";
			// 
			// initLabel
			// 
			this->initLabel->AutoSize = true;
			this->initLabel->Location = System::Drawing::Point(132, 401);
			this->initLabel->Name = L"initLabel";
			this->initLabel->Size = System::Drawing::Size(102, 13);
			this->initLabel->TabIndex = 22;
			this->initLabel->Text = L"�������� �������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 603);
			this->Controls->Add(this->initLabel);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->xLabel);
			this->Controls->Add(this->taskLabel);
			this->Controls->Add(this->gridToChange);
			this->Controls->Add(this->btnCalc);
			this->Controls->Add(this->gridResult);
			this->Controls->Add(this->btnRemoveColumn);
			this->Controls->Add(this->btnAddColumn);
			this->Controls->Add(this->btnRemoveRow);
			this->Controls->Add(this->btnAddRow);
			this->Controls->Add(this->gridInit);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"������� \"�����\"";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridInit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridToChange))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::set<std::pair<int, int>>* WrongCells = new std::set<std::pair<int, int>>(); // ��� �������� ����� ��� ����� �������
		std::set<std::pair<int, int>>* WrongToChangeCells = new std::set<std::pair<int, int>>(); // ��� �������� ����� ��� ���������� �������

		void ClearOutput() { // ������� �������
			for (int i = 0; i < this->gridResult->Rows->Count; ++i) {
				for (int j = 0; j < this->gridResult->Columns->Count; ++j) {
					gridResult->Rows[i]->Cells[j]->Value = "";
				}
			}
		}

		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) { // ������� ��� ������ ���������� ����
			this->gridInit->Rows->Add(1);
			this->gridResult->Rows->Add(1);
			this->gridToChange->Rows->Add(1);
		}

		private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) { // ������� ��� ������ �������� ����
			if (this->gridInit->Rows->Count == 0) return;

			if (!this->gridInit->CurrentRow->IsNewRow) {
				int i = this->gridInit->CurrentRow->Index;


				this->gridInit->Rows->Remove(this->gridInit->Rows[i]);
				this->gridResult->Rows->Remove(this->gridResult->Rows[i]);
				this->gridToChange->Rows->Remove(this->gridToChange->Rows[i]);
			}
		}
		private: System::Void btnAddColumn_Click(System::Object^ sender, System::EventArgs^ e) { // ������� ��� ������ �������� �������
			DataGridViewTextBoxColumn^ myC1 = gcnew DataGridViewTextBoxColumn(); // ������� ��� ����� ������ �������
			DataGridViewTextBoxColumn^ myC2 = gcnew DataGridViewTextBoxColumn();

			myC1->HeaderText = System::Convert::ToString(gridInit->Columns->Count);
			myC1->Width = 25;
			myC2->HeaderText = System::Convert::ToString(gridInit->Columns->Count);
			myC2->Width = 25;

			this->gridInit->Columns->Add(myC1);
			this->gridResult->Columns->Add(myC2);
		}
		private: System::Void btnRemoveColumn_Click(System::Object^ sender, System::EventArgs^ e) { // ������� ��� ������ �������� �������
			if (gridInit->Columns->Count > 1) {
				this->gridInit->Columns->RemoveAt(gridInit->Columns->Count - 1);
				this->gridResult->Columns->RemoveAt(gridResult->Columns->Count - 1);
			}
		}
		private: System::Void btnCalc_Click(System::Object^ sender, System::EventArgs^ e) { // ������� ������ ����������� ��������
			ClearOutput();
			bool ok1 = true;
			bool ok2 = true;
			if (WrongCells->size() > 0) {
				errorProvider1->SetError(gridInit, "�������� ��� ��� ����� ��� ���������� �����");
				ok1 = false;
			}
			if (WrongToChangeCells->size() > 0) {
				errorProvider1->SetError(gridToChange, "�������� ��� ��� ����� ��� ���������� �����");
				ok2 = false;
			}
			if (ok1) {
				errorProvider1->SetError(gridInit, String::Empty);
			}
			if (ok2) {
				errorProvider1->SetError(gridToChange, String::Empty);
			}
			if (!ok1 || !ok2) {
				return;
			}	


			for (int i = 0; i < this->gridInit->Rows->Count; ++i) {
				for (int j = 0; j < this->gridInit->Columns->Count; ++j) {
					if (j % 2 == 1) {
						for (int t = 0; t < this->gridInit->Rows->Count; ++t) {
							
							gridResult->Rows[t]->Cells[j]->Value = gridToChange->Rows[t]->Cells[0]->Value; // �������� ���������� ���������� ������
						}
					}
					else {
						for (int t = 0; t < this->gridInit->Rows->Count; ++t) {

							gridResult->Rows[t]->Cells[j]->Value = gridInit->Rows[t]->Cells[0]->Value; // ����� ���������� �������� ������
						}
					}
				}
			}
		}
		private: System::Void grid_CellLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) { // ��������� ������ ������ �� ������ �������� �������
			int val = 0;
			System::String^ Value = System::Convert::ToString(this->gridInit->Rows[gridInit->CurrentRow->Index]->Cells[gridInit->CurrentCell->ColumnIndex]->EditedFormattedValue);

			bool isCorrectValue = Int32::TryParse(Value, val); // ������� �������� � InputNumber ����� �� ������
			if (!isCorrectValue) { // ���� ������ ������� ������ �������
				WrongCells->insert(std::make_pair(gridInit->CurrentRow->Index, gridInit->CurrentCell->ColumnIndex));
			}
			else {
				WrongCells->erase(std::make_pair(gridInit->CurrentRow->Index, gridInit->CurrentCell->ColumnIndex));
			}
		}
	private: System::Void gridToChange_CellLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) { // ��������� ������ ������ �� ������ ���������� �������
		int val = 0;
		System::String^ Value = System::Convert::ToString(this->gridToChange->Rows[gridToChange->CurrentRow->Index]->Cells[0]->EditedFormattedValue);

		bool isCorrectValue = Int32::TryParse(Value, val); // ������� �������� � InputNumber ����� �� ������
		if (!isCorrectValue && (Value != "" && gridToChange->CurrentRow->Index != gridToChange->RowCount)) { // ���� ������ ������� ������ ������� - ������� ������
			WrongToChangeCells->insert(std::make_pair(gridToChange->CurrentRow->Index, gridToChange->CurrentCell->ColumnIndex));
		}
		else {
			WrongToChangeCells->erase(std::make_pair(gridToChange->CurrentRow->Index, gridToChange->CurrentCell->ColumnIndex));
		}
	}
};
}