#include <assert.h>
#include "string"

bool isInsideRange(float vitalValue, float lowerLimit, float upperLimit)
{
  return vitalValue > lowerLimit && vitalValue < upperLimit;
}

bool vitalsAreOk(float bpm, float spo2, float respRate)
{
  return isInsideRange(bpm, 70, 150) &&
         isInsideRange(spo2, 90, 10000) &&
         isInsideRange(respRate, 30, 95);
}

int main()
{
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}