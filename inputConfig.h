#ifndef INPUT_CONFIG
#define INPUT_CONFIG

struct InputVitalInfo
{
  const char *vitalName;
  int lower;
  int upper;
};

InputVitalInfo const inputVitalsConfig[] = {
    {"bpm", 70, 150},
    {"spo2", 90, 100},
    {"respRate", 30, 95}};

const int numberOfInputVitals = sizeof(inputVitalsConfig) / sizeof(inputVitalsConfig[0]);

struct InputAlertInfo
{
  const char *alertType;
  int alertId;
};

InputAlertInfo const inputAlertsConfig[] = {
    {"SMS", 0},
    {"SOUND", 1}};

const int numberOfInputAlerts = sizeof(inputAlertsConfig) / sizeof(inputAlertsConfig[0]);

#endif