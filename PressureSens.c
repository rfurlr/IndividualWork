#include <stdio.h>
#include <stdlib.h>


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

void errortest (void){
  CU_ASSERT(senserror(20) == 30);
  CU_ASSERT(senserror(10) == 15);
  CU_ASSERT(senserror(2) == 0);
}

 int sensread (int press1, int press2){
  int sum = press1 + press2;
  sensereading  = sum / 2.0;
  return sensereading;
 }
 
void readtest (void){
  CU_ASSERT(sensread (20,10) == 15);
  CU_ASSERT(sensread (10,10) == 10);
  CU_ASSERT(sensread (30,50) == 40);
}

int truesensread(errormarg, sensreading){
  truuread = errormarg + sensreading;
  return truuread;
}

void truereadtest (void){
  CU_ASSERT(truesensread(20,15) == 35);
  CU_ASSERT(truesensread(20,0) == 20);
  CU_ASSERT(truesensread(15,15) == 30);
}

int main (){
  printf("please enter the age of the sensor and your two sensor readings: \n");
  scanf("%d %d %d", &SensAge, &press1, &press2);
  senserror(SensAge);
  sensread(oress1, press2);
  truesensread(errormarg, sensreading);
}
