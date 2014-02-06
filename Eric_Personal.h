#ifndef ERIC_PERSONAL_H
#define ERIC_PERSONAL_H

namespace Eric{

	int sumOfDigits(int num);
	int sumOfDigits(int sum, int num, int iter);
	int findPower (const int& num);
	int tenToThePower (int iter);
	void invertIntArray(int* origional,int* flipped, int size);
	template <class T>
	void printArray(T* array, size_t size);

}
#endif