#include <iostream>
#include <iomanip>

int main()
{
	int A;


	while(std::cin >> A)
	{
		if (A)
			std::cout << "vai ter duas!" << std::endl;
		else
			std::cout << "vai ter copa!" << std::endl;
	}

}
