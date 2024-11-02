#include <vector>
using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int di(int, int);
vector<decltype(add)*> vf{ add, sub, mul, di };