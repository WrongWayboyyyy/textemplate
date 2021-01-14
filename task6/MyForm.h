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
	private: System::Windows::Forms::DataGridView^ grid1;
	protected:
	private: System::Windows::Forms::Button^ Grid1_btnAddRow;
	private: System::Windows::Forms::Button^ Grid1_btnRmvRow;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ Grid1_btnRmvCol;
	private: System::Windows::Forms::Button^ Grid1_btnAddCol;
	private: System::Windows::Forms::DataGridView^ gridResult;
	private: System::Windows::Forms::DataGridView^ grid2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mas;
	private: System::Windows::Forms::Label^ initLabel;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::RadioButton^ Grid1_MatrixRBtn;
	private: System::Windows::Forms::RadioButton^ Grid2_NumRBtn;
	private: System::Windows::Forms::RadioButton^ Grid2_VectorRBtn;
	private: System::Windows::Forms::RadioButton^ Grid2_MatrixRBtn;
	private: System::Windows::Forms::RadioButton^ Grid1_NumRBtn;
	private: System::Windows::Forms::Panel^ Grid1_panel;
	private: System::Windows::Forms::Button^ Grid2_btnAddCol;
	private: System::Windows::Forms::Button^ Grid2_btnRmvCol;
	private: System::Windows::Forms::Button^ Grid2_btnRmvRow;
	private: System::Windows::Forms::Button^ Grid2_btnAddRow;
	private: System::Windows::Forms::Panel^ Grid2_panel;
	private: System::Windows::Forms::Panel^ Result_Group;


	private: System::Windows::Forms::RadioButton^ Multiply_RBtn;
	private: System::Windows::Forms::RadioButton^ Difference_RBtn;
	private: System::Windows::Forms::RadioButton^ Sum_RBtn;
	private: System::Windows::Forms::RadioButton^ Rank_RBtn;
	private: System::Windows::Forms::RadioButton^ Transposition_RBtn;
	private: System::Windows::Forms::RadioButton^ Grid1_VectorRBtn;
	private: System::Windows::Forms::Panel^ MatrixGroup1;
	private: System::Windows::Forms::Button^ calcBtn;
	private: System::Windows::Forms::RadioButton^ Det_RBtn;
	private: System::Windows::Forms::Button^ CreateMatrix1_Btn;
	private: System::Windows::Forms::Label^ Scale_label1;



	private: System::Windows::Forms::TextBox^ M1_TextBox;

	private: System::Windows::Forms::TextBox^ N1_TextBox;
	private: System::Windows::Forms::Button^ CreateMatrix2_Btn;
	private: System::Windows::Forms::Label^ Scale_label2;




	private: System::Windows::Forms::TextBox^ M2_TextBox;

	private: System::Windows::Forms::TextBox^ N2_TextBox;
	private: System::Windows::Forms::RadioButton^ VectorMultiply_RBtn;
	private: System::Windows::Forms::RadioButton^ ScalarMultiply_RBtn;
	private: System::Windows::Forms::Panel^ MatrixGroup2;



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
			this->grid1 = (gcnew System::Windows::Forms::DataGridView());
			this->mas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Grid1_btnAddRow = (gcnew System::Windows::Forms::Button());
			this->Grid1_btnRmvRow = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->Grid1_btnAddCol = (gcnew System::Windows::Forms::Button());
			this->Grid1_btnRmvCol = (gcnew System::Windows::Forms::Button());
			this->gridResult = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->initLabel = (gcnew System::Windows::Forms::Label());
			this->Grid1_MatrixRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Grid1_VectorRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Grid1_NumRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Grid2_MatrixRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Grid2_VectorRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Grid2_NumRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Grid1_panel = (gcnew System::Windows::Forms::Panel());
			this->Grid2_panel = (gcnew System::Windows::Forms::Panel());
			this->Grid2_btnAddRow = (gcnew System::Windows::Forms::Button());
			this->Grid2_btnRmvRow = (gcnew System::Windows::Forms::Button());
			this->Grid2_btnRmvCol = (gcnew System::Windows::Forms::Button());
			this->Grid2_btnAddCol = (gcnew System::Windows::Forms::Button());
			this->Result_Group = (gcnew System::Windows::Forms::Panel());
			this->VectorMultiply_RBtn = (gcnew System::Windows::Forms::RadioButton());
			this->ScalarMultiply_RBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Det_RBtn = (gcnew System::Windows::Forms::RadioButton());
			this->calcBtn = (gcnew System::Windows::Forms::Button());
			this->Multiply_RBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Difference_RBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Sum_RBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Rank_RBtn = (gcnew System::Windows::Forms::RadioButton());
			this->Transposition_RBtn = (gcnew System::Windows::Forms::RadioButton());
			this->MatrixGroup1 = (gcnew System::Windows::Forms::Panel());
			this->CreateMatrix1_Btn = (gcnew System::Windows::Forms::Button());
			this->Scale_label1 = (gcnew System::Windows::Forms::Label());
			this->M1_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->N1_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->CreateMatrix2_Btn = (gcnew System::Windows::Forms::Button());
			this->Scale_label2 = (gcnew System::Windows::Forms::Label());
			this->M2_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->N2_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->MatrixGroup2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResult))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid2))->BeginInit();
			this->Grid1_panel->SuspendLayout();
			this->Grid2_panel->SuspendLayout();
			this->Result_Group->SuspendLayout();
			this->MatrixGroup1->SuspendLayout();
			this->MatrixGroup2->SuspendLayout();
			this->SuspendLayout();
			// 
			// grid1
			// 
			this->grid1->AllowUserToAddRows = false;
			this->grid1->AllowUserToDeleteRows = false;
			this->grid1->AllowUserToResizeColumns = false;
			this->grid1->AllowUserToResizeRows = false;
			this->grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grid1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->mas });
			this->grid1->Location = System::Drawing::Point(2, 2);
			this->grid1->Margin = System::Windows::Forms::Padding(2);
			this->grid1->Name = L"grid1";
			this->grid1->RowHeadersWidth = 51;
			this->grid1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->grid1->RowTemplate->Height = 24;
			this->grid1->Size = System::Drawing::Size(256, 240);
			this->grid1->TabIndex = 0;
			// 
			// mas
			// 
			this->mas->HeaderText = L"0";
			this->mas->MinimumWidth = 6;
			this->mas->Name = L"mas";
			this->mas->Width = 25;
			// 
			// Grid1_btnAddRow
			// 
			this->Grid1_btnAddRow->Location = System::Drawing::Point(23, 287);
			this->Grid1_btnAddRow->Margin = System::Windows::Forms::Padding(2);
			this->Grid1_btnAddRow->Name = L"Grid1_btnAddRow";
			this->Grid1_btnAddRow->Size = System::Drawing::Size(66, 43);
			this->Grid1_btnAddRow->TabIndex = 1;
			this->Grid1_btnAddRow->Text = L"Добавить строку";
			this->Grid1_btnAddRow->UseVisualStyleBackColor = true;
			this->Grid1_btnAddRow->Click += gcnew System::EventHandler(this, &MyForm::Grid1_btnAddRow_Click);
			// 
			// Grid1_btnRmvRow
			// 
			this->Grid1_btnRmvRow->Location = System::Drawing::Point(23, 351);
			this->Grid1_btnRmvRow->Margin = System::Windows::Forms::Padding(2);
			this->Grid1_btnRmvRow->Name = L"Grid1_btnRmvRow";
			this->Grid1_btnRmvRow->Size = System::Drawing::Size(67, 43);
			this->Grid1_btnRmvRow->TabIndex = 2;
			this->Grid1_btnRmvRow->Text = L"Удалить строку";
			this->Grid1_btnRmvRow->UseVisualStyleBackColor = true;
			this->Grid1_btnRmvRow->Click += gcnew System::EventHandler(this, &MyForm::Grid1_btnRmvRow_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Grid1_btnAddCol
			// 
			this->Grid1_btnAddCol->Location = System::Drawing::Point(157, 287);
			this->Grid1_btnAddCol->Margin = System::Windows::Forms::Padding(2);
			this->Grid1_btnAddCol->Name = L"Grid1_btnAddCol";
			this->Grid1_btnAddCol->Size = System::Drawing::Size(66, 43);
			this->Grid1_btnAddCol->TabIndex = 14;
			this->Grid1_btnAddCol->Text = L"Добавить столбец";
			this->Grid1_btnAddCol->UseVisualStyleBackColor = true;
			this->Grid1_btnAddCol->Click += gcnew System::EventHandler(this, &MyForm::Grid1_btnAddCol_Click);
			// 
			// Grid1_btnRmvCol
			// 
			this->Grid1_btnRmvCol->Location = System::Drawing::Point(157, 351);
			this->Grid1_btnRmvCol->Margin = System::Windows::Forms::Padding(2);
			this->Grid1_btnRmvCol->Name = L"Grid1_btnRmvCol";
			this->Grid1_btnRmvCol->Size = System::Drawing::Size(67, 43);
			this->Grid1_btnRmvCol->TabIndex = 15;
			this->Grid1_btnRmvCol->Text = L"Удалить столбец";
			this->Grid1_btnRmvCol->UseVisualStyleBackColor = true;
			this->Grid1_btnRmvCol->Click += gcnew System::EventHandler(this, &MyForm::Grid1_btnRmvCol_Click);
			// 
			// gridResult
			// 
			this->gridResult->AllowUserToAddRows = false;
			this->gridResult->AllowUserToDeleteRows = false;
			this->gridResult->AllowUserToResizeColumns = false;
			this->gridResult->AllowUserToResizeRows = false;
			this->gridResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->gridResult->Location = System::Drawing::Point(622, 35);
			this->gridResult->Margin = System::Windows::Forms::Padding(2);
			this->gridResult->Name = L"gridResult";
			this->gridResult->ReadOnly = true;
			this->gridResult->RowHeadersWidth = 51;
			this->gridResult->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gridResult->RowTemplate->Height = 24;
			this->gridResult->Size = System::Drawing::Size(261, 240);
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
			// grid2
			// 
			this->grid2->AllowUserToAddRows = false;
			this->grid2->AllowUserToDeleteRows = false;
			this->grid2->AllowUserToResizeColumns = false;
			this->grid2->AllowUserToResizeRows = false;
			this->grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grid2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->grid2->Location = System::Drawing::Point(6, 2);
			this->grid2->Margin = System::Windows::Forms::Padding(2);
			this->grid2->Name = L"grid2";
			this->grid2->RowHeadersWidth = 51;
			this->grid2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->grid2->RowTemplate->Height = 24;
			this->grid2->Size = System::Drawing::Size(261, 240);
			this->grid2->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"0";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 25;
			// 
			// xLabel
			// 
			this->xLabel->Location = System::Drawing::Point(90, 250);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(79, 23);
			this->xLabel->TabIndex = 20;
			this->xLabel->Text = L"Матрица 2";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(733, 287);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(59, 13);
			this->resultLabel->TabIndex = 21;
			this->resultLabel->Text = L"Результат";
			// 
			// initLabel
			// 
			this->initLabel->AutoSize = true;
			this->initLabel->Location = System::Drawing::Point(85, 254);
			this->initLabel->Name = L"initLabel";
			this->initLabel->Size = System::Drawing::Size(60, 13);
			this->initLabel->TabIndex = 22;
			this->initLabel->Text = L"Матрица 1";
			// 
			// Grid1_MatrixRBtn
			// 
			this->Grid1_MatrixRBtn->AutoSize = true;
			this->Grid1_MatrixRBtn->Checked = true;
			this->Grid1_MatrixRBtn->Location = System::Drawing::Point(6, 0);
			this->Grid1_MatrixRBtn->Name = L"Grid1_MatrixRBtn";
			this->Grid1_MatrixRBtn->Size = System::Drawing::Size(69, 17);
			this->Grid1_MatrixRBtn->TabIndex = 23;
			this->Grid1_MatrixRBtn->TabStop = true;
			this->Grid1_MatrixRBtn->Text = L"Матрица";
			this->Grid1_MatrixRBtn->UseVisualStyleBackColor = true;
			this->Grid1_MatrixRBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Grid1_MatrixRBtn_CheckedChanged);
			// 
			// Grid1_VectorRBtn
			// 
			this->Grid1_VectorRBtn->AutoSize = true;
			this->Grid1_VectorRBtn->Location = System::Drawing::Point(6, 23);
			this->Grid1_VectorRBtn->Name = L"Grid1_VectorRBtn";
			this->Grid1_VectorRBtn->Size = System::Drawing::Size(61, 17);
			this->Grid1_VectorRBtn->TabIndex = 24;
			this->Grid1_VectorRBtn->Text = L"Вектор";
			this->Grid1_VectorRBtn->UseVisualStyleBackColor = true;
			this->Grid1_VectorRBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Grid1_VectorRBtn_CheckedChanged);
			// 
			// Grid1_NumRBtn
			// 
			this->Grid1_NumRBtn->AutoSize = true;
			this->Grid1_NumRBtn->Location = System::Drawing::Point(6, 49);
			this->Grid1_NumRBtn->Name = L"Grid1_NumRBtn";
			this->Grid1_NumRBtn->Size = System::Drawing::Size(57, 17);
			this->Grid1_NumRBtn->TabIndex = 25;
			this->Grid1_NumRBtn->Text = L"Число";
			this->Grid1_NumRBtn->UseVisualStyleBackColor = true;
			this->Grid1_NumRBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Grid1_NumRBtn_CheckedChanged);
			// 
			// Grid2_MatrixRBtn
			// 
			this->Grid2_MatrixRBtn->AutoSize = true;
			this->Grid2_MatrixRBtn->Checked = true;
			this->Grid2_MatrixRBtn->Location = System::Drawing::Point(6, 3);
			this->Grid2_MatrixRBtn->Name = L"Grid2_MatrixRBtn";
			this->Grid2_MatrixRBtn->Size = System::Drawing::Size(69, 17);
			this->Grid2_MatrixRBtn->TabIndex = 27;
			this->Grid2_MatrixRBtn->TabStop = true;
			this->Grid2_MatrixRBtn->Text = L"Матрица";
			this->Grid2_MatrixRBtn->UseVisualStyleBackColor = true;
			this->Grid2_MatrixRBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Grid2_MatrixRBtn_CheckedChanged);
			// 
			// Grid2_VectorRBtn
			// 
			this->Grid2_VectorRBtn->AutoSize = true;
			this->Grid2_VectorRBtn->Location = System::Drawing::Point(6, 26);
			this->Grid2_VectorRBtn->Name = L"Grid2_VectorRBtn";
			this->Grid2_VectorRBtn->Size = System::Drawing::Size(61, 17);
			this->Grid2_VectorRBtn->TabIndex = 28;
			this->Grid2_VectorRBtn->Text = L"Вектор";
			this->Grid2_VectorRBtn->UseVisualStyleBackColor = true;
			this->Grid2_VectorRBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Grid2_VectorRBtn_CheckedChanged);
			// 
			// Grid2_NumRBtn
			// 
			this->Grid2_NumRBtn->AutoSize = true;
			this->Grid2_NumRBtn->Location = System::Drawing::Point(6, 49);
			this->Grid2_NumRBtn->Name = L"Grid2_NumRBtn";
			this->Grid2_NumRBtn->Size = System::Drawing::Size(57, 17);
			this->Grid2_NumRBtn->TabIndex = 29;
			this->Grid2_NumRBtn->Text = L"Число";
			this->Grid2_NumRBtn->UseVisualStyleBackColor = true;
			this->Grid2_NumRBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Grid2_NumRBtn_CheckedChanged);
			// 
			// Grid1_panel
			// 
			this->Grid1_panel->Controls->Add(this->Grid1_MatrixRBtn);
			this->Grid1_panel->Controls->Add(this->Grid1_VectorRBtn);
			this->Grid1_panel->Controls->Add(this->Grid1_NumRBtn);
			this->Grid1_panel->Location = System::Drawing::Point(3, 416);
			this->Grid1_panel->Name = L"Grid1_panel";
			this->Grid1_panel->Size = System::Drawing::Size(133, 88);
			this->Grid1_panel->TabIndex = 30;
			// 
			// Grid2_panel
			// 
			this->Grid2_panel->Controls->Add(this->Grid2_MatrixRBtn);
			this->Grid2_panel->Controls->Add(this->Grid2_VectorRBtn);
			this->Grid2_panel->Controls->Add(this->Grid2_NumRBtn);
			this->Grid2_panel->Location = System::Drawing::Point(3, 411);
			this->Grid2_panel->Name = L"Grid2_panel";
			this->Grid2_panel->Size = System::Drawing::Size(139, 82);
			this->Grid2_panel->TabIndex = 27;
			// 
			// Grid2_btnAddRow
			// 
			this->Grid2_btnAddRow->Location = System::Drawing::Point(27, 283);
			this->Grid2_btnAddRow->Margin = System::Windows::Forms::Padding(2);
			this->Grid2_btnAddRow->Name = L"Grid2_btnAddRow";
			this->Grid2_btnAddRow->Size = System::Drawing::Size(66, 43);
			this->Grid2_btnAddRow->TabIndex = 31;
			this->Grid2_btnAddRow->Text = L"Добавить строку";
			this->Grid2_btnAddRow->UseVisualStyleBackColor = true;
			this->Grid2_btnAddRow->Click += gcnew System::EventHandler(this, &MyForm::Grid2_btnAddRow_Click);
			// 
			// Grid2_btnRmvRow
			// 
			this->Grid2_btnRmvRow->Location = System::Drawing::Point(26, 347);
			this->Grid2_btnRmvRow->Margin = System::Windows::Forms::Padding(2);
			this->Grid2_btnRmvRow->Name = L"Grid2_btnRmvRow";
			this->Grid2_btnRmvRow->Size = System::Drawing::Size(67, 43);
			this->Grid2_btnRmvRow->TabIndex = 33;
			this->Grid2_btnRmvRow->Text = L"Удалить строку";
			this->Grid2_btnRmvRow->UseVisualStyleBackColor = true;
			this->Grid2_btnRmvRow->Click += gcnew System::EventHandler(this, &MyForm::Grid2_btnRmvRow_Click);
			// 
			// Grid2_btnRmvCol
			// 
			this->Grid2_btnRmvCol->Location = System::Drawing::Point(161, 347);
			this->Grid2_btnRmvCol->Margin = System::Windows::Forms::Padding(2);
			this->Grid2_btnRmvCol->Name = L"Grid2_btnRmvCol";
			this->Grid2_btnRmvCol->Size = System::Drawing::Size(67, 43);
			this->Grid2_btnRmvCol->TabIndex = 34;
			this->Grid2_btnRmvCol->Text = L"Удалить столбец";
			this->Grid2_btnRmvCol->UseVisualStyleBackColor = true;
			this->Grid2_btnRmvCol->Click += gcnew System::EventHandler(this, &MyForm::Grid2_btnRmvCol_Click);
			// 
			// Grid2_btnAddCol
			// 
			this->Grid2_btnAddCol->Location = System::Drawing::Point(161, 283);
			this->Grid2_btnAddCol->Margin = System::Windows::Forms::Padding(2);
			this->Grid2_btnAddCol->Name = L"Grid2_btnAddCol";
			this->Grid2_btnAddCol->Size = System::Drawing::Size(66, 43);
			this->Grid2_btnAddCol->TabIndex = 35;
			this->Grid2_btnAddCol->Text = L"Добавить столбец";
			this->Grid2_btnAddCol->UseVisualStyleBackColor = true;
			this->Grid2_btnAddCol->Click += gcnew System::EventHandler(this, &MyForm::Grid2_btnAddCol_Click);
			// 
			// Result_Group
			// 
			this->Result_Group->Controls->Add(this->VectorMultiply_RBtn);
			this->Result_Group->Controls->Add(this->ScalarMultiply_RBtn);
			this->Result_Group->Controls->Add(this->Det_RBtn);
			this->Result_Group->Controls->Add(this->calcBtn);
			this->Result_Group->Controls->Add(this->Multiply_RBtn);
			this->Result_Group->Controls->Add(this->Difference_RBtn);
			this->Result_Group->Controls->Add(this->Sum_RBtn);
			this->Result_Group->Controls->Add(this->Rank_RBtn);
			this->Result_Group->Controls->Add(this->Transposition_RBtn);
			this->Result_Group->Location = System::Drawing::Point(622, 309);
			this->Result_Group->Name = L"Result_Group";
			this->Result_Group->Size = System::Drawing::Size(261, 257);
			this->Result_Group->TabIndex = 30;
			// 
			// VectorMultiply_RBtn
			// 
			this->VectorMultiply_RBtn->AutoSize = true;
			this->VectorMultiply_RBtn->Location = System::Drawing::Point(12, 171);
			this->VectorMultiply_RBtn->Name = L"VectorMultiply_RBtn";
			this->VectorMultiply_RBtn->Size = System::Drawing::Size(235, 17);
			this->VectorMultiply_RBtn->TabIndex = 37;
			this->VectorMultiply_RBtn->TabStop = true;
			this->VectorMultiply_RBtn->Text = L"Вект. произв. (для трехмерных векторов)";
			this->VectorMultiply_RBtn->UseVisualStyleBackColor = true;
			this->VectorMultiply_RBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::VectorMultiply_RBtn_CheckedChanged);
			// 
			// ScalarMultiply_RBtn
			// 
			this->ScalarMultiply_RBtn->AutoSize = true;
			this->ScalarMultiply_RBtn->Location = System::Drawing::Point(13, 148);
			this->ScalarMultiply_RBtn->Name = L"ScalarMultiply_RBtn";
			this->ScalarMultiply_RBtn->Size = System::Drawing::Size(205, 17);
			this->ScalarMultiply_RBtn->TabIndex = 36;
			this->ScalarMultiply_RBtn->TabStop = true;
			this->ScalarMultiply_RBtn->Text = L"Скал. произведение (для векторов)";
			this->ScalarMultiply_RBtn->UseVisualStyleBackColor = true;
			this->ScalarMultiply_RBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ScalarMultiply_RBtn_CheckedChanged);
			// 
			// Det_RBtn
			// 
			this->Det_RBtn->AutoSize = true;
			this->Det_RBtn->Location = System::Drawing::Point(12, 126);
			this->Det_RBtn->Name = L"Det_RBtn";
			this->Det_RBtn->Size = System::Drawing::Size(183, 17);
			this->Det_RBtn->TabIndex = 35;
			this->Det_RBtn->TabStop = true;
			this->Det_RBtn->Text = L"Определитель (для кв. матриц)";
			this->Det_RBtn->UseVisualStyleBackColor = true;
			this->Det_RBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Det_RBtn_CheckedChanged);
			// 
			// calcBtn
			// 
			this->calcBtn->Location = System::Drawing::Point(56, 198);
			this->calcBtn->Name = L"calcBtn";
			this->calcBtn->Size = System::Drawing::Size(144, 56);
			this->calcBtn->TabIndex = 31;
			this->calcBtn->Text = L"Посчитать результат";
			this->calcBtn->UseVisualStyleBackColor = true;
			this->calcBtn->Click += gcnew System::EventHandler(this, &MyForm::calcBtn_Click);
			// 
			// Multiply_RBtn
			// 
			this->Multiply_RBtn->AutoSize = true;
			this->Multiply_RBtn->Location = System::Drawing::Point(12, 103);
			this->Multiply_RBtn->Name = L"Multiply_RBtn";
			this->Multiply_RBtn->Size = System::Drawing::Size(99, 17);
			this->Multiply_RBtn->TabIndex = 34;
			this->Multiply_RBtn->TabStop = true;
			this->Multiply_RBtn->Text = L"Произведение";
			this->Multiply_RBtn->UseVisualStyleBackColor = true;
			this->Multiply_RBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Multiply_RBtn_CheckedChanged);
			// 
			// Difference_RBtn
			// 
			this->Difference_RBtn->AutoSize = true;
			this->Difference_RBtn->Location = System::Drawing::Point(12, 80);
			this->Difference_RBtn->Name = L"Difference_RBtn";
			this->Difference_RBtn->Size = System::Drawing::Size(73, 17);
			this->Difference_RBtn->TabIndex = 33;
			this->Difference_RBtn->TabStop = true;
			this->Difference_RBtn->Text = L"Разность";
			this->Difference_RBtn->UseVisualStyleBackColor = true;
			this->Difference_RBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Difference_RBtn_CheckedChanged);
			// 
			// Sum_RBtn
			// 
			this->Sum_RBtn->AutoSize = true;
			this->Sum_RBtn->Location = System::Drawing::Point(12, 59);
			this->Sum_RBtn->Name = L"Sum_RBtn";
			this->Sum_RBtn->Size = System::Drawing::Size(59, 17);
			this->Sum_RBtn->TabIndex = 32;
			this->Sum_RBtn->TabStop = true;
			this->Sum_RBtn->Text = L"Сумма";
			this->Sum_RBtn->UseVisualStyleBackColor = true;
			this->Sum_RBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Sum_RBtn_CheckedChanged);
			// 
			// Rank_RBtn
			// 
			this->Rank_RBtn->AutoSize = true;
			this->Rank_RBtn->Location = System::Drawing::Point(12, 36);
			this->Rank_RBtn->Name = L"Rank_RBtn";
			this->Rank_RBtn->Size = System::Drawing::Size(97, 17);
			this->Rank_RBtn->TabIndex = 31;
			this->Rank_RBtn->TabStop = true;
			this->Rank_RBtn->Text = L"Ранг матрицы";
			this->Rank_RBtn->UseVisualStyleBackColor = true;
			this->Rank_RBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rank_RBtn_CheckedChanged);
			// 
			// Transposition_RBtn
			// 
			this->Transposition_RBtn->AutoSize = true;
			this->Transposition_RBtn->Location = System::Drawing::Point(12, 13);
			this->Transposition_RBtn->Name = L"Transposition_RBtn";
			this->Transposition_RBtn->Size = System::Drawing::Size(210, 17);
			this->Transposition_RBtn->TabIndex = 30;
			this->Transposition_RBtn->TabStop = true;
			this->Transposition_RBtn->Text = L"Транспон. матрицы (для кв. матриц)";
			this->Transposition_RBtn->UseVisualStyleBackColor = true;
			this->Transposition_RBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Transposition_RBtn_CheckedChanged);
			// 
			// MatrixGroup1
			// 
			this->MatrixGroup1->Controls->Add(this->CreateMatrix1_Btn);
			this->MatrixGroup1->Controls->Add(this->Scale_label1);
			this->MatrixGroup1->Controls->Add(this->M1_TextBox);
			this->MatrixGroup1->Controls->Add(this->N1_TextBox);
			this->MatrixGroup1->Controls->Add(this->grid1);
			this->MatrixGroup1->Controls->Add(this->Grid1_btnAddRow);
			this->MatrixGroup1->Controls->Add(this->Grid1_btnRmvRow);
			this->MatrixGroup1->Controls->Add(this->Grid1_btnAddCol);
			this->MatrixGroup1->Controls->Add(this->Grid1_btnRmvCol);
			this->MatrixGroup1->Controls->Add(this->initLabel);
			this->MatrixGroup1->Controls->Add(this->Grid1_panel);
			this->MatrixGroup1->Location = System::Drawing::Point(35, 35);
			this->MatrixGroup1->Name = L"MatrixGroup1";
			this->MatrixGroup1->Size = System::Drawing::Size(260, 531);
			this->MatrixGroup1->TabIndex = 35;
			// 
			// CreateMatrix1_Btn
			// 
			this->CreateMatrix1_Btn->Location = System::Drawing::Point(157, 413);
			this->CreateMatrix1_Btn->Name = L"CreateMatrix1_Btn";
			this->CreateMatrix1_Btn->Size = System::Drawing::Size(67, 82);
			this->CreateMatrix1_Btn->TabIndex = 39;
			this->CreateMatrix1_Btn->Text = L"Создать единичную матрицу размера";
			this->CreateMatrix1_Btn->UseVisualStyleBackColor = true;
			this->CreateMatrix1_Btn->Click += gcnew System::EventHandler(this, &MyForm::CreateMatrix_Btn_Click);
			// 
			// Scale_label1
			// 
			this->Scale_label1->AutoSize = true;
			this->Scale_label1->Location = System::Drawing::Point(185, 501);
			this->Scale_label1->Name = L"Scale_label1";
			this->Scale_label1->Size = System::Drawing::Size(14, 13);
			this->Scale_label1->TabIndex = 38;
			this->Scale_label1->Text = L"X";
			// 
			// M1_TextBox
			// 
			this->M1_TextBox->Location = System::Drawing::Point(203, 498);
			this->M1_TextBox->Name = L"M1_TextBox";
			this->M1_TextBox->Size = System::Drawing::Size(20, 20);
			this->M1_TextBox->TabIndex = 37;
			// 
			// N1_TextBox
			// 
			this->N1_TextBox->Location = System::Drawing::Point(157, 498);
			this->N1_TextBox->Name = L"N1_TextBox";
			this->N1_TextBox->Size = System::Drawing::Size(22, 20);
			this->N1_TextBox->TabIndex = 36;
			// 
			// CreateMatrix2_Btn
			// 
			this->CreateMatrix2_Btn->Location = System::Drawing::Point(161, 411);
			this->CreateMatrix2_Btn->Name = L"CreateMatrix2_Btn";
			this->CreateMatrix2_Btn->Size = System::Drawing::Size(66, 82);
			this->CreateMatrix2_Btn->TabIndex = 43;
			this->CreateMatrix2_Btn->Text = L"Создать единичную матрицу размера";
			this->CreateMatrix2_Btn->UseVisualStyleBackColor = true;
			this->CreateMatrix2_Btn->Click += gcnew System::EventHandler(this, &MyForm::CreateMatrix2_Btn_Click);
			// 
			// Scale_label2
			// 
			this->Scale_label2->AutoSize = true;
			this->Scale_label2->Location = System::Drawing::Point(189, 499);
			this->Scale_label2->Name = L"Scale_label2";
			this->Scale_label2->Size = System::Drawing::Size(14, 13);
			this->Scale_label2->TabIndex = 42;
			this->Scale_label2->Text = L"X";
			// 
			// M2_TextBox
			// 
			this->M2_TextBox->Location = System::Drawing::Point(207, 496);
			this->M2_TextBox->Name = L"M2_TextBox";
			this->M2_TextBox->Size = System::Drawing::Size(20, 20);
			this->M2_TextBox->TabIndex = 41;
			// 
			// N2_TextBox
			// 
			this->N2_TextBox->Location = System::Drawing::Point(161, 496);
			this->N2_TextBox->Name = L"N2_TextBox";
			this->N2_TextBox->Size = System::Drawing::Size(22, 20);
			this->N2_TextBox->TabIndex = 40;
			// 
			// MatrixGroup2
			// 
			this->MatrixGroup2->Controls->Add(this->grid2);
			this->MatrixGroup2->Controls->Add(this->CreateMatrix2_Btn);
			this->MatrixGroup2->Controls->Add(this->xLabel);
			this->MatrixGroup2->Controls->Add(this->Scale_label2);
			this->MatrixGroup2->Controls->Add(this->Grid2_panel);
			this->MatrixGroup2->Controls->Add(this->Grid2_btnAddRow);
			this->MatrixGroup2->Controls->Add(this->M2_TextBox);
			this->MatrixGroup2->Controls->Add(this->Grid2_btnRmvRow);
			this->MatrixGroup2->Controls->Add(this->Grid2_btnRmvCol);
			this->MatrixGroup2->Controls->Add(this->N2_TextBox);
			this->MatrixGroup2->Controls->Add(this->Grid2_btnAddCol);
			this->MatrixGroup2->Location = System::Drawing::Point(320, 37);
			this->MatrixGroup2->Name = L"MatrixGroup2";
			this->MatrixGroup2->Size = System::Drawing::Size(269, 529);
			this->MatrixGroup2->TabIndex = 40;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 603);
			this->Controls->Add(this->MatrixGroup2);
			this->Controls->Add(this->MatrixGroup1);
			this->Controls->Add(this->Result_Group);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->gridResult);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Браузер \"Амиго\"";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid2))->EndInit();
			this->Grid1_panel->ResumeLayout(false);
			this->Grid1_panel->PerformLayout();
			this->Grid2_panel->ResumeLayout(false);
			this->Grid2_panel->PerformLayout();
			this->Result_Group->ResumeLayout(false);
			this->Result_Group->PerformLayout();
			this->MatrixGroup1->ResumeLayout(false);
			this->MatrixGroup1->PerformLayout();
			this->MatrixGroup2->ResumeLayout(false);
			this->MatrixGroup2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void ClearOutput() { // Очистка таблицы
			for (int i = 0; i < this->gridResult->Rows->Count; ++i) {
				for (int j = 0; j < this->gridResult->Columns->Count; ++j) {
					gridResult->Rows[i]->Cells[j]->Value = "";
				}
			}
			errorProvider1->SetError(MatrixGroup1, System::String::Empty);
			errorProvider1->SetError(MatrixGroup2, System::String::Empty);
			errorProvider1->SetError(Result_Group, System::String::Empty);
		}

		void ChangeStateToVector(DataGridView^ grid) { // Изменить состояние группы на ввод вектора (матрицы размера 1 на n)
			while (grid->Rows->Count > 1) {
				grid->Rows->Remove(grid->Rows[grid->Rows->Count - 1]);
			}
			if (grid->Rows->Count == 0) {
				grid->Rows->Add(1);
			}
			if (grid->Columns->Count == 0) {
				DataGridViewTextBoxColumn^ myC1 = gcnew DataGridViewTextBoxColumn(); // Создаем два новых объект колонки
				myC1->HeaderText = System::Convert::ToString(grid->Columns->Count);
				myC1->Width = 25;
				grid->Columns->Add(myC1);
			}
		}

		void ChangeStateToNumber(DataGridView^ grid) { // Изменит состояние группы на ввод числа (матрицы размера 1 на 1)
			while (grid->Rows->Count > 1) {
				grid->Rows->Remove(grid->Rows[grid->Rows->Count - 1]);
			}
			while (grid->Columns->Count > 1) {
				grid->Columns->RemoveAt(grid->Columns->Count - 1);
			}
			if (grid->Rows->Count == 0) {
				grid->Rows->Add(1);
			}
			if (grid->Columns->Count == 0) {
				DataGridViewTextBoxColumn^ myC1 = gcnew DataGridViewTextBoxColumn(); // Создаем два новых объект колонки
				myC1->HeaderText = System::Convert::ToString(grid->Columns->Count);
				myC1->Width = 25;
				grid->Columns->Add(myC1);
			}
		}

		void CreateEmptyMatrix(DataGridView^ grid, int x, int y) { // Создание пустой матрицы
			while (grid->Rows->Count > 0) {
				grid->Rows->Remove(grid->Rows[grid->Rows->Count - 1]);
			}
			while (grid->Columns->Count > 1) {
				grid->Columns->RemoveAt(grid->Columns->Count - 1);
			}
			grid->Rows->Add(x);
			while (grid->Columns->Count < y) {
				DataGridViewTextBoxColumn^ myC1 = gcnew DataGridViewTextBoxColumn(); // Создаем два новых объект колонки
				myC1->HeaderText = System::Convert::ToString(grid->Columns->Count);
				myC1->Width = 25;
				grid->Columns->Add(myC1);
			}
		}

		bool ValidateMatrix(DataGridView^ grid) { // Проверка сетки на корректность
			if (grid->RowCount == 0 || grid->ColumnCount == 0)
				return false;
			for (int i = 0; i < grid->RowCount; ++i) {
				for (int j = 0; j < grid->ColumnCount; ++j) {
					int value;
					if (grid->Rows[i]->Cells[j]->FormattedValue == "") {
						return false;
					}
					bool valid = Int32::TryParse(System::Convert::ToString(grid->Rows[i]->Cells[j]->Value), value);
					if (!valid || grid->Rows[i]->Cells[j]->Value->ToString() == "") return false;
				}
			}
			return true;
		}

		private: System::Void Grid1_btnAddRow_Click(System::Object^ sender, System::EventArgs^ e) { // Функция для кнопки добавления ряда
			this->grid1->Rows->Add(1);
		}
		private: System::Void Grid2_btnAddRow_Click(System::Object^ sender, System::EventArgs^ e) { // Функция для кнопки добавления ряда
			this->grid2->Rows->Add(1);
		}

		private: System::Void Grid1_btnRmvRow_Click(System::Object^ sender, System::EventArgs^ e) { // Функция для кнопки удаления ряда
			if (this->grid1->Rows->Count == 0) return;

			if (!this->grid1->CurrentRow->IsNewRow) {
				int i = this->grid1->CurrentRow->Index;
				this->grid1->Rows->Remove(this->grid1->Rows[i]);
			}
		}
		private: System::Void Grid2_btnRmvRow_Click(System::Object^ sender, System::EventArgs^ e) { // Функция для кнопки удаления ряда
			if (this->grid2->Rows->Count == 0) return;

			if (!this->grid2->CurrentRow->IsNewRow) {
				int i = this->grid2->CurrentRow->Index;
				this->grid2->Rows->Remove(this->grid2->Rows[i]);
			}
		}
		private: System::Void Grid1_btnAddCol_Click(System::Object^ sender, System::EventArgs^ e) { // Функция для кнопки создания столбца
			DataGridViewTextBoxColumn^ myC1 = gcnew DataGridViewTextBoxColumn(); // Создаем два новых объект колонки

			myC1->HeaderText = System::Convert::ToString(grid1->Columns->Count);
			myC1->Width = 25;

			this->grid1->Columns->Add(myC1);
		}
		private: System::Void Grid2_btnAddCol_Click(System::Object^ sender, System::EventArgs^ e) { // Функция для кнопки создания столбца
			DataGridViewTextBoxColumn^ myC1 = gcnew DataGridViewTextBoxColumn(); // Создаем два новых объект колонки

			myC1->HeaderText = System::Convert::ToString(grid2->Columns->Count);
			myC1->Width = 25;

			this->grid2->Columns->Add(myC1);
		}
		private: System::Void Grid1_btnRmvCol_Click(System::Object^ sender, System::EventArgs^ e) { // Функция для кнопки удаления столбца
			if (grid1->Columns->Count > 1) {
				this->grid1->Columns->RemoveAt(grid1->Columns->Count - 1);
			}
		}
		private: System::Void Grid2_btnRmvCol_Click(System::Object^ sender, System::EventArgs^ e) { // Функция для кнопки удаления столбца
			if (grid2->Columns->Count > 1) {
				this->grid2->Columns->RemoveAt(grid2->Columns->Count - 1);
			}
		}
		private: System::Void Grid1_VectorRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Grid1_VectorRBtn->Checked) {
				ChangeStateToVector(this->grid1);
				MatrixGroup2->Visible = true;
				Grid1_btnAddRow->Visible = 0;
				Grid1_btnRmvRow->Visible = 0;
				Grid1_btnAddCol->Visible = 1;
				Grid1_btnRmvCol->Visible = 1;
				M1_TextBox->Visible = false;
				N1_TextBox->Visible = false;
				Scale_label1->Visible = false;
				CreateMatrix1_Btn->Visible = false;
			}
		}
		private: System::Void Grid2_VectorRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Grid2_VectorRBtn->Checked) {
				ChangeStateToVector(this->grid2);
				Grid2_btnAddRow->Visible = 0;
				Grid2_btnRmvRow->Visible = 0;
				Grid2_btnAddCol->Visible = 1;
				Grid2_btnRmvCol->Visible = 1;
				M2_TextBox->Visible = false;
				N2_TextBox->Visible = false;
				Scale_label2->Visible = false;
				CreateMatrix2_Btn->Visible = false;
			}
		}
		private: System::Void Grid1_MatrixRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Grid1_MatrixRBtn->Checked) {
				Grid1_btnAddRow->Visible = 1;
				Grid1_btnRmvRow->Visible = 1;
				Grid1_btnAddCol->Visible = 1;
				Grid1_btnRmvCol->Visible = 1;
				M1_TextBox->Visible = true;
				N1_TextBox->Visible = true;
				Scale_label1->Visible = true;
				CreateMatrix1_Btn->Visible = true;
			}
		}
		private: System::Void Grid2_MatrixRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Grid2_MatrixRBtn->Checked) {
				Grid2_btnAddRow->Visible = 1;
				Grid2_btnRmvRow->Visible = 1;
				Grid2_btnAddCol->Visible = 1;
				Grid2_btnRmvCol->Visible = 1;
				M2_TextBox->Visible = true;
				N2_TextBox->Visible = true;
				Scale_label2->Visible = true;
				CreateMatrix2_Btn->Visible = true;
			}
		}
		private: System::Void Grid1_NumRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Grid1_NumRBtn->Checked) {
				ChangeStateToNumber(this->grid1);
				Grid1_btnAddRow->Visible = 0;
				Grid1_btnRmvRow->Visible = 0;
				Grid1_btnAddCol->Visible = 0;
				Grid1_btnRmvCol->Visible = 0;
				M1_TextBox->Visible = false;
				N1_TextBox->Visible = false;
				Scale_label1->Visible = false;
				CreateMatrix1_Btn->Visible = false;
			}
		}
		private: System::Void Grid2_NumRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Grid2_NumRBtn->Checked) {
				ChangeStateToNumber(this->grid2);
				Grid2_btnAddRow->Visible = 0;
				Grid2_btnRmvRow->Visible = 0;
				Grid2_btnAddCol->Visible = 0;
				Grid2_btnRmvCol->Visible = 0;
				M2_TextBox->Visible = false;
				N2_TextBox->Visible = false;
				Scale_label2->Visible = false;
				CreateMatrix2_Btn->Visible = false;
			}
		}
		private: System::Void calcBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearOutput(); // Очистим вывод
			bool FirstGridValuesAreValid = ValidateMatrix(grid1); // Проверим матрицы на корректность. Если неверно - выведем соответствующие ошибки
			bool SecondGridValuesAreValid = ValidateMatrix(grid2);

			if (!FirstGridValuesAreValid) {
				errorProvider1->SetError(MatrixGroup1, "Наверный тип для одной или нескольких ячеек");
			}
			if (!SecondGridValuesAreValid) {
				errorProvider1->SetError(MatrixGroup2, "Наверный тип для одной или нескольких ячеек");
			}
			if (!FirstGridValuesAreValid || (!SecondGridValuesAreValid && MatrixGroup2->Visible)) // Если все плохо - завершаем операцию
				return;

			if (Transposition_RBtn->Checked) { // Следующие ифы описывают логику работы при конкретной нажатой радио-кнопке
				if (grid1->RowCount != grid1->ColumnCount) {
					errorProvider1->SetError(Result_Group, "Операция допустима только для квадратных матриц");
					return;
				}
				int ColumnsAmount = this->grid1->Columns->Count;
				int RowsAmount = this->grid1->Rows->Count;
				CreateEmptyMatrix(this->gridResult, ColumnsAmount, RowsAmount);
				vector<vector<int>> vec = GetVectorFromGrid(grid1);
				auto transposed = GetTransposedMatrix(vec);
				FillGridWithVector(transposed, gridResult);
			}
			if (Rank_RBtn->Checked) {

				CreateEmptyMatrix(this->gridResult, 1, 1);
				vector<vector<int>> vec = GetVectorFromGrid(grid1);
				int rnk = GetMatrixRank(vec);
				this->gridResult->Rows[0]->Cells[0]->Value = rnk;
			}
			if (Sum_RBtn->Checked) {

				if (grid1->RowCount != grid2->RowCount || grid1->ColumnCount != grid2->ColumnCount) {
					errorProvider1->SetError(Result_Group, "Операция невозможна для матриц данной размерности");
					return;
				}

				CreateEmptyMatrix(this->gridResult, grid1->RowCount, grid1->ColumnCount);
				vector<vector<int>> vec1 = GetVectorFromGrid(grid1);
				vector<vector<int>> vec2 = GetVectorFromGrid(grid2);
				vector<vector<int>> result = GetSummary(vec1, vec2);
				FillGridWithVector(result, gridResult);
			}
			if (Difference_RBtn->Checked) {
				if (grid1->RowCount != grid2->RowCount || grid1->ColumnCount != grid2->ColumnCount) {
					errorProvider1->SetError(Result_Group, "Операция невозможна для матриц данной размерности");
					return;
				}

				CreateEmptyMatrix(this->gridResult, grid1->RowCount, grid1->ColumnCount);
				vector<vector<int>> vec1 = GetVectorFromGrid(grid1);
				vector<vector<int>> vec2 = GetNegatedMatrix(GetVectorFromGrid(grid2));
				vector<vector<int>> result = GetSummary(vec1, vec2);
				FillGridWithVector(result, gridResult);
			}
			if (Multiply_RBtn->Checked) {
				if (Grid1_MatrixRBtn->Checked && Grid2_NumRBtn->Checked || Grid1_VectorRBtn->Checked && Grid2_NumRBtn->Checked) {
					CreateEmptyMatrix(this->gridResult, grid1->RowCount, grid1->ColumnCount);
					vector<vector<int>> vec1 = GetVectorFromGrid(grid1);
					vector<vector<int>> vec2 = GetVectorFromGrid(grid2);
					int value = vec2[0][0];
					auto result = GetNumMultiply(vec1, value);
					FillGridWithVector(result, gridResult);
					return;
				}

				if (grid1->ColumnCount != grid2->RowCount) {
					errorProvider1->SetError(Result_Group, "Операция невозможна для матриц данной размерности");
					return;
				}

				CreateEmptyMatrix(this->gridResult, grid1->RowCount, grid2->ColumnCount);
				vector<vector<int>> vec1 = GetVectorFromGrid(grid1);
				vector<vector<int>> vec2 = GetVectorFromGrid(grid2);
				vector<vector<int>> result = GetMultiply(vec1, vec2);
				FillGridWithVector(result, gridResult);
			}

			if (ScalarMultiply_RBtn->Checked) {
				if (!Grid1_VectorRBtn->Checked || !Grid2_VectorRBtn->Checked) {
					errorProvider1->SetError(Result_Group, "Операция невозможна т.к множители не являются векторами ");
					return;
				}

				vector<vector<int>> vec1 = GetVectorFromGrid(grid1);
				vector<vector<int>> vec2 = GetVectorFromGrid(grid2);
				int _result = GetScalarMultiply(vec1[0], vec2[0]);
				vector<vector<int>> result(1, vector<int>(1));
				result[0][0] = _result;
				CreateEmptyMatrix(gridResult, 1, 1);
				FillGridWithVector(result, gridResult);
			}
			if (VectorMultiply_RBtn->Checked) { 
				if (!Grid1_VectorRBtn->Checked || !Grid2_VectorRBtn->Checked) {
					errorProvider1->SetError(Result_Group, "Операция невозможна т.к множители не являются векторами");
					return;
				}
				else if (grid1->ColumnCount != 3 || grid2->ColumnCount != 3) {
					errorProvider1->SetError(Result_Group, "Операция невозможна для векторов данной размерности");
					return;
				}

				vector<vector<int>> vec1 = GetVectorFromGrid(grid1);
				vector<vector<int>> vec2 = GetVectorFromGrid(grid2);
				auto _result = GetVectorMultiply(vec1[0], vec2[0]);
				vector<vector<int>> result;
				result.push_back(_result);
				CreateEmptyMatrix(gridResult, vec1.size(), vec1[0].size());
				FillGridWithVector(result, gridResult);
			}
			if (Det_RBtn->Checked) {
				if (grid1->RowCount != grid1->ColumnCount) {
					errorProvider1->SetError(Result_Group, "Операция невозможна для матриц неквадратного вида");
					return;
				}
				vector<vector<int>> vec1 = GetVectorFromGrid(grid1);
				auto _result = GetMatrixDeterminant(vec1);
				vector<vector<int>> result(1, vector<int>(1, _result));
				CreateEmptyMatrix(gridResult, 1, 1);
				FillGridWithVector(result, gridResult);
			}
		}
		private: System::Void CreateMatrix_Btn_Click(System::Object^ sender, System::EventArgs^ e) {

			int n, m;
			bool ok1 = Int32::TryParse(N1_TextBox->Text, n);
			bool ok2 = Int32::TryParse(M1_TextBox->Text, m);
			if (!ok1) {
				errorProvider1->SetError(N1_TextBox, "Неверное значение");
			}
			if (!ok2) {
				errorProvider1->SetError(M1_TextBox, "Неверное значение");
			}
			if (!ok1 || !ok2) {
				return;
			}

			CreateEmptyMatrix(grid1, n, m);
			vector<vector<int>> vec(n, vector<int>(m, 1));
			for (int i = 0; i < vec.size(); ++i) {
				for (int j = 0; j < vec[0].size(); ++j) {
					if (i != j) vec[i][j] = 0;
				}
			}
			FillGridWithVector(vec, grid1);
		}
		private: System::Void CreateMatrix2_Btn_Click(System::Object^ sender, System::EventArgs^ e) {
			int n, m;
			bool ok1 = Int32::TryParse(N2_TextBox->Text, n);
			bool ok2 = Int32::TryParse(M2_TextBox->Text, m);
			if (!ok1) {
				errorProvider1->SetError(N2_TextBox, "Неверное значение");
			}
			if (!ok2) {
				errorProvider1->SetError(M2_TextBox, "Неверное значение");
			}
			if (!ok1 || !ok2) {
				return;
			}

			CreateEmptyMatrix(grid2, n, m);
			vector<vector<int>> vec(n, vector<int>(m, 1));
			for (int i = 0; i < vec.size(); ++i) {
				for (int j = 0; j < vec[0].size(); ++j) {
					if (i != j) vec[i][j] = 0;
				}
			}
			FillGridWithVector(vec, grid2);
		}
		private: System::Void Transposition_RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Transposition_RBtn->Checked == true) {
				MatrixGroup2->Visible = false;
			}
		}
		private: System::Void Sum_RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Sum_RBtn->Checked == true) {
				MatrixGroup2->Visible = true;
			}
		}
		private: System::Void Difference_RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Difference_RBtn->Checked == true) {
				MatrixGroup2->Visible = true;
			}
		}
		private: System::Void Multiply_RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Multiply_RBtn->Checked == true) {
				MatrixGroup2->Visible = true;
			}
		}

		private: System::Void Det_RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Det_RBtn->Checked == true) {
				MatrixGroup2->Visible = false;
			}
		}
		private: System::Void ScalarMultiply_RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (ScalarMultiply_RBtn->Checked == true) {
				MatrixGroup2->Visible = true;
			}
		}
		private: System::Void VectorMultiply_RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (VectorMultiply_RBtn->Checked == true) {
				MatrixGroup2->Visible = true;
			}
		}
		private: System::Void Rank_RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Rank_RBtn->Checked) {
				MatrixGroup2->Visible = false;
			}
		}
	};
}