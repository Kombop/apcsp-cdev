#include <stdio.h>
#include <math.h>
#define Pi 3.14159265358979323846

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float radius)
{
  return ((radius * radius) * Pi);
}


int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  char input[256];
  float start;
  float end;
  int reps;
  printf("Enter starting radius");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &start) == 1) break;
    printf("Not a valid radius\n");
  }
  printf("Enter ending radius");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &end) == 1)
    {
      if (end > start) break;
      printf("Enter a larger number than the start\n");
    }
    else
    {
      printf("Not a valid radius\n");
    }
  }
  reps = end - start;
  //float start = 5.2;
  //int reps = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, end);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
  for (float i = 0; i <= reps; ++i)
  {
    float area;
    area = areaOfCircle(start + i);
    printf("Area of %f radius circle is %f \n", start + i, area); 
  }
  
}
