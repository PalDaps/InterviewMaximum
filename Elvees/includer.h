// Это директива препроцессора используется, чтобы предотвращать многократное
// включение одного и того же заголовочное файла в одном и том же исходном файле
#pragma once

#include <iostream>
#include <string>

// Первое собеседование.

// 1.
int stringsAreEqual(std::string first, std::string second);

// 2
int* bubbleSort(int* array, const int& size);

//3
int countOfBits(uint32_t number);