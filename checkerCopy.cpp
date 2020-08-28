#include <assert.h>
#include <iostream>
#include "inputConfig.h"
#include "inputVitalValues.h"
// #include "RangeChecker.h"
// #include "initiateRangeChecker.h"

class RangeChecker
{
private:
  int lower;
  int upper;

public:

  RangeChecker(int low, int up) : lower(low), upper(up) {}

  const char *checkAgainstRange(int value)
  {
    // std::cout<<value<<std::endl;
    // std::cout<<lower<<std::endl;
    // std::cout<<upper<<std::endl;
    if (value <= lower)
    {
      return "too low";
    }
    else if (value >= upper)
    {
      return "too high";
    }
    else
    {
      return "is Ok";
    }
  }
};

struct VitalCheckerInstance
{
  const char *vitalName;
  RangeChecker *range;
};

struct Alerts
{
  const char *vitalName;
  const char *message;
};

struct VitalInfo
{
  const char *vitalName;
  RangeChecker *range;
};

void checkForAlerts(Alerts *a, VitalCheckerInstance *v, int n, InputVitalValue const *values)
{
  for (int i = 0; i < n; i++)
  {
    if (v[i].vitalName == values[i].vitalName)
    {
      a[i].vitalName = v[i].vitalName;
      a[i].message = v[i].range->checkAgainstRange(values[i].value);
    }
  }
};

void AlertSMS(const char *name, const char *msg)
{
  std::cout << "SMS: " << name << " " << msg << std::endl;
};

int main()
{

  // initiateRangeChecker(inputConfig);

  VitalCheckerInstance vitalCheckers[numberOfInputsInConfig];

  for (int i = 0; i < numberOfInputsInConfig; i++)
  {
    RangeChecker *range = new RangeChecker(inputConfig[i].lower, inputConfig[i].upper);
    vitalCheckers[i].vitalName = inputConfig[i].vitalName;
    vitalCheckers[i].range = range;
  }

  Alerts alerts[numberOfInputsInConfig];

  checkForAlerts(alerts, vitalCheckers, numberOfInputsInConfig, allInputVitalValues);

  for (int i = 0; i < numberOfInputsInConfig; i++)
  {
    AlertSMS(alerts[i].vitalName, alerts[i].message);
  }
}