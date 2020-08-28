#ifndef INPUT_VITAL_VALUES
#define INPUT_VITAL_VALUES
#include "inputConfig.h"

struct InputVitalValue
{
    const char *vitalName;
    int value;
};

InputVitalValue const allInputVitalValues[numberOfInputsInConfig] = {
    {"bpm", 80},
    {"spo2", 95},
    {"respRate", 85}};

#endif