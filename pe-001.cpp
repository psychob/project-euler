#include <iostream>

int main()
{
 int sum = 0,
     it  = 1000;

 while ( it --> 0 )
 {
  if ( it % 3 == 0 || it % 5 == 0 )
   sum += it;
 }
 
 std::cout << "anserw: " << sum << std::endl;
 return 0;
}
