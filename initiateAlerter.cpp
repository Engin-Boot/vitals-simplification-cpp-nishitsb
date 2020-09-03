#include "initiateAlerter.h"
#include "inputConfig.h"

Alerter allAlerters[] = {new AlertWithSMS, new AlertWithSound};

Alerter alerters[numberOfInputAlerts];

Alerter *initiateAlerters()
{
    for (int i = 0; i < numberOfInputAlerts; i++)
    {
        AlertInterface *alrt;
        alerters[i] = allAlerters[inputAlertsConfig[i].alertId];
    }
    return alerters;
}