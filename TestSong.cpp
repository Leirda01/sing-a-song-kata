#include "UnitTest++.h"
#include "Snatches.h"

TEST(Swallow) {
  CHECK_EQUAL(old_lady_swallow("thing"), 
      "There was an old lady who swallowed a thing.\n");
}

int main(int, const char *[]) {
  return UnitTest::RunAllTests();
}
