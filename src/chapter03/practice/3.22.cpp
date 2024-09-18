#include "include_header.h"

int main()
{
	vector<string> text;
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
		for (auto& c : *it)
			c = toupper(c);

	for (auto word : text)
		cout << word << endl;

	return 0;
}