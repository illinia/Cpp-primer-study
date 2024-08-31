#include <iostream>

//// 1.9
//int main()
//{
//	int sum = 0;
//	for (int val = 50; val <= 100; ++val) {
//		sum += val;
//	}
//	std::cout << "Sum : " << sum << std::endl;
//	return 0;
//}

//// 1.10
//int main()
//{
//	for (int i = 10; i >= 0; --i) {
//		std::cout << i << " ";
//	}
//	return 0;
//}

// 1.11
int main()
{
	int small, big;
	std::cin >> small >> big;
	if (small > big) {
		int temp = small;
		small = big;
		big = temp;
	}
	for (; small <= big;) {
		std::cout << small++ << " ";
	}
	return 0;

}