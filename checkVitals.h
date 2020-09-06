#ifndef CHECK_VITALS
#define CHECK_VITALS
#include "inputConfig.h"
#include "inputVitalValues.h"
#include "initiateRangeChecker.h"

struct AllMessages
{
  const char *vitalName;
  const char *message;
};

AllMessages* checkVitals(VitalCheckerInstance*);

#endif