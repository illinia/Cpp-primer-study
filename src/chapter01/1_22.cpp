#include <iostream>
#include "Sales_item.h"

int main()
{
	// 입력이 있는지 없는지 확인하는 로직
	// 입력이 있으면 실행, 없으면 오류 출력
	// 입력시 최초 저장할 객체 생성
	Sales_item total;
	if (std::cin >> total)
	{
		// 거래 내용이 여러개 들어오는데
		// 같은 isbn 이면 더하여 출력, 다르면 total 객체에 저장 후 출력
		// 입력이 더 이상 없으면 반복문 종료
		Sales_item item;
		while (std::cin >> item) {
			if (item.isbn() == total.isbn())
			{
				total += item;
			}
			else
			{
				total = item;
			}
			std::cout << total << std::endl;
		}

	}
	else
	{
		std::cout << "No Data" << std::endl;
		return -1;
	}
	return 0;
}