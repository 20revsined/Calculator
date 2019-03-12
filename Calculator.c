#include <stdio.h>

double add(double x, double y) {
  return (x + y);
}

double subtract(double x, double y)
{
  return (x - y);
}

double multiply(double x, double y)
{
  return (x * y);
}

double divide(double x, double y)
{
  return (x / y);
}

int main() {
printf("%f", add(5.0, 6.0));
return 0;
}
