#include "RangeChecker.h"

RangeChecker::RangeChecker(int lower, int upper) : lowerLimit(lower),
                                                   upperLimit(upper) {}

const char *RangeChecker::checkAgainstRange(int value)
{
    if (value <= lowerLimit)
    {
        return "too low";
    }
    else if (value >= upperLimit)
    {
        return "too high";
    }
    else
    {
        return "is Ok";
    }
}