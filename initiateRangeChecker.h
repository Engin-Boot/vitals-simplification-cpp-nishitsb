#ifndef INITIATE_RANGE_CHECKER
#define INITIATE_RANGE_CHECKER
#include "RangeChecker.h"
#include "inputConfig.h"

struct VitalCheckerInstance
{
  const char *vitalName;
  RangeChecker const *range;
};

VitalCheckerInstance* initiateRangeChecker();

#endif