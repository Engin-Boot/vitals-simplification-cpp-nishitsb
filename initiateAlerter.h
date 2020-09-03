#ifndef INITIATE_ALERTER
#define INITIATE_ALERTER
#include "Alert.h"

typedef AlertInterface* Alerter;

Alerter* initiateAlerters();

#endif