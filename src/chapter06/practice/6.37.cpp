#include <string>
using namespace std;

using arrS = string[10];
arrS& func1();

auto func2() -> string(&)[10];

string strArr[10];
decltype(strArr)& func3();