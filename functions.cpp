#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void convert() {

	std::system("cls");
	char note[3], fret[3], cc = 0;
	int index = 0;

	std::cout << "---------------------------------------------------------------------";
	std::cout << "\n\n> Enter string note and fret number like so: g# 5\n\nConvert>>> ";
	std::cin >> note >> fret;

	//char notes[12][2] = { {'A', '\0'}, {'A', '#'}, {'B', '\0'}, {'C', '\0'}, {'C', '#'}, {'D', '\0'}, {'D', '#'}, {'E', '\0'}, {'F', '\0'}, {'F', '#'}, {'G', '\0'}, {'G', '#'}};

	char notes[12][3] = { {'A', '\0'}, {'A', '#', '\0'}, {'B', '\0'}, {'C', '\0'}, {'C', '#', '\0'}, {'D', '\0'}, {'D', '#', '\0'}, {'E', '\0'},
	{'F', '\0'}, {'F', '#', '\0'}, {'G', '\0'}, {'G', '#', '\0'} };

	if (note[0] == 'a' && note[1] == '\0')
		index = 0;

	if (note[0] == 'a' && note[1] == '#')
		index = 1;

	if (note[0] == 'b' && note[1] == '\0')
		index = 2;

	if (note[0] == 'c' && note[1] == '\0')
		index = 3;

	if (note[0] == 'c' && note[1] == '#')
		index = 4;

	if (note[0] == 'd' && note[1] == '\0')
		index = 5;

	if (note[0] == 'd' && note[1] == '#')
		index = 6;

	if (note[0] == 'e' && note[1] == '\0')
		index = 7;

	if (note[0] == 'f' && note[1] == '\0')
		index = 8;

	if (note[0] == 'f' && note[1] == '#')
		index = 9;

	if (note[0] == 'g' && note[1] == '\0')
		index = 10;

	if (note[0] == 'g' && note[1] == '#')
		index = 11;

	index += atoi(fret);

	while (index > 12)
		index -= 12;

	std::cout << notes[index];

	while (!cc)
		cc = _getch();

}
