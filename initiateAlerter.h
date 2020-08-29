#ifndef INITIATE_ALERTER
#define INITIATE_ALERTER
#include "Alert.h"

struct Alerter
{
    AlertInterface* alerter;
};

Alerter* initiateAlerters();

#endif