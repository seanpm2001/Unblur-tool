// Start of script
#include <iostream>
#include <vector>
#include <stdexcept>
/* LIBrary (LIB, Library (Software Library))
The blur reversal library for this project, main script
*/ class reverseToolMain { // Main class
  int main() { // Main method
   std::cout << "This tool is not ready yet";
   return errorHandling();
}
  int errorHandling() { // For C++ error handling, sampled from https://en.wikipedia.org/wiki/C%2B%2B
      try {
          std::vector<int> vec{3, 4, 3, 1};
          int i{vec.at(4)}; // Throws an exception, std::out_of_range (indexing for vec is from 0-3 not 1-4)
      }
      // An exception handler, catches std::out_of_range, which is thrown by vec.at(4)
      catch (std::out_of_range &e) {
          std::cerr << "Accessing a non-existent element: " << e.what() << '\n';
      }
      // To catch any other standard library exceptions (they derive from std::exception)
      catch (std::exception &e) {
          std::cerr << "Exception thrown: " << e.what() << '\n';
      }
      // Catch any unrecognised exceptions (i.e. those which don't derive from std::exception)
      catch (...) {
          std::cerr << "Some fatal error\n";
}}}
/* File info
* File type: C++ source file (*.cpp)
* File version: 1 (Thursday, April 22nd 2021 at 3:40 pm)
* Line count (including blank lines and compiler line): 35
*/
// End of script
