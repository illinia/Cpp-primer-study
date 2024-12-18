#include "string"
#include "vector"
#include <iostream>

using namespace std;

class Screen {
public:
	//typedef string::size_type pos;
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht* wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht* wd, c) {}

	Screen set(char);
	Screen set(pos, pos, char);

	char get() const
	{
		return contents[cursor];
	}
	inline char get(pos ht, pos wd) const;
	Screen move(pos r, pos wd);
	void some_member() const;
	Screen display(ostream& os) { do_display(os); return *this; }
	const Screen display(ostream& os) const { do_display(os); return *this; }
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	mutable size_t access_ctr;

	void do_display(ostream& os) const { os << contents; }
};

inline Screen Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
inline Screen Screen::set(pos r, pos col, char ch)
{
	contents[r * width + col] = ch;
	return *this;
}

inline
Screen Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}
void Screen::some_member() const {
	++access_ctr;
}

int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
}