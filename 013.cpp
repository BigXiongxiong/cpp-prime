
/*
 *      Filename: 013.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-18 01:34:30
 * Last Modified: 2017-05-18 01:36:23
 */

#include <iostream>

int main()
{
  int sum = 0;
  for (int i = -100; i <= 100; ++i) {
    sum += i;
  }

  std::cout << "Sum of -100 to 100 inclusive is " << sum << std::endl;
  
  return 0;
}
