
/*
 *      Filename: 022.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-19 07:13:58
 * Last Modified: 2017-05-19 07:17:17
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item1, item2;
  std::cin >> item1 >> stem2;
  // first check that item1 and item2 represent the same book
  if (item1.isbn() == item2.isbn()) {
    std::cout << item1 + item2 << std::end;;
    return 0;   // indicate success
  } else {
    std::cerr << "Data must refer to same ISBN" << std::endl;
    return -1;    // indicate failure
  }
}
