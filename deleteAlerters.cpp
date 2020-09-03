#include "deleteAlerters.h"

void deleteAlerters(Alerter* alerters){
    for(int i=0; i<numberOfInputAlerts; i++){
        delete alerters[i];
    }
}