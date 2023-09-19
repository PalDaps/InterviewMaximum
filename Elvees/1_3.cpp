#include "includer.h"

int countOfBits(uint32_t number) {
	int sum = 0;
	for (size_t i = 0; i < 32; i++) {
		uint32_t temp = number;
		temp >>= i;
		sum += (temp & 1);
	}
	return sum;
}