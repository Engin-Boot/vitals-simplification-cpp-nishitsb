#ifndef CHECK_VITALS
#define CHECK_VITALS
#include "inputConfig.h"
#include "inputVitalValues.h"
#include "initiateRangeChecker.h"

struct AlertMessages
{
  const char *vitalName;
  const char *message;
};

AlertMessages* checkVitals(VitalCheckerInstance*);

#endif