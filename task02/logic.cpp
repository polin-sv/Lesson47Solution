#include "logic.h"

//bool is_perfect_number(int number) {
//	if (number % 2 == 1) {
//		return false;
//	}
//
//	int sum = 1; int n = number / 2;
//	for (int div = 2; div <= n; div++)
//	{
//		if (number % div == 0) {
//			sum += div;
//		}
//	}
//
//	return sum == number;
//}

bool is_perfect_number(int number) {
	if (number % 2 == 1) {
		return false;
	}
	int size = 5;
	int perfect_array[]{ 6,28,8128,33550336,858986056 };

	for (int i = 0; i < size; i++)
	{
		if (number == perfect_array[i]) {
			return true;
		}
	}

	return false;
}