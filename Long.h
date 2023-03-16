#pragma once
#include "Pair.h"
#include <string>
class Long : public Pair
{
private:
	int count;
	bool minus;
	int Scale(int);
	int Merge();

public:
	Long();
	Long(int, int, int);

	Long* operator +(Long&);
	Long* operator -(Long&);
	Long* operator *(Long&);

	friend std::ostream& operator <<(std::ostream&, Long&);
	friend std::istream& operator >>(std::istream&, Long&);
};

