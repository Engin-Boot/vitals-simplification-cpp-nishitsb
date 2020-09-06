#ifndef INPUT_VITAL_VALUES
#define INPUT_VITAL_VALUES
#include "inputConfig.h"

struct InputVitalValue
{
    const char *vitalName;
    int value;
};

InputVitalValue const allInputVitalValues[numberOfInputVitals] = {
    {"bpm", 75},
    {"spo2", 70},
    {"respRate", 85}};

#endif