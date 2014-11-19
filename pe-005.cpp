#include <iostream>

const int limit = 20;
const int inspect = 0xfffff;

int main( )
{
 unsigned ret;

 for ( unsigned gc = 20; ; ++gc )
 {
  if (( gc & inspect ) == inspect)
   std::cout << "Test: " << gc << "\n";

  unsigned it = 2;
  for (; it <= limit; ++it )
  {
   if ( gc % it != 0 )
    break;
  }

  if ( it > limit )
  {
   std::cout << gc << std::endl;
   ret = gc;
   break;
  }
 }

 return ret;
}
