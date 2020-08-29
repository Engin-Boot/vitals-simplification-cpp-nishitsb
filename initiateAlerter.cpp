#include "initiateAlerter.h"
#include "inputConfig.h"

Alerter alerters[numberOfInputAlerts];

Alerter *initiateAlerters()
{
    for (int i = 0; i < numberOfInputAlerts; i++)
    {
        AlertInterface *alrt;
        switch (inputAlertsConfig[i].alertId)
        {
        case 0:
            alrt = new AlertWithSMS;
            alerters[i].alerter = alrt;
            break;
        case 1:
            alrt = new AlertWithSound;
            alerters[i].alerter = alrt;
            break;
        default:
            break;
        }
    }
    return alerters;
}