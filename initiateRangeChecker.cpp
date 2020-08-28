#include "initiateRangeChecker.h"

void initiateRangeChecker(const InputVitalInfo* inputConfig){
    for (int i = 0; i < numberOfInputsInConfig; i++)
  {
    RangeChecker *range = new RangeChecker(inputConfig[i].lower, inputConfig[i].upper);
    vitalCheckers[i].vitalName = inputConfig[i].vitalName;
    vitalCheckers[i].range = range;
  }
}