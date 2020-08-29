#include <assert.h>
#include <iostream>
#include "initiateRangeChecker.h"
#include "checkVitals.h"

void AlertSMS(const char *name, const char *msg)
{
  std::cout << "SMS: " << name << " " << msg << std::endl;
};

int main()
{
  //Vital-Integrator
  VitalCheckerInstance *vitalCheckers = initiateRangeChecker();
  
  //alert messages
  AlertMessages* alerts = checkVitals(vitalCheckers);

  for (int i = 0; i < numberOfInputsInConfig; i++)
  {
    AlertSMS(alerts[i].vitalName, alerts[i].message);
  }
}