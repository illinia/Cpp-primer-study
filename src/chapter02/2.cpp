
int main()
{
	/*
	// 2.27
	//int i = -1, & r = 0;
	int i = -1;
	int* const p2 = &i;
	const int i = -1, & r = 2;
	//const int& const r2;
	const int i2 = i, & r = i;

	// 2.28
	//int i, * const cp;
	//int* pl, * const p2;
	//const int ic, & r = ic;
	//const int* const p3;
	const int* p;

	// 2.29
	//i = ic;
	*/

	// 2.4.3 상위 const
	int i = 0;
	int* const pl = &i;
	const int ci = 42;
	const int* p2 = &ci;
	const int* const p3 = p2;
	const int& r = ci;

	i = ci;
	p2 = p3;

	//int* p = p3;
	p2 = p3;
	p2 = &i;
	//int& r = ci;
	const int& r2 = i;

	// 2.30
	const int v2 = 0;
	int v1 = v2;
	int* p1 = &v1, & r1 = v1;
	const int* p2 = &v2, * const p3 = &i, & r2 = v2;

	// 2.31
	r1 = v2;
	//p1 = p2;
	p2 = p1;
	//p1 = p3;
	p2 = p3;

	// 2.4.4
	const int max_files = 20;
	const int limit = max_files + 1;
	int staff_szie = 27;
	//const int sz = get_size();

	constexpr int mf = 20;
	constexpr int limit = mf + 1;
	//constexpr int sz = size();

	const int* p = nullptr;
	constexpr int* q = nullptr;

	constexpr int* np = nullptr;

	int j = 0;
	constexpr int i = 42;

	//constexpr const int* p = &i;
	//constexpr int* p1 = &j;

	// 2.32
	int null = 0, *p = &null ;

}