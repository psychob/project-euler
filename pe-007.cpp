#include <iostream>
#include <vector>
#include <math.h>

// pocz¹tkowe wartoœci
std::vector<int> primes = { 2, 3, 5, 7 };

bool is_prime( int v )
{
 for ( auto it : primes )
 {
  if ( it == v )
   return true;
  else if ( v % it == 0 )
   return false;
 }

 int last_prime = primes.back();

 for ( int it = last_prime; it < sqrt(v); ++it )
  if ( v % it == 0 )
   return false;

 primes.push_back(v);

 return true;
}

const int limit   = 10001;
const int inspect = 0xffff;

int main( )
{
 for ( int it = 2; primes.size() <= limit; ++it )
 {
  if (( it & inspect) == inspect)
   std::cout << "Test: " << it << " " << primes.size() << "\n";

  is_prime(it);
 }

 std::cout << primes[10000] << std::endl;

 return 0;
}
