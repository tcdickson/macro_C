//(Smallest of Two Numbers) Write a program that defines and uses macro
// MINIMUM2 to determine the smallest of two numeric values. Input the values
// from the keyboard.#include <limits.h> Prompt the user for two integers and
// two doubles and then determine the smallest of the two using a macro MINIMUM2
// with the following logic: (x, y) ((x) < (y) ? (x) : (y))
#include <stdbool.h>
#include <stdio.h>

// defining the MACRO statement
#define MINIMUM2(x, y) ((x) < (y) ? (x) : (y))

int main() {
  // defining input variables
  double value_1;
  double value_2;

  // printing instructions to the terminal
  printf("this program will use the preprocessor MACRO to determine the "
         "smallest of two numberic values.\n");
  // entering a loop - prompting user input. We check if the user enters a non
  // nomerical number. Print an error messege and go back to the beginning of
  // loop if error is triggered.
  while (true) {
    printf("Enter first numerical value: ");
    if (scanf("%lf", &value_1) != 1) {
      printf("Invalid input. Enter a numerical value.\n");
      while (getchar() != '\n')
        ;
      // Proceed to the next if statement.
      continue;
    }
    // entering a loop - prompting user input. We check if the user enters a non
    // nomerical number. Print an error messege and go back to the beginning of
    // loop if error is triggered.
    printf("enter second numerical value: ");
    if (scanf("%lf", &value_2) != 1) {
      printf("Invalid input. Enter a numerical value.\n");
      while (getchar() != '\n')
        continue;
    }
    // break out of the loop
    break;
  }
  // calling the MACRO
  double minimum = MINIMUM2(value_1, value_2);
  // printing the final output
  printf("the smallest value entered was %.1f\n", minimum);

  return 0;
}
