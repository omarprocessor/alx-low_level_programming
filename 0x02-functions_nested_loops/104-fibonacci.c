#include <stdio.h>
/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main() {
int count = 98;
int first = 1, second = 2, next;

printf("%d, %d", first, second);

for (int i = 3; i <= count; ++i) {
next = first + second;
printf(", %d", next);
first = second;
second = next;
}

printf("\n");

return 0;
}

