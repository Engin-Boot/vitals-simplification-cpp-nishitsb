#include "triggerAllAlerters.h"

void triggerAllALerter(AllMessages message, Alerter *alerters)
{
    for (int i = 0; i < numberOfInputAlerts; i++)
    {
        alerters[i]->alert(message.vitalName, message.message);
    }
}