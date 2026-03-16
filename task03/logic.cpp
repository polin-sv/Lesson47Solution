
#include "logic.h"

int count_multiples(int number,int multiple) {
	return multiple * (1 + number) * number / 2;
}
int sum(int number) {
	return count_multiples(number, 3)
		+ count_multiples(number, 5)
		- count_multiples(number, 15);
}