#include "include_header.h"

int main() {
	int grade;
	string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";

	string conditiongrade = (grade > 90) ? "high pass" 
		: (grade < 60) ? "fail" 
			: (grade < 75) ? "low pass" : "pass";

	string ifgrade;
	if (grade > 90) ifgrade = "high pass";
	else if (grade < 60) ifgrade = "fail";
	else if (grade < 75) ifgrade = "low pass";
	else ifgrade = "pass";
}