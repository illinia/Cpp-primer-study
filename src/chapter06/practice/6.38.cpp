int odd[] = { 1,3,5,7,9 };

decltype(odd) &arrPtr(int i) {
	return odd;
}