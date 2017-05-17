
/*
 *      Filename: 012.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-17 20:06:08
 * Last Modified: 2017-05-17 20:08:24
 */

#include <iostream>

int main()
{
  int sum = 0;
  // sum values form 1 through 10 inclusive
  for (int val = 1; val <= 10; ++val)
    sum += val;   // equivalent to sum = sum + val
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  
  return 0;
}
