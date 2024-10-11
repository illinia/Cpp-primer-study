#include "include_header.h"

int main() {
	string max_word; int max_count = 0;
	// 중복단어 저장 변수, 카운트 변수
	string prev_word; int count = 0;
	string input;

	// how now now now brown cow cow
	while (cin >> input) {
		// 입력값이 이전 값과 같으면 카운트 증가
		// 최대 카운트와 비교시 더 크거나 같으면 최대 카운트, 최대 단어에 대입
		if (prev_word == input) {
			++count;
			if (count >= max_count) {
				max_word = prev_word;
				max_count = count;
			}
		}
		// 입력값이 이전 값과 다르면 이전 값에 현재 입력값 저장, 카운트 1로 대입
		else {
			prev_word = input;
			count = 1;
		}

		//cout << "max_word:" << max_word << " max_count:" << max_count
		//	<< " prev_word:" << prev_word << " count:" << count << endl;
	}

	cout << "word : " << max_word << " count : " << max_count;
}