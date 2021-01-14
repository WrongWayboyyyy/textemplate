#pragma once
typedef long long ll;

ll fact(ll N) {
	if (N < 0)
		return -1;
	else if (N == 0 || N == 1)
		return 1;
	else return N * fact(N - 1);
}
