#pragma once
#include <string>;
using namespace std;
class Recursion
{

public:
	int factorial(int n)
	{
		if (n == 0)
			return 1;
		return n * factorial(n - 1);
	}


	int fibonacci(int n)
	{
		if (n == 1)
			return 1;
		if (n == 0)
			return 0;

		return fibonacci(n - 1) + fibonacci(n - 2);

	}

	int sumOf_N_NaturalNumber(int n)
	{
		if (n == 0)
			return 0;
		return n + sumOf_N_NaturalNumber(n - 1);
	}

	bool isPalindrome(string& str, int start, int end)
	{
		if ((end - start == 0) || (end - start == 1))
		{
			return true;
		}

		if (str[start] == str[end])
		{
			return isPalindrome(str, start + 1, end - 1);

		}
		else
		{
			return false;
		}
	}

	int sumOfDigits(int number)
	{

		if (number == 0)
			return number;

		return number%10 + sumOfDigits(number / 10);
	}


	





};

