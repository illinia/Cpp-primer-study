#include <vector>
using namespace std;

int fnc(int, int);
using fp = decltype(fnc)*;

vector<fp>;