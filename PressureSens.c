#include <stdio.h>
#include <stdlib.h>
#include "CUnit.h"
#include "Basic.h"
int errormarg;
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

