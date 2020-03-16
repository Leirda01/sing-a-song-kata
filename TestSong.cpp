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
    CHECK_EQUAL(probably_die("thing"),
         "I don't know why she swallowed a thing - perhaps she'll die!\n\n");
  }
}

SUITE(ToCatch) {
  TEST(thingToHIV) {
    CHECK_EQUAL(to_catch("thing", "HIV"),
         "She swallowed the thing to catch the HIV,\n");
  }
  TEST(FirstEmpty) {
    CHECK_EQUAL(to_catch("", "HIV"), "");
  }
  TEST(SecondEmpty) {
    CHECK_EQUAL(to_catch("thing", ""), "");
  }
}

int main(int, const char *[]) {
  return UnitTest::RunAllTests();
}
