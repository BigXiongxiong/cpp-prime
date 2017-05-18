
/*
 *      Filename: 017.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-18 10:37:56
 * Last Modified: 2017-05-18 10:41:51
 */

#include <iostream>

int main()
{
  int sum = 0, value = 0;
  // read until end-of-file, calculating a running total of all values read
  while (std::cin >> value) {
    sum += value;   // equivalent to sum = sum + value
  }
  std::cout << "Sum is: " << sum << std::endl;

  return 0;
}
