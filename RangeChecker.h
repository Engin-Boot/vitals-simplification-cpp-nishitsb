#ifndef RANGE_CHECKER
#define RANGE_CHECKER

class RangeChecker
{
private:
    int lowerLimit;
    int upperLimit;

public:
    RangeChecker(int, int);
    const char *checkAgainstRange(int) const;
};

#endif