#include "logic.h"

bool is_perfect_number(int number) {
	if (number % 2 == 1) {
		return false;
	}

	int sum = 1; int n = number / 2;
	for (int div = 2; div <= n; div++)
	{
		if (number % div == 0) {
			sum += div;
		}
	}

	return sum == number;
}