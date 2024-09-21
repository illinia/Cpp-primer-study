#include "include_header.h"

int main()
{
	unsigned cnt = 42;
	constexpr unsigned sz = 42;

	int arr[10];
	int* parr[sz];
	//string bad[cnt];
	//string strs[get_size()];

	const unsigned sz = 3;
	int ia1[sz] = { 1,2,3 };
	int a2[] = { 0,1,2 };
	int a3[5] = { 0,1,2 };
	string a4[3] = { "hi", "bye" };
	//int a5[2] = { 0, 1, 2 };

	char a1[] = { 'C', '+', '+' };
	char a2[] = { 'C', '+', '+', '\0' };
	char a3[] = "C++";
	//const char a4[6] = "Daniel";
	int a[] = { 0, 1, 2 };
	//int a2[] = a;
	//a2 = a;

	int* ptrs[10];
	//int& refs[10];
	int(*Parray)[10] = &arr;
	int(&arrRef)[10] = arr;

	int* (&array)[10] = ptrs;

	unsigned scores[11] = {};
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)
		cout << i << " ";
	cout << endl;
}