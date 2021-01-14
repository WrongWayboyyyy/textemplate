#pragma once
#include <vector>
#include "MyForm.h"

using std::vector;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//template<typename T>
vector<vector<int>> GetVectorFromGrid(DataGridView^ grid) { // Функция получения вектора из таблицы
	vector<vector<int>> vec(grid->RowCount, vector<int>(grid->ColumnCount));
	for (int i = 0; i < vec.size(); ++i) {
		for (int j = 0; j < vec[i].size(); ++j) {
			int Value = System::Convert::ToInt32(grid->Rows[i]->Cells[j]->Value);
			vec[i][j] = Value;
		}
	}
	return vec;
}

//template<typename T>
void FillGridWithVector(vector<vector<int>>& vec, DataGridView^ grid) { // Функция заполнения таблицы вектором
	int ColumnsAmount = grid->Columns->Count;
	int RowsAmount = grid->Rows->Count;
	if (RowsAmount != vec.size() || ColumnsAmount != vec[0].size()) return;
	for (int i = 0; i < RowsAmount; ++i) {
		for (int j = 0; j < ColumnsAmount; ++j) {
			grid->Rows[i]->Cells[j]->Value = vec[i][j];
		}
	}
};