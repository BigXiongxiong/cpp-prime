
/*
 *      Filename: 031.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-06-15 17:21:59
 * Last Modified: 2017-06-15 17:22:59
 */

#include <iostream>

int main()
{
  int i, &ri = i;
  i = 5;
  ri = 10;
  std::cout << i << " " << ri << std::endl;

  return 0;
}
