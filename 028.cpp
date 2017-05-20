
/*
 *      Filename: 028.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-20 16:52:17
 * Last Modified: 2017-05-20 16:57:05
 */

#include <iostream>
// Program for illustration purpases only: It is bad style for a function
// to use a global variable and also define a local variable with the same name
int reused = 42;    // reused has global scope
int main()
{
  int unique = 0;   // unique has block scope
  // output #1: uses global reused; print 42 0
  std::cout << reused << " " << unique << std::endl;
  int reused = 0;   // new, local object named reused hides global reused 
  // output #2: uses local reused; print 0 0
  std::cout << reused << " " << unique << std::endl;
  // output #3: explicitly requests the global reused; prints 42 0
  std::cout << ::reused << " " << unique << std::endl;

  return 0;
}
