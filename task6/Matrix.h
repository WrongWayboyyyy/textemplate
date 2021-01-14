#include <vector>
#include <algorithm>

#pragma once

using std::vector;
using std::max;

template <typename T>
vector<vector<T>> GetTransposedMatrix(const vector<vector<T>>& vec) { 

	int RowsAmount = vec.size();
	int ColumnsAmount = vec[0].size();
	vector<vector<T>> result(ColumnsAmount, vector<T>(RowsAmount));
	for (int i = 0; i < ColumnsAmount; ++i) {
		for (int j = 0; j < RowsAmount; ++j) {
			result[i][j] = vec[j][i];
		}
	}
	return result;
}

template <typename T>
vector<vector<T>> GetNegatedMatrix(const vector<vector<T>>& vec) { 
	vector<vector<T>> result = vec;
	int RowsAmount = vec.size();
	int ColumnsAmount = vec[0].size();
	for (int i = 0; i < RowsAmount; ++i) {
		for (int j = 0; j < ColumnsAmount; ++j) {
			result[i][j] = -result[i][j];
		}
	}
	return result;
}

template <typename T>
vector<vector<T>> GetSummary(const vector<vector<T>>& vec1, const vector<vector<T>>& vec2) {
	int RowsAmount = vec1.size();
	int ColumnsAmount = vec1[0].size();
	vector<vector<T>> result = vec1;
	for (int i = 0; i < RowsAmount; ++i) {
		for (int j = 0; j < ColumnsAmount; ++j) {
			result[i][j] += vec2[i][j];
		}
	}
	return result;
}

template <typename T>
vector<vector<T>> GetMinor(const vector<vector<T>>& vec1, int i, int j) {
	vector<vector<T>> result = vec1;
	result.erase(result.begin() + i);
	for (int t = 0; t < result.size(); ++t) {
		result[t].erase(result[t].begin() + j);
	}
	return result;
}

template<typename T>
T GetMatrixDeterminant(const vector<vector<T>>& vec) {
	T result = 0;
	int sign = 1;
	auto _size = vec.size();
	if (_size == 1) {
		return vec[0][0];
	}
	if (_size == 2) {
		return vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0];
	}
	for (int i = 0; i < vec.size(); ++i) {
		vector<vector<T>> minor = GetMinor(vec, i, 0);
		int det = GetMatrixDeterminant(minor);
		result += sign * vec[i][0] * det;
		sign = -sign;
	}
	return result;
}

template<typename T>
T GetScalarMultiply(const vector<T>& vec1,const vector<T>& vec2) {
	T count = 0;
	for (int i = 0; i < vec1.size(); ++i) {
		count += vec1[i] * vec2[i];
	}
	return count;
}

vector<int> GetVectorMultiply(const vector<int>& vec1, const vector<int>& vec2) {
	vector<int> result = vec1;
	result[0] = vec1[1] * vec2[2] - vec1[2] * vec2[1];
	result[1] = vec1[2] * vec2[1] - vec1[0] * vec2[2];
	result[2] = vec1[0] * vec2[1] - vec1[1] * vec2[0];
	return result;
}

template <typename T>
vector<vector<T>> GetMultiply(const vector<vector<T>>& vec1, const vector<vector<T>>& vec2) {
	vector<vector<T>> result(vec1.size(), vector<T>(vec2[0].size()));
	vector<vector<T>> transposed = GetTransposedMatrix(vec2);
	for (int i = 0; i < vec1.size(); ++i) {
		for (int j = 0; j < transposed.size(); ++j) {
			result[i][j] = GetScalarMultiply(vec1[i], transposed[j]);
		}
	}
	return result;
}

template <typename T>
vector<vector<T>> GetNumMultiply(const vector<vector<T>>& vec1, int value) {
	vector<vector<T>> result = vec1;
	for (int i = 0; i < vec1.size(); ++i) {
		for (int j = 0; j < vec1[i].size(); ++j) {
			result[i][j] = vec1[i][j] * value;
		}
	}
	return result;
}



template<typename T>
int GetMatrixRank(const vector<vector<T>>& vec) {
	double EPS = 1e-9;
	int n = vec.size();
	int m = vec[0].size();
	vector<vector<T>> A = vec;
	int rank = 0;
	vector<bool> row_selected(n, false);
	for (int i = 0; i < m; ++i) {
		int j;
		for (j = 0; j < n; ++j) {
			if (!row_selected[j] && abs(A[j][i]) > EPS)
				break;
		}
		if (j != n) {
			++rank;
			row_selected[j] = true;
			for (int p = i + 1; p < m; ++p)
				A[j][p] /= A[j][i];
			for (int k = 0; k < n; ++k) {
				if (k != j && abs(A[k][i]) > EPS) {
					for (int p = i + 1; p < m; ++p)
						A[k][p] -= A[j][p] * A[k][i];
				}
			}
		}
	}
	return rank;
}