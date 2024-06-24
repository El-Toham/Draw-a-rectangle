#include <iostream>

using std::cout;

int main()
{
	const int LIMIT1 = 8;
	const int LIMIT2 = 10;

	for (int i = 0; i < LIMIT1; ++i)
	{
		for (int j = 0; j < LIMIT2; j++)
		{
			if (((i + j) == j) || ((i + j) == i) || (j == (LIMIT2 - 1)) || (i == (LIMIT1 - 1)))
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << std::endl;
	}

	return 0;
}
