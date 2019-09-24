// Prob34_Digit_factorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

unsigned long int fact(unsigned long long int n)
{
	unsigned long int f = 1, i;
	for (i = 1; i <= n; f *= i++);
	return f;
}


int main()
{
	unsigned long long int n = 3, sum = 0, temp, bigsum = 0;
	for (; n < 10000000; n++)
	{
		sum = 0;
		temp = n;
		while (sum <= n && temp > 0)
		{
			sum += fact(temp % 10);
			temp = temp / 10;
		}
		if (sum == n)
		{
			bigsum += sum;
		}
	}
	printf("\nHello World! %lld", bigsum);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
