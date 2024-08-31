#include <iostream>

void print_range(int a, int b)
{
	if (a > b)
		print_range(b, a);

	while (a <= b) {
		std::cout << a++ << " ";
	}
}

int main()
{
	int a, b;
	std::cout << "Please Enter two numbers" << std::endl;
	std::cin >> a >> b;
	print_range(a, b);
	return 0;
}