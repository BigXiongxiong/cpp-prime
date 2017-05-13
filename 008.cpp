
/*
 *      Filename: 008.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-13 23:39:56
 * Last Modified: 2017-05-13 23:42:41
 */

#include <iostream>

int main() {
  int sum = 0, val = 1;
  // keep executing the while as long as val is less than or equal to 10
  while (val <= 10) {
    sum += val;   // assign sum + val to sum
    ++val;        // add 1 to val
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  
  return 0;
}
