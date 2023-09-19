#include "includer.h"

// Для включения задач:
// #define _1_1
// #define _1_2
#define _1_3
#define _1_4
#define _1_5


// 17 : 00 PM
// 24 / 04 / 2023
// Состоялось первое собеседование. 

// Задачи:

// 1. Проверка на равенство двух строк(std::string).
// Если строки отличаются по длине вернуть - (-1).
// Если строки имеют одинаковую длину, но не равны - вернуть 0.
// Если строки имеют одинаковую длину и все их элементы равны - вернуть 1.

// 2. Реализовать сортировку пузырьком.

// 3. Найти количество единиц в бинарном представлении числа.



int main()
{
	// Первое собесодование

	// 1.
#ifdef _1_1
	std::string first = "car";
	std::string second = "oil";
	std::cout << stringsAreEqual(first, second);
#endif

	// 2.
#ifdef _1_2
	int* array = new int[5];
	for (int i = 0; i < 5; i++) {
		array[i] = 5 - i;
	}
	for (int i = 0; i < 5; i++) {
		std::cout << array[i];
	}
	std::cout << std::endl;
	bubbleSort(array, 5);
	for (int i = 0; i < 5; i++) {
		std::cout << array[i];
	}
	delete[] array;
#endif

	// 3.
#ifdef _1_3
	uint32_t number = 0x1101;
	std::cout << countOfBits(number);
#endif

	return 0;
}
