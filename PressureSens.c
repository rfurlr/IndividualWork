#include <stdio.h>
#include <stdlib.h>
#include "pressure.h"

int errormarg;
int sensreading;
int truuread;

int senserror (int SensAge){
  
  if (SensAge > 15){
    errormarg = 30;
  }
  else if (15 => SensAge => 5){
    errormarg = 15;
  }
  else if(SensAge < 5){
    errormarg = 0:
  }
  return errormarg;
}


 int sensread (int press1, int press2){
  
  int sum = press1 + press2;
  
  sensereading  = sum / 2.0;
  
   return sensereading;
 }
 


int truesensread(errormarg, sensreading){
  
  truuread = errormarg + sensreading;
  
  return truuread;
}



int main (){
  printf("please enter the age of the sensor and your two sensor readings: \n");
  scanf("%d %d %d", &SensAge, &press1, &press2);
  senserror(SensAge);
  sensread(oress1, press2);
  truesensread(errormarg, sensreading);
}
