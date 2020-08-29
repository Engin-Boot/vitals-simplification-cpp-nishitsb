#include "checkVitals.h"

AllMessages a[numberOfInputVitals];

AllMessages *checkVitals(VitalCheckerInstance *v)
{
    for (int i = 0; i < numberOfInputVitals; i++)
    {
        a[i].vitalName = v[i].vitalName;
        a[i].message = v[i].range->checkAgainstRange(allInputVitalValues[i].value);
    }
    return a;
}