#include <iostream>
#include "Alert.h"

void AlertWithSMS::alert(const char *vitalName, const char *alertMessage)
{
    std::cout << "SMS: " << vitalName << " " << alertMessage << std::endl;
}

void AlertWithSound::alert(const char *vitalName, const char *alertMessage)
{
    std::cout << "Sound: " << vitalName << " " << alertMessage << std::endl;
}