#ifndef INITIATE_RANGE_CHECKER
#define INITIATE_RANGE_CHECKER
#include "RangeChecker.h"

void initiateRangeChecker(const InputVitalInfo*);

struct VitalCheckerInstance
{
  const char *vitalName;
  RangeChecker *range;
};

VitalCheckerInstance vitalCheckers[numberOfInputsInConfig];

#endif