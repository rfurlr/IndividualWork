




void test_truesensread (void){
  CU_ASSERT(truesensread(20,15) == 35);
  CU_ASSERT(truesensread(20,0) == 20);
  CU_ASSERT(truesensread(15,15) == 30);
}
