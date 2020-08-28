#ifndef INPUT_CONFIG
#define INPUT_CONFIG

struct InputVitalInfo
{
  const char *vitalName;
  int lower;
  int upper;
};

InputVitalInfo const inputConfig[3] = {
    {"bpm", 70, 150},
    {"spo2", 90, 100},
    {"respRate", 30, 95}};

const int numberOfInputsInConfig = sizeof(inputConfig) / sizeof(inputConfig[0]);

#endif