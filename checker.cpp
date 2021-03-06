#include "initiateRangeChecker.h"
#include "checkVitals.h"
#include "initiateAlerter.h"
#include "fireAlert.h"
#include "deleteAlerters.h"
#include "deleteVitalsCheckers.h"

int main()
{
  //Vital-Integrator
  VitalCheckerInstance *vitalCheckers = initiateRangeChecker();

  //Alert-Integrator
  Alerter *alerters = initiateAlerters();

  //all messages
  AllMessages *messages = checkVitals(vitalCheckers);

  //fire alerts
  fireAlert(messages, alerters);

  //delete alerters
  deleteAlerters(alerters);

  //delete vitalCheckers
  deleteVitalsCheckers(vitalCheckers);
}