#include <stdio.h>
#include <stdlib.h>
#include "pressure.h"

int errormarg;
int sensreading;
int truuread;
int SensAge;
int press1;
int press2;

//calculates the margin of error the sensor has based on its age
int senserror (int SensAge){
  
  if (SensAge > 15){
    errormarg = 30;
  }
  else if (SensAge > 5){
    errormarg = 15;
  }
  else if(SensAge < 5){
    errormarg = 0;
  }
  return errormarg;
}

// takes two readings from the sensor then finds the average reading
 int sensread (int press1, int press2){
  
  int sum = press1 + press2;
  
  sensreading  = sum / 2.0;
  
   return sensreading;
 }
 

//combines the error based on age to the average sensor reader
int truesensread(errormarg, sensreading){
  
  truuread = errormarg + sensreading;
  
  return truuread;
}




