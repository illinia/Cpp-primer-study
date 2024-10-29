#include <iostream>
using namespace std;

int sum(initializer_list<int> il) {
	int sum = 0;
	for (auto i : il) {
		sum += i;
		cout << i << endl;
		cout << sum << endl;
	}
	return sum;
}

int main() {
	initializer_list<int> il = { 0,1,2,3,4 };
	cout << sum(il) << endl;
	return 0;
}