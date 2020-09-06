#include "initiateRangeChecker.h"

VitalCheckerInstance vc[numberOfInputVitals];

VitalCheckerInstance *initiateRangeChecker()
{
  for (int i = 0; i < numberOfInputVitals; i++)
  {
    RangeChecker const *range = new RangeChecker(inputVitalsConfig[i].lower, inputVitalsConfig[i].upper);
    vc[i].vitalName = inputVitalsConfig[i].vitalName;
    vc[i].range = range;
  }
  return vc;
}