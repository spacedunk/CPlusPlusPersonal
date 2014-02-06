#include "Eric_Personal.h"

void Eric::invertIntArray(int* origional,int* flipped, int size){
	int j = size - 1;
	int temp(0);
	for(int i = 0; i < size; ++i){
		temp = origional[j];
		flipped[i] = temp;			
		--j;
	} 
}

int Eric::findPower (const int& num)
{
	int toThePower(0);
	while (num > tenToThePower(toThePower)) toThePower++;
	return toThePower;
}

int Eric::sumOfDigits(int num){
	int sum(0), iter(0);
	iter = findPower(num);
	return sum += sumOfDigits(sum,num,iter);

}

int Eric::sumOfDigits(int sum, int num, int iter){
	int next(0);
	if (num < 10) return sum += num;
	else{
		sum += (num / (tenToThePower(iter)));\
		next = iter - 1;
		return sumOfDigits(sum, (num % (tenToThePower(iter))),next);
		}
}

int Eric::tenToThePower (int iter){
	int product = 1;
	for (int i = iter; i > 0; i--) product *= 10;
	return product;
}

template <class T>
void Eric::printArray(T* arrayT, size_t size)
{
	for (int i = 0; i < (int)size; i++)
	{
		cout << arrayT[i] << " ";
	}
	cout << endl;
}