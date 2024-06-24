#include <iostream>

using std::cout;
using std::cin;

int main()
{
	// Rectangle dimensions variables (Width - Height). 
	int heightRec;
	int widthRec;

	// Get the height of the rectangle.
	cin >> heightRec;

	// Get the width of the rectangle.
	cin >> widthRec;

	for (int i = 0; i < heightRec; ++i) // Outer loop
	{
		for (int j = 0; j < widthRec; j++) // Inner loop
		{
			// Rectangle dimensions conditions for drawing.
			bool isTopEdge = ((i + j) == j);
			bool isLeftEdge = ((i + j) == i);
			bool isRightEdge = (j == (widthRec - 1));
			bool isBottomEdge = (i == (heightRec - 1));

			if (isTopEdge || isLeftEdge || isRightEdge || isBottomEdge)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}

		cout << "\n"; // Print a new line.
	}

	return 0;
}
