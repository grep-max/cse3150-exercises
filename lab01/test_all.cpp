#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 
#include "non_neg_prefix_sum.h"
#include "non_pos_prefix_sum.h"
#include "../include/doctest.h"
#include <random> 

int A[9]= {1,-1,1,-1,1,-1,1,1,1}; // goes to +
int B[3] = {50, -5, 2}; // throws error
int C[3] = {-1,-1,-1}; //goes --

TEST_CASE("testing non_neg functions") { 

  CHECK(non_neg_prefix_sum(A, 9));
  CHECK_FALSE(non_neg_prefix_sum(C, 3)); 
  CHECK_THROWS(non_neg_prefix_sum(B, 3), "Error: not a list of -1 and +1");

} 

TEST_CASE("testing non_pos functions"){
    
  CHECK_FALSE(non_pos_prefix_sum(A, 9));
  CHECK(non_pos_prefix_sum(C, 3)); 
  CHECK_THROWS(non_pos_prefix_sum(B, 3), "Error: not a list of -1 and +1");
}