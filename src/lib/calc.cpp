/**
 * @file calc.cpp
 * @author Seiichi Horie
 * @brief Demonstration class implementation.
 * @version 0.1
 * @date 2022-Oct-31
 *
 * @copyright  (c) Seiichi Horie 2024
 *
 */

#include "calc.hpp"

#include <assert.h>

double Calc::sqrt(double param) {
  assert(param >= 0);

  return std::sqrt(param);
}
