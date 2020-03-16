#include <iostream>
#include <string>
#include "Snatches.h"

std::string old_lady_swallow(std::string animal) {
  return animal.length() ? "There was an old lady who swallowed a " + animal + ".\n": "";
}
