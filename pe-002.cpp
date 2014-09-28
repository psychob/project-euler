#include <iostream>
#include <map>

typedef std::map<int, int> fib_memory;

int fib( fib_memory & fm, int x )
{
 if ( x <= 1 )
  return 1;

 // sprawdzamy czy jest to w pamiêci
 auto is = fm.find( x );
 if ( is == fm.end() ) // nie ma
 {
  int ret = fib( fm, x - 1 ) + fib( fm, x - 2 );
  fm[ x ] = ret;
  return ret;
 } else
  return is->second;
}

bool iseven( int en )
{
 return en % 2 == 0;
}

int main ( )
{
 fib_memory fm;

 fm[1] = 1;

 int x = 1;
 while ( fib(fm, x ) < 4000000 )
  x++;

 int sum = 0;
 for ( auto it : fm )
  if ( it.second < 4000000 )
   if ( iseven(it.second) )
    sum += it.second;

 std::cout << "anserw: " << sum << std::endl;

 return 0;
}
