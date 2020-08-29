#include "initiateRangeChecker.h"

VitalCheckerInstance vc[numberOfInputsInConfig];

VitalCheckerInstance *initiateRangeChecker()
{
  for (int i = 0; i < numberOfInputsInConfig; i++)
  {
    RangeChecker *range = new RangeChecker(inputConfig[i].lower, inputConfig[i].upper);
    vc[i].vitalName = inputConfig[i].vitalName;
    vc[i].range = range;
  }
  return vc;
}