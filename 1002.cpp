#include <iostream>
#include <iomanip>

int main()
{
	double A;

	std::cin >> A;

	std::cout << std::fixed;
	std::cout << std::setprecision(4);
	std::cout << "A=" << A*A*3.14159 << std::endl;

}
