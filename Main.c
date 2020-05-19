#include "pressure.h"
#include <stdlib.h>
#include <stdio.h>

int errormarg;
int sensreading;
int SensAge = 20;
int press1 = 20;
int press2 = 10;

int main (){
   int SensorError = senserror(SensAge);
   int SensorRead = sensread(press1, press2);
   int TrueSensorRead = truesensread(errormarg, sensreading);
}
