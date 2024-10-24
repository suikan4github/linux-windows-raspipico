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
#if __has_include(<hardware/gpio.h>)
#include <pico/stdlib.h>
#else
#include <stdlib.h>
#endif

#include <stdio.h>

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
    printf("[CalcSqrt] The square root of %d is %f \n", i, calc.sqrt(i));

  return 0;
}