#include "complex.h"
#include <doctest.h>
#include <cmath>


const Complex Complex::operator+(const Complex rv) const 
{
  return Complex(x + rv.x, y + rv.y);
}
const Complex Complex::operator-(const Complex rv) const 
{
  return Complex(x - rv.x, y - rv.y);
}
const bool Complex::operator==(const Complex rv) const 
{
  return x == rv.x && y == rv.y;
}
const double Complex::abs() const 
{
  return sqrt(x * x + y * y);
}