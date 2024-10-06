#include "include_header.h"

int main() {
	int* d;
	void* p = &d;
	double* dp = static_cast<double*>(p);

	const char* pc;
	char* p = const_cast<char*>(pc);

	const char* cp;
	//char* q = static_cast<char*>(cp);
	static_cast<string>(cp);
	//const_cast<string>(cp);

	int* ip;
	char* pc = reinterpret_cast<char*>(ip);

	string str(pc);
}