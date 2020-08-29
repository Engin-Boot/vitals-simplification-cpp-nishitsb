#include "checkVitals.h"

AlertMessages a[numberOfInputsInConfig];

AlertMessages *checkVitals(VitalCheckerInstance *v)
{
    for (int i = 0; i < numberOfInputsInConfig; i++)
    {
        a[i].vitalName = v[i].vitalName;
        a[i].message = v[i].range->checkAgainstRange(allInputVitalValues[i].value);
    }
    return a;
}