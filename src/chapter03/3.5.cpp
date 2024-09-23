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

	//string nums[] = { "one", "tow", "three" };
	//string* p = &nums[0];
	//
	//string* p2 = nums;

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto ia2(ia);
	//ia2 = 42;

	decltype(ia) ia3;
	//ia3 = p;
	//ia3[4] = i;

	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	++p;

	int* e = &arr[10];

	for (int* b = arr; b != e; ++b)
		cout << *b << endl;

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* beg = begin(ia);
	int* last = end(ia);

	// pbeg는 arr의 첫 요소를, pend는 마지막 요소 바로 다음 위치
	int* pbeg = begin(arr), * pend = end(arr);

	// 음수인 첫 번째 요소를 찾으며 모든 요소를 확인하면 멈춘다
	while (pbeg != pend && *pbeg >= 0)
		++pbeg;

	constexpr size_t sz = 5;
	int arr[sz] = { 1,2,3,4,5 };
	int* ip = arr;
	int* ip2 = ip + 4;

	int* p = arr + sz;
	//int* p2 = arr + 10;

	ptrdiff_t n = end(arr) - begin(arr);
	
	int* b = arr, * e = arr + sz;
	while (b < e) {
		++b;
	}

	/*int i = 0;
	int sz1 = 42;
	int* p1 = &i, * e = &sz1;
	while (p1 < e) {}*/

	int ia[] = { 0, 2, 4, 6, 8 };
	int last = *(ia + 4);
	//last = *ia + 4;

	int ia[] = { 0, 2, 4, 6, 8 };

	int i = ia[2];
	int* p = ia;
	i = *(p + 2);

	int* p = &ia[2];
	int j = p[1];
	int k = p[-2];

	char ca[] = { 'C', '+', '+' };
	//cout << strlen(ca) << endl;

	string s1 = "A string example";
	string s2 = "A differet string";
	if (s1 < s2);

	const char ca1[] = "A string example";
	const char ca2[] = "A different string";
	if (ca1 < ca2);

	if (strcmp(ca1, ca2) < 0);

	string largeStr = s1 + " " + s2;

	char largeChar[100];
	strcpy(largeChar, ca1);
	strcat(largeChar, " ");
	strcat(largeChar, ca2);

	string s("Hello World");

	//char* str = s;
	const char* str = s.c_str();

	int int_arr[] = { 0,1,2,3,4,5 };
	vector<int> ivec(begin(int_arr), end(int_arr));

	vector<int> subVec(int_arr + 1, int_arr + 4);
}