
/*
 *      Filename: 014.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-18 01:39:20
 * Last Modified: 2017-05-18 01:41:09
 */

#include <iostream>

int main()
{
  int sum = 0;
  
  for(int val = 50; val <= 100; ++val) {
    sum += val;
  }
  std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
  return 0;
}
