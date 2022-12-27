#include <iostream>
#include "functions.h"

int main(int argc, char** argv)
{
  std::cout << "Test program" << std::endl;

  std::cout << "Foo: " << foo() << std::endl;
  std::cout << "Bar: " << bar(4) << std::endl;
  return 0;
}
