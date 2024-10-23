/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>

#include "calc.hpp"

/**
 * @brief main function
 *
 * @return int Always 0
 */
int main() {
  Calc calc;

  // count from 1 to num
  for (int i = 1; i <= 10; i++)
    std::cout << "[CalcSqrt] The square root of " << i << " is " << calc.sqrt(i)
              << std::endl;

  return 0;
}