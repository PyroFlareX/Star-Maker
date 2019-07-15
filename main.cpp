// --------------------------------------------------------------
// File name: star.cpp											-
// Project name: Star											-
// --------------------------------------------------------------
// Creator's name: Zack Dell									-
// Creation Date: July 15 2019									-
// Date of Last Modification: July 15 2019						-
// --------------------------------------------------------------
// Purpose: Print a star										-
// --------------------------------------------------------------
// Algorithm: 													-
//		Step 1: Get num >= 1									-
//		Step 2: Calculate the magic number for spacing			-
//		Step 3: Format spacing by row offset					-
//		Step 4: Output top half of star							-
//		Step 5: Do the inverse of steps 3-4 to output bottom	-
//				half of the star								-
// --------------------------------------------------------------
// -					DATA DICTIONARY							-
// - VARIABLES													-
// - DATA TYPE			NAME			COMMENTARY				-
// -----------			---------		-------------			-
//	int					num				star radius				-
//	int					spacing			helps formatting		-
//---------------------------------------------------------------

#include <iostream>
#include <iomanip>

int main()
{
	int num = 0;
	while(num < 1)
	{
		std::cout << "Enter star num >= 1: ";
		std::cin >> num;
	}
	std::cout << "\n";
	
	int spacing = 2 * num - 1;	//Magic number
	
	//Top half plus center line
	for(int i = 0; i < num; ++i)
	{
		std::cout << std::setw(spacing - (2 * i)) << "*";
		
		for(int j = 0; j < i * 2; j++)
		{
			std::cout << " *";
		}
		std::cout << "\n";
	}
	
	//Bottom half
	for(int i = num - 2; i >= 0; --i)
	{
		std::cout << std::setw(spacing - (2 * i)) << "*";
		
		for(int j = 0; j < i * 2; j++)
		{
			std::cout << " *";
		}
		std::cout << "\n";
	}
	
	std::cout << "\n";
	
	return 0;
}