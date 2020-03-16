#include <iostream>
#include <string>
#include "Snatches.h"

std::string old_lady_swallow(std::string animal) {
  return animal.length()? "There was an old lady who swallowed a " + animal + ".\n": "";
}

std::string probably_die(std::string animal) {
  return animal.length()? "I don't know why she swallowed a " + animal + " - perhaps she'll die!\n\n": "";
}

std::string to_catch(std::string animal1, std::string animal2) {
  if (animal1 == "" || animal2 == "") {
    return "";
  }
  return "She swallowed the " + animal1 + " to catch the " + animal2 + ",\n";
}
