#include "UnitTest++.h"
#include "Snatches.h"

SUITE(Swallow) {
  TEST(Thing) {
    CHECK_EQUAL(old_lady_swallow("thing"), 
        "There was an old lady who swallowed a thing.\n");
  }
  TEST(Empty) {
    CHECK_EQUAL(old_lady_swallow(""), "");
  }
  TEST(Nothing) {
    CHECK_EQUAL(old_lady_swallow(), "");
  }
}

int main(int, const char *[]) {
  return UnitTest::RunAllTests();
}
