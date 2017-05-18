
/*
 *      Filename: 020.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-19 06:58:27
 * Last Modified: 2017-05-19 07:00:32
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book;
  // read ISBN, number of copies sold, and sales price
  std::cin >> book;
  // write ISBN, number of copies sold, total revenue, and average price
  std::cout << book << std::endl;

  return 0;
}
