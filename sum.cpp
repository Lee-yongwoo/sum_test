#include "sum.h"

int sum(int n) {
	int s;
	for (int i=1; i<=n; i++)
		s += i;

	return s;
}

