#include "String.h"
#include <iostream>

int main() {
  String foo = "stop";
  String bar = foo + " it";
  std::cout<< bar << '\n' << bar.get_length();
  return 0;
}