#include <stdio.h>
#include <stdlib.h>
#include "CUnit.h"
#include "Basic.h"

int senserror (int SensAge){
  int errormarg;
  if (SensAge > 15){
    errormarg = 30;
  }
  else if (15 > SensAge > 5){
    errormarg = 15;
  }
  else if(SensAge < 5){
    errormarg = 0:
  }
  return errormarg;
}


