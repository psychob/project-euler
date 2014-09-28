#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

typedef unsigned __int64 bint;
typedef std::vector<bint> prime_memory;

bool isprime( prime_memory &pm, bint vl )
{
 if ( vl <= 1 )
  return false;

 if (std::find(std::begin(pm), std::end(pm), vl) != pm.end())
  return true;

 {
  size_t size = pm.size();
  for ( size_t it = 0; it < size; ++it )
   if ( vl % pm[it] == 0 )
    return false;
 }

 pm.push_back(vl);

 return true;
}

bint largestfactor( bint nmb, bint & stop )
{
 for ( bint it = stop; it > 1; --it )
  if ( nmb % it == 0 )
   return it;

 return 0;
}

int main ( )
{
 std::cout.sync_with_stdio(false);
 std::cout << std::boolalpha;

 const bint lpf  = 600851475143;
 const bint lpf_ = 775146; //sqrt(lpf)
 bint _lpf = lpf_;

 prime_memory pm;
 pm.reserve(lpf_);
 pm.push_back(2);
 
 for ( bint it = pm.back(); it < lpf_ + 1; ++it )
 {
  bool is {isprime(pm, it)};
  
  if ( it % 1000 == 0 )
   std::cout << it << ": " << is << "\n";
 }

 while ( true )
 {
  bint ret = largestfactor(lpf, _lpf);

  std::cout << "search for: " << ret << std::endl;

  if ( isprime(pm, ret) )
  {
   std::cout << "anserw: " << ret << std::endl;
   return 0;
  } else
  {
   std::cout << ret << " is not prime" << std::endl;
  }

  _lpf = ret - 1;
 }
 
 return 1;
}
