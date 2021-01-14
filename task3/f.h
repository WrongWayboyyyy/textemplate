#pragma once

long long myPow(int n) {
	if (n == 0)
		return 1;
	else
		return 2 * myPow(n - 1);
}

long long f(int n) {
	if (n == 0)
		return 0;
	else
		return myPow(n) + f(n - 1);
}