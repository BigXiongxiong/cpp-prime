
/*
 *      Filename: 007.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-12 16:41:26
 * Last Modified: 2017-05-12 16:44:29
 */

#include <iostream>
int main() 
{
  std::cout << "/*";
  std::cout << "*/";
  std::cout << /* "*/" */";
  std::cout << /* "*/" /* "/*" */;

  return 0;
}
