#include "include_header.h"
#include "5.7.h"

int main() {
	int ival1, ival2;
	if (ival1 != ival2)
		ival1 = ival2; // ; 필요
	else ival1 = ival2 = 0;

	int minval, ival, occurs;
	if (ival < minval)
		minval = ival;
	occurs = 1; // if 실행 블록에 중괄호 없으면 1문장만 실행

	int ival = get_value(); // ival 을 if 문 조건으로 설정시 if 블록 안에서만 유효
	if (ival)
		cout << "ival = " << ival << endl;
	if (!ival)
		cout << "ival = 0\n";

	if (ival = 0) // 0을 대입한 ival의 값이 if문의 조건이므로 o은 false로 변형되어 if문 블록이 실행되지 않음
		ival = get_value();
}

int get_value() {
	return 0;
}