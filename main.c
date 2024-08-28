// please forgive me, i just remembered this at 6:30 this night, and did this documentation in about 5 minutes.
// hope the documentation is sufficient enough for you to understand.

#include <sys/types.h>
// #include <typeinfo>
// #include <iostream>
// #include <format>

// commented header files are C++ specific header files.

#include <cs50.h>
#include <stdio.h>

// ** comments that are */u*/ are because apparently the way i did unsigned integers, c does not support it

void FactorNumber(int xint, int yint, /*u*/ int num)
{
    /*  int z =  x / y; // just the first debugging thing i used
     std::cout << z << std::endl; */

    for (int i = 0; i <= yint; i++)
    // TODO/FIXME both for loops: for some reasons something like 12 only gets 1 * 12 and 2 * 6
    // printed as a factor, maybe i need to include a for loop for uneven and even? maybe i
    // need to have a for loop that has one loop incrementing from 1 - number and
    // one for loop decrementing from number - 1?

    { // this for loop generates the numbers 1 to the number inputted, for the x in x * y = inputted
      // number
        for (int j = 0; j <= yint; j++)
        { // this for loop generates the numbers 1 to number inputted for the y in x * y = inputted
          // number

            if (i % j == 0 && i * j == num)
            {
                // this checks if the result of x being divided by y is a even number (believe its
                // one), and
                // and if if x * y = number, so that it prevents the user inputting 12, and
                // recieving 1 * 13 is a factor.
                printf("%i and %i is a factor of %i", i, j, num); // so you can see the factor
            }
        }
    }
}
void GetNum()
{
   // uint factnum; // declare the number to be factored
    int factnum = get_int(
        "Enter positive number you would like to factor: "); // takes in input of num to be factored
    FactorNumber(
        factnum, factnum,
        factnum); // calls the function "Factor Number" to factor the number, i will change it later
    // so that it doesn't use 3 arguments, i have no clue why i did that, didn't realize i could
    // just pass by value once and that i would be fine.
}
int main()
{
    // typedef unsigned int uint;
    GetNum(); // gets the number
}
