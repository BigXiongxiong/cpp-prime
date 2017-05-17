
/*
 *      Filename: 016.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-18 01:46:12
 * Last Modified: 2017-05-18 01:50:47
 */

#include <iostream>
int main() 
{
  int a = 0, b = 0, c = 0;

  std::cout << "Please input two numbers: ";
  std::cin >> a >> b;

  if (a > b) {
    c = a;
    a = b;
    b = c;
  }

  for (int val = a; val <= b; ++val) {
    std::cout << val << std::endl;
  }

  return 0;
}
