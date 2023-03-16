#include "Long.h"

int Long::Scale(int count)
{
    int scale = 1;
    for (int i = 0; i < count; i++)
    {
        scale *= 10;
    }
    return scale;
}

int Long::Merge()
{
    if (minus)
    {
        return first * Scale(count) - second;
    }
    else
    {
        return first * Scale(count) + second;
    }
}

Long::Long():Pair()
{
    count = 1;
    minus = false;
}

Long::Long(int higher, int lower, int count):Pair(higher, lower)
{
    minus = higher < 0;
    this->count = count;
}

Long* Long::operator+(Long& object)
{
    Pair::operator+(object);
    return this;
}

Long* Long::operator-(Long& object)
{
    long int tm1 = Merge();
    long int tm2 = object.Merge();
    long int result = tm1 - tm2;
    if (count <= object.count)
    {
        count = object.count;
    }
    second = abs(result % Scale(count));
    first = result / Scale(count);
    minus = first < 0;
    return this;
}

Long* Long::operator*(Long& object)
{
    long int tm1 = Merge();
    long int tm2 = object.Merge();
    long int result = tm1 * tm2;
    if (count <= object.count)
    {
        count = object.count;
    }
    second = abs(result % Scale(count));
    first = result / Scale(count);
    minus = first < 0;
    return this;
}

std::ostream& operator<<(std::ostream& output, Long& object)
{
    output << object.first;
    std::string low = std::to_string(object.second);
    int low_size = low.size();
    while (object.count > low_size)
    {
        low = '0' + low;
        low_size++;
    }
    output << low;
    return output;
}

std::istream& operator>>(std::istream& input, Long& object)
{
    input >> object.first >> object.second >> object.count;
    object.minus = object.first < 0;
    return input;
}
