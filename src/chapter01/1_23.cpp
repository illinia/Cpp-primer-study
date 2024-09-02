#include <iostream>
#include "Sales_item.h"

int main()
{
	// 거래 내용을 여러개 읽고 ISBN 별로 거래 내용이 몇 개인지 세는 프로그램 작성
	// 1. 거래 내용을 읽기, 내용이 없을 시 종료
	Sales_item total;

	if (std::cin >> total) {
	// 2. 1개 읽었을 시 이후 거래 내용이 있나 확인하는 반복문
		Sales_item item;
		while (std::cin >> item) {
	//		1. 더 읽을 내용이 있을 시
	//			1. 같은 isbn 인 경우 : 저장해놓은 객체에 내용 더하기
			if (item.isbn() == total.isbn()) {
				total += item;
			}
	//			2. 다른 isbn 인 경우 : 이전 객체 출력, 새로운 객체 저장
			else {
				std::cout << total << std::endl;
				total = item;
			}
		}
	//		2. 더이상 읽을 내용이 없을 시 저장해놓은 정보를 출력
		std::cout << total << std::endl;
	}
	else {
		std::cerr << "No Data";
		return -1;
	}
	return 0;
}