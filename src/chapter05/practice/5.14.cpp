#include "include_header.h"

int main() {
	string max_word; int max_count = 0;
	// �ߺ��ܾ� ���� ����, ī��Ʈ ����
	string prev_word; int count = 0;
	string input;

	// how now now now brown cow cow
	while (cin >> input) {
		// �Է°��� ���� ���� ������ ī��Ʈ ����
		// �ִ� ī��Ʈ�� �񱳽� �� ũ�ų� ������ �ִ� ī��Ʈ, �ִ� �ܾ ����
		if (prev_word == input) {
			++count;
			if (count >= max_count) {
				max_word = prev_word;
				max_count = count;
			}
		}
		// �Է°��� ���� ���� �ٸ��� ���� ���� ���� �Է°� ����, ī��Ʈ 1�� ����
		else {
			prev_word = input;
			count = 1;
		}

		//cout << "max_word:" << max_word << " max_count:" << max_count
		//	<< " prev_word:" << prev_word << " count:" << count << endl;
	}

	cout << "word : " << max_word << " count : " << max_count;
}