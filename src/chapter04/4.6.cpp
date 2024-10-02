#include "include_header.h"

int main() {
	string s1 = "a string", * p = &s1;
	auto n = s1.size();
	n = (*p).size();
	n = p->size();
}