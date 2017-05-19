
/*
 *      Filename: 024.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-20 00:10:23
 * Last Modified: 2017-05-20 00:19:19
 */

#include <iostream>

int main()
{
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl;
  
  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;
  
  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;

  return 0;
}
