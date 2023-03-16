#pragma once
#include <iostream>

class Pair
{
protected:
	int first, second;
public:
	Pair();
	Pair(int, int);

	void set_first(int);
	void set_second(int);

	Pair* operator +(Pair&);
	friend std::ostream& operator <<(std::ostream&, Pair&);
	friend std::istream& operator >>(std::istream&, Pair&);
};