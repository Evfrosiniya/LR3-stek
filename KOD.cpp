#include "CTEK.h"
#include <iostream>


void main() {
	int N, ak;
	std::cin >> N;
	stack A = stack();
	for (int i = 0; i < N; i++)
	{
		std::cin >> ak;
		A.push(ak);
	}
	A.print();
}