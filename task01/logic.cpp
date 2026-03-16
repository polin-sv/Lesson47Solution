#include "logic.h"

int get_min_digit(int number) {
	int value = number % 10;

	while (number > 0) {
		number /= 10;
		int digit = number % 10;

		if (digit < value) {
			value = digit;
		}

		if (value == 0) {
			break;
		}

	}

	return value;
}
int get_max_digit(int number) {
	int value = number % 10;

	while (number > 0) {
		number /= 10;
		int digit = number % 10;

		if (digit > value) {
			value = digit;
		}

		if (value == 9) {
			break;
		}

	}

	return value;
}