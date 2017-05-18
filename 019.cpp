
/*
 *      Filename: 019.cpp
 *
 *        Author: Dezhu Cui
 *         Email: chinacuidezhu@gmail.com
 *          Blog: https://blog.ijs.me/
 *   Description: ---
 *        Create: 2017-05-18 16:22:05
 * Last Modified: 2017-05-18 17:32:27
 */

#include <iostream>

int main()
{
  // currVal is the number we're counting; we'll read new values into val
  int currVal = 0, val = 0;
  // read first number and ensure that we have data to process
  if (std::cin >> currVal) {
    int cnt = 1;              // store the count for the current value we're processing
    while (std::cin >> val) { // read the remaining numbers
      if (val == currVal) {     // if the vales are the same
        ++cnt;                  // and 1 to cnt
      }
      else {  // otherwise, print the count for the previous value
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val;      // remember the new value
        cnt = 1;            // reset the counter
      }
    } // while the loop ends here
    // remember to print the count for the last value in the file
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  } // outermost if statement ends here
  return 0;
}
