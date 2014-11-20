#include <iostream>
#include <vector>
#include <algorithm>

using bint = unsigned long long;

int chain_length( bint start )
{
 int counter = 0;
 while ( start > 1 )
 {
  counter++;
  switch ( start & 1 )
  {
   case 0: // parzysta
    start = start / 2;
    break;

   case 1: // nieparzysta
    start = 3 * start + 1;
    break;
  }
 }

 return counter;
}

int main( )
{
 std::vector<int> length;
 length.reserve(1000000);

 for ( int i = 1; i < 1000000; ++i )
  length.push_back(chain_length(i));

 int it = 0;
 int max = length[0];

 for ( int i = 1; i < length.size(); ++i )
  if ( max < length[i] )
  {
   max = length[i];
   it = i;
  }

 std::cout << it + 1 << std::endl;

 return it + 1;
}
