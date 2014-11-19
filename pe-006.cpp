#include <iostream>

const int limit = 100;

int main( )
{
 unsigned sum = 0,
          mul = 0;

 for ( unsigned it = 1; it <= limit; ++it )
 {
  sum += it * it;
  mul += it;
 }

 mul = mul * mul;

 unsigned diff = mul - sum;

 std::cout << "Roznica: " << diff << std::endl;

 return diff;
}
