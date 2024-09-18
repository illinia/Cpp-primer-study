#include "include_header.h"

int main()
{
	vector<string> svec;

	vector<int> ivec;

	vector<int> ivec2(ivec);
	vector<int> ivec3 = ivec;
	//vector<string> sevc(ivec2);

	vector<string> articles = { "a", "an", "the" };

	vector<string> v1{ "a", "an", "the" };

	vector<int> ivec(10, -1);
	vector<string> svec(10, "hi!");

	vector<int> ivec(10);
	vector<string> svec(10);

	vector<int> v1(10);
	vector<int> v2{ 10 };
	vector<int> v3(10, 1);
	vector<int> v4{ 10, 1 };

	vector<string> v5{ "hi" };
	//vector<string> v6("hi" );
	vector<string> v7{ 10 };
	vector<string> v8{ 10, "hi" };


}