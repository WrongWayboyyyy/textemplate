#pragma once
#include <set>
#include <iostream>
#include <vector>

using std::set;


namespace MyOwnApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ˜˜˜˜˜˜ ˜˜˜ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ˜˜˜˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜
			//
		}
	protected:
		/// <summary>
		/// ˜˜˜˜˜˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜.
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
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ ResultBtn;
	private: System::Windows::Forms::Button^ OpenFileBtn;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SurnameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MidnameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ExperienceColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PaymentColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PositionColumn;
	private: System::Windows::Forms::TextBox^ ResultTextBox;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::Button^ RmvBtn;
	private: System::Windows::Forms::Button^ AddBtn;
	private: System::Windows::Forms::Button^ SaveGridBtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ TaskLabel;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// ˜˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜ ˜ ˜˜ ˜˜˜˜˜˜˜˜˜ 
		/// ˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜ ˜˜˜˜˜˜ ˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->gridResult = (gcnew System::Windows::Forms::DataGridView());
			this->SurnameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MidnameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ExperienceColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PaymentColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PositionColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ResultBtn = (gcnew System::Windows::Forms::Button());
			this->OpenFileBtn = (gcnew System::Windows::Forms::Button());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->ResultTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->RmvBtn = (gcnew System::Windows::Forms::Button());
			this->SaveGridBtn = (gcnew System::Windows::Forms::Button());
			this->TaskLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->gridResult->AllowUserToResizeRows = false;
			this->gridResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->SurnameColumn,
					this->NameColumn, this->MidnameColumn, this->ExperienceColumn, this->PaymentColumn, this->PositionColumn
			});
			this->gridResult->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnKeystroke;
			this->gridResult->Location = System::Drawing::Point(315, 37);
			this->gridResult->Margin = System::Windows::Forms::Padding(2);
			this->gridResult->Name = L"gridResult";
			this->gridResult->RowHeadersWidth = 51;
			this->gridResult->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gridResult->RowTemplate->Height = 24;
			this->gridResult->Size = System::Drawing::Size(579, 428);
			this->gridResult->TabIndex = 16;
			// 
			// SurnameColumn
			// 
			this->SurnameColumn->HeaderText = L"˜˜˜˜˜˜˜";
			this->SurnameColumn->Name = L"SurnameColumn";
			// 
			// NameColumn
			// 
			this->NameColumn->HeaderText = L"˜˜˜";
			this->NameColumn->Name = L"NameColumn";
			// 
			// MidnameColumn
			// 
			this->MidnameColumn->HeaderText = L"˜˜˜˜˜˜˜˜";
			this->MidnameColumn->Name = L"MidnameColumn";
			// 
			// ExperienceColumn
			// 
			this->ExperienceColumn->HeaderText = L"˜˜˜˜";
			this->ExperienceColumn->Name = L"ExperienceColumn";
			this->ExperienceColumn->Width = 50;
			// 
			// PaymentColumn
			// 
			this->PaymentColumn->HeaderText = L"˜˜˜˜˜";
			this->PaymentColumn->Name = L"PaymentColumn";
			this->PaymentColumn->Width = 75;
			// 
			// PositionColumn
			// 
			this->PositionColumn->HeaderText = L"˜˜˜˜˜˜˜˜˜";
			this->PositionColumn->Name = L"PositionColumn";
			this->PositionColumn->Width = 150;
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(551, 481);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(111, 13);
			this->resultLabel->TabIndex = 21;
			this->resultLabel->Text = L"˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜";
			// 
			// ResultBtn
			// 
			this->ResultBtn->Location = System::Drawing::Point(206, 291);
			this->ResultBtn->Name = L"ResultBtn";
			this->ResultBtn->Size = System::Drawing::Size(75, 43);
			this->ResultBtn->TabIndex = 28;
			this->ResultBtn->Text = L"˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜";
			this->ResultBtn->UseVisualStyleBackColor = true;
			this->ResultBtn->Click += gcnew System::EventHandler(this, &MyForm::ResultBtn_Click);
			// 
			// OpenFileBtn
			// 
			this->OpenFileBtn->Location = System::Drawing::Point(205, 169);
			this->OpenFileBtn->Name = L"OpenFileBtn";
			this->OpenFileBtn->Size = System::Drawing::Size(76, 53);
			this->OpenFileBtn->TabIndex = 33;
			this->OpenFileBtn->Text = L"˜˜˜˜˜˜˜ ˜˜˜˜";
			this->OpenFileBtn->UseVisualStyleBackColor = true;
			this->OpenFileBtn->Click += gcnew System::EventHandler(this, &MyForm::OpenFileBtn_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜ (*.txt)|*.txt|˜˜˜ ˜˜˜˜˜ (*.*)|*.*";
			this->openFileDialog->Title = L"˜˜˜˜˜˜˜ ˜˜˜˜";
			// 
			// ResultTextBox
			// 
			this->ResultTextBox->Location = System::Drawing::Point(206, 252);
			this->ResultTextBox->Name = L"ResultTextBox";
			this->ResultTextBox->Size = System::Drawing::Size(75, 20);
			this->ResultTextBox->TabIndex = 35;
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->Filter = L"˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜ (*.txt)|*.txt|˜˜˜ ˜˜˜˜˜ (*.*)|*.*";
			// 
			// AddBtn
			// 
			this->AddBtn->Location = System::Drawing::Point(451, 493);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(94, 44);
			this->AddBtn->TabIndex = 36;
			this->AddBtn->Text = L"˜˜˜˜˜˜˜˜ ˜˜˜";
			this->AddBtn->UseVisualStyleBackColor = true;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MyForm::AddBtn_Click);
			// 
			// RmvBtn
			// 
			this->RmvBtn->Location = System::Drawing::Point(668, 493);
			this->RmvBtn->Name = L"RmvBtn";
			this->RmvBtn->Size = System::Drawing::Size(94, 43);
			this->RmvBtn->TabIndex = 37;
			this->RmvBtn->Text = L"˜˜˜˜˜˜˜ ˜˜˜";
			this->RmvBtn->UseVisualStyleBackColor = true;
			this->RmvBtn->Click += gcnew System::EventHandler(this, &MyForm::RmvBtn_Click);
			// 
			// SaveGridBtn
			// 
			this->SaveGridBtn->Location = System::Drawing::Point(205, 91);
			this->SaveGridBtn->Name = L"SaveGridBtn";
			this->SaveGridBtn->Size = System::Drawing::Size(76, 53);
			this->SaveGridBtn->TabIndex = 38;
			this->SaveGridBtn->Text = L"˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜ ˜ ˜˜˜˜";
			this->SaveGridBtn->UseVisualStyleBackColor = true;
			this->SaveGridBtn->Click += gcnew System::EventHandler(this, &MyForm::SaveGridBtn_Click);
			// 
			// TaskLabel
			// 
			this->TaskLabel->AutoSize = true;
			this->TaskLabel->Location = System::Drawing::Point(21, 481);
			this->TaskLabel->Name = L"TaskLabel";
			this->TaskLabel->Size = System::Drawing::Size(368, 13);
			this->TaskLabel->TabIndex = 39;
			this->TaskLabel->Text = L"˜ ˜˜˜˜˜ ˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜, ˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 509);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 13);
			this->label1->TabIndex = 40;
			this->label1->Text = L"˜˜˜˜˜˜ ˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜ Input.txt, ˜˜˜˜˜˜˜˜˜ ˜ ˜˜˜˜˜";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 603);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TaskLabel);
			this->Controls->Add(this->SaveGridBtn);
			this->Controls->Add(this->RmvBtn);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->ResultTextBox);
			this->Controls->Add(this->OpenFileBtn);
			this->Controls->Add(this->ResultBtn);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->gridResult);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"˜˜˜˜˜˜˜ \"˜˜˜˜˜\"";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void CreateEmptyMatrix(DataGridView^ grid, int x) { // ˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜˜
			while (grid->Rows->Count > 0) {
				grid->Rows->Remove(grid->Rows[grid->Rows->Count - 1]);
			}
			grid->Rows->Add(x);
		}

		void ClearOutput() { // ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜
			errorProvider1->SetError(OpenFileBtn, System::String::Empty);
			errorProvider1->SetError(ResultTextBox, System::String::Empty);
			errorProvider1->SetError(ResultBtn, System::String::Empty);
		}

		void WriteRow(int i, System::IO::StreamWriter^ sw) {

			for (int j = 0; j < gridResult->ColumnCount; ++j) {
				sw->Write(gridResult->Rows[i]->Cells[j]->Value + " "); 
			}
		}
		private: System::Void ResultBtn_Click(System::Object^ sender, System::EventArgs^ e) {
				ClearOutput();
				bool ok = GridValidation(gridResult); // ˜˜˜˜˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜
				bool ok2 = (ResultTextBox->Text != "");
				if (!ok) {
					errorProvider1->SetError(ResultBtn, "˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜");
				}
				if (!ok2) {
					errorProvider1->SetError(ResultTextBox, "˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜");
				}
				if (!ok || !ok2)
					return;


				std::vector<int> vec;
				for (int i = 0; i < gridResult->RowCount; ++i) { // ˜˜˜˜˜˜ ˜˜˜˜, ˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜
					if (gridResult->Rows[i]->Cells[5]->Value->ToString() == ResultTextBox->Text) {
						vec.push_back(i);
					}
				}

				System::IO::Stream^ myStream;
				if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					if ((myStream = saveFileDialog->OpenFile()) != nullptr) { // ˜˜˜˜˜˜ ˜˜˜˜˜ ˜ ˜˜˜˜˜˜
						System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(myStream,
							System::Text::Encoding::GetEncoding(65001)); // UTF-8
						for (int cur : vec) { // ˜˜˜ ˜˜˜˜ ˜˜˜˜˜, ˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜ ˜˜˜˜˜˜˜˜˜ - ˜˜˜˜˜˜˜ ˜˜ ˜ ˜˜˜˜.
							WriteRow(cur, sw);
							sw->WriteLine(); // ˜˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜ ˜˜˜˜˜˜
						}
						sw->Close(); // ˜˜˜˜˜˜˜ ˜˜˜˜˜
					}
				}
				
		}
		private: System::Void OpenFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			System::IO::Stream^ myStream; // ˜˜˜˜˜
			if (this->openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // ˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜
				CreateEmptyMatrix(gridResult, 1);
				if ((myStream = openFileDialog->OpenFile()) != nullptr) { // ˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜ ˜ ˜˜˜˜˜˜
					System::IO::StreamReader^ sw = gcnew System::IO::StreamReader(myStream, System::Text::Encoding::
						GetEncoding(65001)); // UTF-8
					System::String^ s = "";
					int innerIdx = 0;
					while ((s = sw->ReadLine()) != nullptr && s != "") { // ˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜ ˜˜ ˜˜˜˜˜ ˜˜˜˜˜˜
						gridResult->Rows->Add(1); // ˜˜˜˜˜˜˜ ˜˜˜˜˜ ˜˜˜
						int idx = 0;
						int current = 0;
						while (idx != s->Length) { // ˜˜˜˜˜˜˜˜˜˜ ˜˜ ˜˜˜˜ ˜˜˜˜˜˜ ˜ ˜˜˜˜˜˜˜˜ ˜˜˜˜˜ ˜ ˜˜˜˜˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜
							System::String^ currentWord = "";
							while (idx < s->Length && s[idx] != ' ') {
								currentWord += s[idx++];
							}
							if (idx < s->Length && s[idx] == ' ') ++idx;
							gridResult->Rows[innerIdx]->Cells[current++]->Value = currentWord;
							currentWord = "";
						}
						++innerIdx;
					}
					sw->Close(); // ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜
				}
			}
		}
		private: bool GridValidation(DataGridView^ grid) { // ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜
			for (int i = 0; i < gridResult->RowCount; ++i) {
				for (int j = 0; j < gridResult->ColumnCount; ++j) {
					if (gridResult->Rows[i]->Cells[j]->Value == nullptr)
						return false;
					String^ s = gridResult->Rows[i]->Cells[j]->Value->ToString();
					int tmp;
					bool ok;
					if (j == 3 || j == 4) {
						ok = System::Int32::TryParse(s, tmp); // ˜˜˜˜ ˜˜˜ ˜˜˜˜, ˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜ ˜˜˜˜˜ - ˜˜˜˜˜˜˜˜ ˜˜˜
					}
					else { // ˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜. ˜˜˜˜˜˜˜˜, ˜˜˜ ˜˜˜ ˜˜ ˜˜˜˜˜˜˜˜ ˜˜˜˜.
						String^ toBeChecked = gridResult->Rows[i]->Cells[j]->Value->ToString();
						if (toBeChecked == "")
							return false;
						for (int i = 0; i < toBeChecked->Length; ++i) {
							if (toBeChecked[i] >= '0' && toBeChecked[i] <= '9') {
								ok = false;
								break;
							}
						}
					}
					if (!ok)
						return false;
				}
			}
			return true;
		}
		private: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			gridResult->Rows->Add(1);
		}
		private: System::Void RmvBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			gridResult->Rows->RemoveAt(gridResult->Rows->Count - 1);
		}
		private: System::Void SaveGridBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearOutput();
			bool ok = GridValidation(gridResult);
			if (!ok) {
				errorProvider1->SetError(ResultBtn, "˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜");
			}
			if (!ok)
				return;

			System::IO::Stream^ myStream;
			if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((myStream = saveFileDialog->OpenFile()) != nullptr) {
					System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(myStream,
						System::Text::Encoding::GetEncoding(65001));
					for (int i = 0; i < gridResult->ColumnCount; ++i) {
						WriteRow(i, sw);
						sw->WriteLine();
					}
					sw->Close();
				}
			}

		}
	};
};