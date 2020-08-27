#include <assert.h>
#include <iostream>

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
  assert(isInsideRange(85, 65, 95) == true);
  assert(isInsideRange(55, 90, 1000) == false); //below lower limit
  assert(isInsideRange(170, 95, 150) == false); //above upper limit
  std::cout<<"isInsideRange is good to go!"<<std::endl;

  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
  std::cout<<"Vitals are ok!"<<std::endl;
}