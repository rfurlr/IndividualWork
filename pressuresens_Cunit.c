#include "CUnit/CUnit.h"
#include "CUnit/Basic.h"
#include "pressure.h"


void test_senserror (void){
  CU_ASSERT(senserror(20) == 30);
  CU_ASSERT(senserror(10) == 15);
  CU_ASSERT(senserror(2) == 0);
}

void test_sensread (void){
  CU_ASSERT(sensread (20,10) == 15);
  CU_ASSERT(sensread (10,10) == 10);
  CU_ASSERT(sensread (30,50) == 40);
}

void test_truesensread (void){
  CU_ASSERT(truesensread(20,15) == 35);
  CU_ASSERT(truesensread(20,0) == 20);
  CU_ASSERT(truesensread(15,15) == 30);
}

int main(){
    CU_initialize_registry();
    CU_pSuite suite1 = CU_add_suite("test_senserror", 0, 0);
    CU_pSuite suite2 = CU_add_suite("test_sensread", 0, 0);
    CU_pSuite suite3 = CU_add_suite("test_truesensread", 0, 0);

    CU_add_test(suite1, "test_senserror", test_senserror);
    CU_add_test(suite2, "test_sensread", test_sensread);
    CU_add_test(suite3, "test_truesensread", test_truesensread);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}

