#include <stdio.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], int* a)
{
  if (argc == 2) {
    sscanf(argv[1], "%d", a);
  }
}


int main(int argc, char* argv[]) 
{
  // the divisor variable
  int div = 5;
  
  // for testing only - do not change
  getTestInput(argc, argv, &div);


  // add code below to complete 2.4 for any value of div 

  // for loop
  for (int i = 0; i < 1000; i++)
  {

    // identify & print divisible numbers
    if (i % div == 0) {
       printf("%d is divisible\n", i);
    }

    // break out of loop
    if (i > 100) {
       break;
    }

   }

}
