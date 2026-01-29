#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 

#include "../include/doctest.h" 

#include "isPrimeFunction.h"



TEST_CASE("testing FALSE...") { 

  CHECK_FALSE(isPrimeInteger(-5));
  CHECK_FALSE(isPrimeInteger(597));
  CHECK_FALSE(isPrimeInteger(-1));
  CHECK_FALSE(isPrimeInteger(1010097));   
  CHECK_FALSE(isPrimeInteger(102));   
  CHECK_FALSE(isPrimeInteger(1));
  CHECK_FALSE(isPrimeInteger(0));   
}
TEST_CASE("testing TRUE..."){
  CHECK(isPrimeInteger(5));
  CHECK(isPrimeInteger(3));
  CHECK(isPrimeInteger(541));
  CHECK(isPrimeInteger(1223));   
  CHECK(isPrimeInteger(17));  

};