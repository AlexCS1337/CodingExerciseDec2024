/* Templates */

// A function template can be used to generate as many overloaded functions as needed, each using different data types
// With templates you can write a function or a class once and use it with different data types without rewriting the entire code for each type. 
// Templates are important as they provide code reusability, type safety, and flexibility.


#include <iostream>

//function template to find the min for 2 values
template <typename T, typename U>
auto min (T x, U y) {
  return (x < y) ? x : y;
}

int main() {
  std::cout << "Min of 7 and 3.14:" << min(7, 3.14) << '\n'; // Using 2 different data types
  std::cout << "Min of 'w' and 'e': " << min('w', 'e') << '\n'; // Using with char
  
  return 0;
}
