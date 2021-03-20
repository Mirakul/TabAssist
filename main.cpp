#include "functions.h"

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

//void convert();

int main() {

	while (1) {

		char input = '0';

		std::system("cls");

		std::cout << "\t    ----Tab Assist----";
		std::cout << "\n\n\t1. Convert frets to notes";
		std::cout << "\n\t2. Quit";
		std::cout << "\n\n\t  *More features to follow.";

		input = _getch();

		switch (input)
		{
		default:
			break;

		case '1':
			convert();
			break;

		case '2':
			return 0;
		}

	}

	return 0;
}

