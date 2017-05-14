
/*
 *      Filename: 009.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-14 23:37:03
 * Last Modified: 2017-05-14 23:39:03
 */

#include <iostream>

int main() {
  int sum = 0, val = 50;
  while (val <= 100) {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

  return 0;
}
