#ifndef RANGE_CHECKER
#define RANGE_CHECKER
#include "inputConfig.h"

class RangeChecker
{
private:
    int lowerLimit;
    int upperLimit;

public:
    RangeChecker(int, int);
    const char *checkAgainstRange(int);
};

#endif