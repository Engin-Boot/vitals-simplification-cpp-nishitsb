#include "fireAlert.h"
#include<string.h>

using namespace std;

void fireAlert(AllMessages *messages, Alerter *alerters)
{
    for (int i = 0; i < numberOfInputVitals; i++)
    {   
        if (strcmp(messages[i].message, "is ok"))
        {
            for (int j = 0; j < numberOfInputAlerts; j++)
            {
                alerters[j].alerter->alert(messages[i].vitalName, messages[i].message);
            }
        }
    }
}