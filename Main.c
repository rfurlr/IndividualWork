#include "pressure.h"
#include <stdlib.h>
#include <stdio.h>

int SensAge = 20;
int press1 = 20;
int press2 = 10;

int main (){
  senserror(SensAge);
  sensread(press1, press2);
  truesensread(errormarg, sensreading);
}
