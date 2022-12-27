#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Functions.h"

TEST_GROUP(Functions)
{
  void setup() {
    
  }

  void teardown() {
    mock().clear();
  }
};

TEST(Functions, simpleTest)
{
  CHECK_EQUAL(42, foo());
}
