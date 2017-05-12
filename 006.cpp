
/*
 *      Filename: 006.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: Compile a program that has incorrectly nested comments.
 *        Create: 2017-05-12 16:28:31
 * Last Modified: 2017-05-12 16:31:54
 */

#include <iostream>
/*
 * cimment pairs /* / cannot nest.
 * "cannot nest" is considered source code,
 * as is the rest of the program
 */
int main() {
  return 0;
}
