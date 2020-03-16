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

SUITE(Die) {
  TEST(Thing) {
    CHECK_EQUAL(die("thing"),
        "I don't know why she swallowed a thing - perhaps she'll die!\n\n"); 
  }
}

int main(int, const char *[]) {
  return UnitTest::RunAllTests();
}
