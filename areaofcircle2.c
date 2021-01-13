#include <stdio.h>
#include <math.h>

// for testing
void getTestInput(int argc, char* argv[], int* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%d", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function to return the result to be printed in main
float areaOfCircle(int start)
{
        return(start * start * M_PI);
}



//the main function
int main(int argc, char* argv[])
{

  // the two variables which control the number of times areaOfCircle is called
  int a = 3;
  int b = 5;

  int i;
  float area;


  // for testing
  getTestInput(argc, argv, &a, &b);
  printf("Calculating area of circles starting at %d, and ending at %d\n", a, b);

  // call areaOfCircle function with values between start and end

if(a >= 0 && b > a)
 {
   for(i = a; i <= b; i++)
   {
   area = areaOfCircle(i);
   printf("When radius is %d, the area is %f\n", i, area);
   }
 }
  else
  {
  printf("Cannot calculate areas\nThe 2nd value must be greater than the 1st and both values must be positive\n");
  }
}
