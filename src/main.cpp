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
#if __has_include(<pico/stdlib.h>)
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

#if __has_include(<pico/stdlib.h>)   // Is target Pico/Pico2?
  uint kLed = PICO_DEFAULT_LED_PIN;  // SDK default LED pin on RasPi Pico/Pico2
  gpio_init(kLed);
  gpio_set_dir(kLed, GPIO_OUT);

  // Essential to print message on Pico.
  stdio_init_all();

  // Count 10, to give the time to connect USB serial port.
  int count = 10;
  while (count > 0) {
    gpio_put(kLed, 1);
    sleep_ms((10 - count) * 100);
    gpio_put(kLed, 0);
    sleep_ms(count * 100);
    count--;
    printf("%d\n", count);
  }
#endif

  // count from 1 to num
  for (int i = 1; i <= 10; i++)
    printf("[CalcSqrt] The square root of %d is %f \n", i, calc.sqrt(i));

#if __has_include(<pico/stdlib.h>)  // Is target pico/Pico2?
  // tell user we have finished.
  while (true) {
    gpio_put(kLed, 0);
    sleep_ms(700);
    gpio_put(kLed, 1);
    sleep_ms(100);
    gpio_put(kLed, 0);
    sleep_ms(100);
    gpio_put(kLed, 1);
    sleep_ms(100);
  }

#endif

  return 0;
}