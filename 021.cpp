
/*
 *      Filename: 021.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-19 07:04:02
 * Last Modified: 2017-05-19 07:05:35
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item1, item2;
  std::cin >> item1 >> item2;   // read a pair of transactions
  std::cout << item1 + item2 << std::endl;    // print their sum

  return 0;
}
