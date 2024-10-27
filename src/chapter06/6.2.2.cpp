#include "include_header.h"

string::size_type find_char(const string& s, char c, string::size_type& occurs) {
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}

int main() {

}