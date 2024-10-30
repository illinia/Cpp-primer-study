#include <iostream>
using namespace std;
#include <vector>

void vprint(vector<int>* v, size_t& i, size_t end) {
	if (i < end) {
		cout << (*v)[i] << endl;
		++i;
		if (i < end) {
			vprint(v, i, end);
		}
	}
}

int main() {
	vector<int> vi = { 0,1,2,3,4,5 };
	size_t i = 0;
	size_t end = vi.size();
	vprint(&vi, i, end);
	
}