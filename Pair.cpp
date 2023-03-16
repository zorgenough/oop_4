#include "Pair.h"

Pair::Pair()
{
	first = 0;
	second = 0;
}

Pair::Pair(int first, int second)
{
	this->first = first;
	this->second = second;
}

void Pair::set_first(int first)
{
	this->first = first;
}

void Pair::set_second(int second)
{
	this->second = second;
}

Pair* Pair::operator+(Pair& object)
{
	first = first + object.first;
	second = second + object.second;
	return this;
}

std::ostream& operator<<(std::ostream& output, Pair& object)
{
	output << object.first << ", " << object.second << std::endl;
	return output;
}

std::istream& operator>>(std::istream& input, Pair& object)
{
	input >> object.first >> object.second;
	return input;
}