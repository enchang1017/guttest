#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number)
{
	static int target = -1;
	if (target == -1) {
		target = r.Next() % 100 + 1;
	}
	if (number == target)		return true;
}
int main(array<System::String^>^ args)
{
    int guess;

    do
    {
        std::cin >> guess;
    }
    while (!Guess(guess));

    return 0;
}