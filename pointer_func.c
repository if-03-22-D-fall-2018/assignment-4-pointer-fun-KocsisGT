/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			Pointer Fun
 * Author:			Kocsis Patrik
 * ----------------------------------------------------------
 * Description:
 *
 * ----------------------------------------------------------
 */
#include <stdio.h>

void print_integers(int int_value, int* int_pointer)
{
  printf("Got an integer value %d and an address to an integer with value %d\n",int_value, *int_pointer);
}

void change_integers(int int_value, int* int_pointer)
{
  int_value = 84;
  *int_pointer = 100;
}

 int main(int argc, char const *argv[]) {
   int int_value;
   int* int_pointer;
   int number = 21;
   int_value = 42;
   int_pointer = &number; //

   change_integers(int_value, int_pointer);
   print_integers(int_value, int_pointer);

   return 0;
 }
