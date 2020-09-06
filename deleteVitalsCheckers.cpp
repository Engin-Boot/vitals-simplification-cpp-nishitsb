#include "deleteVitalsCheckers.h"

void deleteVitalsCheckers(VitalCheckerInstance* vitalsCheckers){
    for(int i=0; i<numberOfInputVitals; i++){
        delete vitalsCheckers[i].range;
    }
}