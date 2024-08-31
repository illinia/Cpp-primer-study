#include <iostream>

int main()
{
	int sum = 0;
	std::cout << "Please enter numbers" << std::endl;
	for (int val = 0; std::cin >> val; sum += val);
	std::cout << sum;
	return 0;
}