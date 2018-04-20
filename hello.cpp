// This is a comment. You can put whatever you want on this line and the compiler won't read it.
/* This is also a comment! The compiler won't read what is between these two star-slash combos */

#include <iostream> // We are including our in and out stream. That enables us to use reading or writing functions like 'cout'.
using namespace std; // We are using our standard namespace. without this, we would say 'std::cout' instead of 'cout'.

// Below is our main function. The compiler will always run this function and it is required for all programs.
// the type 'int' is for integer. This tells us what the main function would return.
int main () 
{ // These brackets contain the content of the main function.
  
  cout << "Hello World!" << endl; // This statement prints Hello World! to the screen.
  
  return 0; // The main function returns 0, which usually means the function exited without any issues.
}
