
/*
 *      Filename: 030.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-20 18:25:02
 * Last Modified: 2017-05-20 18:26:25
 */

#include <iostream>

int main()
{
  int i = 100, sum = 0;
  for (int i = 0; i != 10; ++i) {
    sum += i;
  }
  std::cout << i << " " << sum << std::endl;

  return 0;
}
