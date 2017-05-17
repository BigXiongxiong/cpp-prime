
/*
 *      Filename: 011.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-17 19:26:41
 * Last Modified: 2017-05-17 19:37:44
 */

#include <iostream>
int main()
{
  int a = 0, b = 0, c = 0;

  std:: cout << "Please input two numbers: ";
  std::cin >> a >> b;

  if (a > b) {
    c = a;
    a = b;
    b = c;
  }

  while (a <= b) {
    std::cout << a << std::endl;
    ++a;
  }

  return 0;
}
